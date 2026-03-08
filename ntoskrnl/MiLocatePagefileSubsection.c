/*
 * XREFs of MiLocatePagefileSubsection @ 0x14031DDB0
 * Callers:
 *     MiAdvanceVadView @ 0x1402D5E10 (MiAdvanceVadView.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiSkipEntirePagefileRegions @ 0x1402EC8D4 (MiSkipEntirePagefileRegions.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiOffsetToProtos @ 0x140331B90 (MiOffsetToProtos.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x1407F1600 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiLocatePagefileSubsection(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int *v10; // rcx

  v3 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 || a1[12] >= 0x40000000 )
  {
    v5 = 0x100000LL;
    if ( a1[12] >= 0x40000000 )
      v5 = 0x200000LL;
    v6 = v5 >> 3;
    if ( v6 == 0x20000 )
      v7 = v3 >> 17;
    else
      v7 = v3 / v6;
    if ( v6 == 0x20000 )
      v8 = *a2 & 0x1FFFF;
    else
      v8 = v3 % v6;
    v9 = (unsigned int)v7 + 1LL;
    if ( !v8 )
      v9 = (unsigned int)v7;
    if ( v9 <= *(unsigned int *)(*(_QWORD *)a1 + 96LL) )
    {
      v10 = &a1[22 * v7];
      if ( v8 < v10[11] )
      {
        *a2 = v8;
        return v10;
      }
    }
  }
  else if ( v3 < a1[11] )
  {
    return a1;
  }
  return 0LL;
}
