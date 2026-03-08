/*
 * XREFs of ?GetDimmedState@CInputGlobals@@QEBA_NXZ @ 0x1C020B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::GetDimmedState(CInputGlobals *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 97);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
