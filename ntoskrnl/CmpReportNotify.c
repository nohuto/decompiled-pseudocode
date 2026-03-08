/*
 * XREFs of CmpReportNotify @ 0x140783638
 * Callers:
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 */

void __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb(&v7, a1);
  CmpReportNotifyForKcbStack(&v7, a2, a3, a4, v7, *((_QWORD *)&v7 + 1), v8);
  if ( *((_QWORD *)&v8 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v8 + 1));
}
