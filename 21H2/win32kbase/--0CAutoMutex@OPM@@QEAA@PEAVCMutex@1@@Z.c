/*
 * XREFs of ??0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z @ 0x1C009AB70
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C016C918 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C009ABA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

OPM::CAutoMutex *__fastcall OPM::CAutoMutex::CAutoMutex(OPM::CAutoMutex *this, struct OPM::CMutex *a2)
{
  *(_QWORD *)this = a2;
  OPM::CMutex::Lock(a2);
  return this;
}
