/*
 * XREFs of ?WasLastInputJournalling@CInputGlobals@@QEBA_NXZ @ 0x1C020B980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CInputGlobals::WasLastInputJournalling(CInputGlobals *this)
{
  char v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_BYTE *)this + 85);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
