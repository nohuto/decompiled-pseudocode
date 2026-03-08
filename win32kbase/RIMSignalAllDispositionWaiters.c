/*
 * XREFs of RIMSignalAllDispositionWaiters @ 0x1C0032B90
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1C0154388 (CleanupRimDevObjInUserModeCallback.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RIMSignalAllDispositionWaiters(__int64 a1)
{
  LONG v1; // r8d
  LONG result; // eax

  v1 = *(_DWORD *)(a1 + 1104);
  if ( v1 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1096), 0, v1, 0);
    *(_DWORD *)(a1 + 1104) = 0;
  }
  return result;
}
