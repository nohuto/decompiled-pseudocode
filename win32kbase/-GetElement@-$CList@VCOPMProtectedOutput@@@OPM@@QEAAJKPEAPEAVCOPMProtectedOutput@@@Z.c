/*
 * XREFs of ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188900
 * Callers:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C00AFF24 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00AFF94 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188928 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::CList<COPMProtectedOutput>::GetElement(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a2 >= *(_DWORD *)(a1 + 12) )
    return 3221225473LL;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
  if ( !v3 )
    return 3221225473LL;
  *a3 = v3;
  return 0LL;
}
