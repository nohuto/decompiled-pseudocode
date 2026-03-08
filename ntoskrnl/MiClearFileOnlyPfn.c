/*
 * XREFs of MiClearFileOnlyPfn @ 0x140639DF4
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiQueueExtentPfnDeletion @ 0x14063CCC0 (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  __int128 v1; // xmm0
  __int64 v3; // rcx
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-10h]

  v1 = 0LL;
  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 0x8000000000000000uLL;
  v9 = 0LL;
  v7 = 0LL;
  BYTE2(v9) = 69;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
  {
    MiSetPfnIdentity((__int64)&v7, 3);
    v1 = v7;
  }
  BYTE3(v9) |= 0x10u;
  v3 = *((_QWORD *)&v9 + 1) | 0x40000000000000LL;
  v4 = (*(_BYTE *)(a1 + 35) & 0x40) == 0;
  *((_QWORD *)&v9 + 1) |= 0x40000000000000uLL;
  if ( !v4 )
    BYTE3(v9) |= 0x40u;
  *(_OWORD *)a1 = v1;
  *((_QWORD *)&v9 + 1) = v3 | 0x20000000000000LL;
  v5 = v9;
  *(_OWORD *)(a1 + 16) = v8;
  *(_OWORD *)(a1 + 32) = v5;
  return MiQueueExtentPfnDeletion(a1);
}
