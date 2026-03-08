/*
 * XREFs of ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x1C017EC50
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C0187CB4 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C0188C80 (-IsDestroyed@COPMProtectedOutput@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

char __fastcall OPM::CMonitorPDO::IsDestroyed(OPM::CMonitorPDO *this)
{
  void **v1; // rbx
  bool v3; // zf
  char v4; // di

  v1 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v1);
  if ( !*((_WORD *)this + 12)
    || !*((_WORD *)this + 13)
    || !*((_QWORD *)this + 4)
    || (v3 = *((_QWORD *)this + 2) == 0LL, v4 = 0, v3) )
  {
    v4 = 1;
  }
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  return v4;
}
