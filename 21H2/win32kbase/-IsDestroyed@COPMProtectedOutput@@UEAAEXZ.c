/*
 * XREFs of ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C00C0010
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00870E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ @ 0x1C00C0070 (-IsDestroyed@CMonitorPDO@OPM@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall COPMProtectedOutput::IsDestroyed(COPMProtectedOutput *this)
{
  void **v1; // rbx
  unsigned __int8 IsDestroyed; // di

  v1 = (void **)*((_QWORD *)this + 1);
  OPM::CMutex::Lock(v1);
  if ( *((_BYTE *)this + 80) )
    IsDestroyed = OPM::CMonitorPDO::IsDestroyed(this);
  else
    IsDestroyed = 1;
  if ( *v1 )
    KeReleaseMutex((PRKMUTEX)*v1, 0);
  return IsDestroyed;
}
