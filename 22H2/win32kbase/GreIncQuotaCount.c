/*
 * XREFs of GreIncQuotaCount @ 0x1C009B7C0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C009B668 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00C9B64 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d

  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  HmgpIncProcessHandleCountEx(a1);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
