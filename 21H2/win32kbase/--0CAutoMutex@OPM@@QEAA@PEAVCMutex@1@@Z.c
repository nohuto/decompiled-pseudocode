/*
 * XREFs of ??0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z @ 0x1C00870B0
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C013FA0C (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00870E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

OPM::CAutoMutex *__fastcall OPM::CAutoMutex::CAutoMutex(OPM::CAutoMutex *this, struct OPM::CMutex *a2)
{
  *(_QWORD *)this = a2;
  OPM::CMutex::Lock(a2);
  return this;
}
