/*
 * XREFs of ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C001ED50
 * Callers:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C001B494 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C001F9F0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 * Callees:
 *     <none>
 */

struct _W32PROCESS *__fastcall GetW32ProcessFromId(int a1, struct _EPROCESS **a2)
{
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  *a2 = 0LL;
  v3 = (void *)a1;
  if ( a1 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v5, v4, v6, v7);
  if ( PsLookupProcessByProcessId(v3, a2) < 0 )
    return 0LL;
  return (struct _W32PROCESS *)PsGetProcessWin32Process(*a2);
}
