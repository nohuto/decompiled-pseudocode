/*
 * XREFs of TriageGetBugcheckData @ 0x140B98DCC
 * Callers:
 *     VfTriageSystem @ 0x140B49FDC (VfTriageSystem.c)
 *     MmTriageActiveInLastCrash @ 0x140B96664 (MmTriageActiveInLastCrash.c)
 * Callees:
 *     TriagepVerifyDump @ 0x140B98EC0 (TriagepVerifyDump.c)
 */

__int64 __fastcall TriageGetBugcheckData(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  if ( !(unsigned __int8)TriagepVerifyDump(a1) )
    return 3221225485LL;
  *a2 = *(_DWORD *)(a1 + 56);
  *a3 = *(_QWORD *)(a1 + 64);
  *a4 = *(_QWORD *)(a1 + 72);
  *a5 = *(_QWORD *)(a1 + 80);
  *a6 = *(_QWORD *)(a1 + 88);
  return 0LL;
}
