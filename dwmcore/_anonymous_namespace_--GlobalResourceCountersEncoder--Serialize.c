/*
 * XREFs of _anonymous_namespace_::GlobalResourceCountersEncoder::Serialize @ 0x18010B04C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18010CA14 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18010CAC8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18010CB24 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 */

void __fastcall anonymous_namespace_::GlobalResourceCountersEncoder::Serialize(unsigned int *a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-20h] BYREF
  int v4; // [rsp+28h] [rbp-18h]
  int v5; // [rsp+2Ch] [rbp-14h]
  int v6; // [rsp+30h] [rbp-10h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v3 = a2;
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, *a1);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[1]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[2]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[3]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[4]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[5]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[6]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[7]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[8]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[9]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[10]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[11]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[12]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[13]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[14]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[15]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[16]);
  Base853Encoder::AppendVarInt((Base853Encoder *)&v3, a1[17]);
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)&v3);
  if ( v5 )
    Base853Encoder::EncodeBlock((Base853Encoder *)&v3);
}
