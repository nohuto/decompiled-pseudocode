/*
 * XREFs of ??0CAutoMutex@OPM@@QEAA@PEAVCMutex@1@@Z @ 0x1C00A2510
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00A25A0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

OPM::CAutoMutex *__fastcall OPM::CAutoMutex::CAutoMutex(OPM::CAutoMutex *this, struct OPM::CMutex *a2)
{
  *(_QWORD *)this = a2;
  OPM::CMutex::Lock(a2);
  return this;
}
