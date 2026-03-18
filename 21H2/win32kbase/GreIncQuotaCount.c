/*
 * XREFs of GreIncQuotaCount @ 0x1C00AC6C0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C00AC568 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00DA4C8 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d

  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  HmgpIncProcessHandleCountEx(a1);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
