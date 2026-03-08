/*
 * XREFs of ?AppendByte@Base853Encoder@@QEAAXE@Z @ 0x18010CA74
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18010BE9C (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18010CA14 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 * Callees:
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18010CAC8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18010CB24 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 */

void __fastcall Base853Encoder::AppendByte(Base853Encoder *this, unsigned __int8 a2)
{
  int v2; // ebx
  int v4; // r8d

  v2 = a2;
  Base853Encoder::EnsureZeroesAreSerialized(this);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) |= v2 << (8 * (3 - v4));
  *((_DWORD *)this + 3) = v4 + 1;
  if ( v4 == 3 )
    Base853Encoder::EncodeBlock(this);
}
