/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C0088420
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0088474 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00885A0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

LONG OPMDestroyAllProtectedOutputs()
{
  OPM *v0; // rdi
  LONG result; // eax
  struct _KMUTANT *v2; // rcx

  v0 = qword_1C0250C58;
  OPM::CMutex::Lock((OPM *)((char *)qword_1C0250C58 + 56));
  result = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
             (char *)v0 + 24,
             0LL,
             (char *)v0 + 48);
  v2 = (struct _KMUTANT *)*((_QWORD *)v0 + 7);
  if ( v2 )
    return KeReleaseMutex(v2, 0);
  return result;
}
