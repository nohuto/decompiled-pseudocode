/*
 * XREFs of ?WasLastInputInjected@CInputGlobals@@QEBA_NXZ @ 0x1C020B920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::WasLastInputInjected(CInputGlobals *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 84);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
