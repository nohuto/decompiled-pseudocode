/*
 * XREFs of ?GetDisplayOnState@CInputGlobals@@QEBA_NXZ @ 0x1C020B5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::GetDisplayOnState(CInputGlobals *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 98);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
