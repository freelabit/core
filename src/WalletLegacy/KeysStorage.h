// Copyright (c) 2011-2018 The Cryptonote developers
// Copyright (c) 2014-2018 XDN developers
// Copyright (c) 2016-2018 BXC developers
// Copyright (c) 2017-2018 Royalties developers
// Copyright (c) 2017-2018 Freelabit developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "crypto/crypto.h"

#include <stdint.h>

namespace CryptoNote {

class ISerializer;

//This is DTO structure. Do not change it.
struct KeysStorage {
  uint64_t creationTimestamp;

  Crypto::PublicKey spendPublicKey;
  Crypto::SecretKey spendSecretKey;

  Crypto::PublicKey viewPublicKey;
  Crypto::SecretKey viewSecretKey;

  void serialize(ISerializer& serializer, const std::string& name);
};

} //namespace CryptoNote
