/*
 * XREFs of MiExpandVadBitMapDown @ 0x140A3970C
 * Callers:
 *     MiExpandVadBitMap @ 0x1407295BC (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x140729534 (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1[1];
  v10 = 0LL;
  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  if ( a2 > (unsigned __int64)(-524288 * qword_140C66CE8 + (v3 << 19)) >> 16 )
    return 0LL;
  v5 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v6 = ((8 * v5) >> 12) + (((8 * v5) & 0xFFF) != 0);
  v7 = (_QWORD *)(v3 - (v6 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v7, v3 - 1, &v10) < 0 )
    return 0LL;
  *(_QWORD *)(v4 + 272) += v10;
  *a1 += v6 << 15;
  a1[1] = v7;
  if ( v7 == (_QWORD *)qword_140C66CE8 )
  {
    *v7 |= 1uLL;
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
  }
  a1[2] = v8;
  a1[4] = v8;
  a1[3] = 0LL;
  MiUpdateVadBits((a1[1] - qword_140C66CE8) << 19, ((a1[1] - qword_140C66CE8) << 19) + (v6 << 31));
  return 1LL;
}
