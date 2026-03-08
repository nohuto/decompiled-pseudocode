/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C00AFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C00AFF24 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

LONG __fastcall OPMDestroyAllProtectedOutputs(__int64 a1)
{
  __int64 v1; // rdi
  LONG result; // eax
  struct _KMUTANT *v3; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 3824LL);
  OPM::CMutex::Lock((OPM::CMutex *)(v1 + 56));
  result = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v1 + 24, 0LL, v1 + 48);
  v3 = *(struct _KMUTANT **)(v1 + 56);
  if ( v3 )
    return KeReleaseMutex(v3, 0);
  return result;
}
