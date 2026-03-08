/*
 * XREFs of ?GetPtiLastWokenHotKey@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00C1100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall CInputGlobals::GetPtiLastWokenHotKey(CInputGlobals *this)
{
  __int64 v2; // rdi

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = 0LL;
  if ( *((_BYTE *)this + 96) )
    v2 = *((_QWORD *)this + 11);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return (struct tagTHREADINFO *)v2;
}
