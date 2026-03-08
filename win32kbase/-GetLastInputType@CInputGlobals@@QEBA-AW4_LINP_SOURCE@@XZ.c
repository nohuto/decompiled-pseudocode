/*
 * XREFs of ?GetLastInputType@CInputGlobals@@QEBA?AW4_LINP_SOURCE@@XZ @ 0x1C020B630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputGlobals::GetLastInputType(__int64 a1)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 80);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
