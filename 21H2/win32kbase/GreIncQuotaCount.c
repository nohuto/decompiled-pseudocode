/*
 * XREFs of GreIncQuotaCount @ 0x1C009AA00
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0037AB0 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C009A8A8 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00C98C8 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
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
