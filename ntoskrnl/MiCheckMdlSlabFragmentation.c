/*
 * XREFs of MiCheckMdlSlabFragmentation @ 0x140360E50
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x140360D18 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403C7F40 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall MiCheckMdlSlabFragmentation(__int64 a1, int a2)
{
  unsigned int v2; // r11d
  unsigned __int64 v3; // r9
  int v4; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  signed __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 UnbiasedInterruptTime; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 72) << 9;
  v4 = a2;
  if ( !v3 )
    return v2;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    if ( v7 < v8 + 512 )
      return v2;
    v7 -= v8;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 17216LL);
  if ( v7 >= v10 / 0xA )
  {
    v4 = 1;
    if ( v7 < (v10 >> 1) + (v10 >> 2) )
      v4 = a2;
    goto LABEL_10;
  }
  v11 = 100 * v7 / v3;
  v12 = 5 * (10 - v3 / 0xFA00);
  if ( v12 < 10 )
    v12 = 10LL;
  if ( v11 > v12 )
  {
LABEL_10:
    v13 = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    if ( (v4
       || (unsigned __int64)(UnbiasedInterruptTime
                           - *(_QWORD *)(25408LL * *(unsigned int *)(a1 + 84)
                                       + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
                                       + 25248)) >= 0x2FAF080)
      && (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 200)) >= 0x2FAF080 )
    {
      if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
        return v2;
      return v13;
    }
  }
  return v2;
}
