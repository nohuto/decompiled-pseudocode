/*
 * XREFs of HvlpEnableNextLogicalProcessor @ 0x14053E9B4
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     HvlpGetVpIndexFromApicId @ 0x14053EBC8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x14053EE40 (HvlpMapStatisticsPage.c)
 *     HvlpStartLogicalProcessor @ 0x14053FE30 (HvlpStartLogicalProcessor.c)
 */

__int64 __fastcall HvlpEnableNextLogicalProcessor(__int64 a1, unsigned __int16 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbp
  int *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // cx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = HvlpLogicalProcessorCount;
  v11 = 0;
  v3 = a1;
  v12 = 0LL;
  v4 = a2;
  v5 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
  if ( (HvlpRootFlags & 0x20) != 0 )
  {
    v11 = HvlpLogicalProcessorCount;
    result = HvlpStartLogicalProcessor((unsigned int)HvlpLogicalProcessorCount, (unsigned int)a1, a2, v5 + 14);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = HvlpGetVpIndexFromApicId(a1, &v11);
    if ( (int)result < 0 )
      return result;
    v2 = v11;
  }
  if ( (HvlpRootFlags & 0x10) != 0 )
  {
    v10 = 0LL;
    LODWORD(v10) = v2;
    result = HvlpMapStatisticsPage(2LL, &v10, &v12);
    if ( (int)result < 0 )
      return result;
    v7 = MmMapIoSpaceEx(v12, 4096LL, 2u);
    if ( !v7 )
      return 3221225626LL;
    *((_QWORD *)v5 + 4) = v7;
  }
  v5[1] = v2;
  v8 = KeNodeBlock[v4];
  v5[2] = v3;
  *((_WORD *)v5 + 6) = v4;
  v9 = *(_WORD *)(v8 + 2);
  v5[6] = -1;
  *((_WORD *)v5 + 7) = v9;
  result = 0LL;
  *v5 = 1;
  return result;
}
