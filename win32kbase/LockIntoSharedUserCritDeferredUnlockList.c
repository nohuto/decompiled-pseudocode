/*
 * XREFs of LockIntoSharedUserCritDeferredUnlockList @ 0x1C01539B8
 * Callers:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C009E600 (ThreadUnlockWorker1.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall LockIntoSharedUserCritDeferredUnlockList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rbx
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_SHAREDONLY(a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4140);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4141);
  v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
  if ( *((_QWORD *)v5 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4144);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  result = gpSharedUserCritDeferredUnlockListHead;
  if ( gpSharedUserCritDeferredUnlockListHead )
    *((_QWORD *)v5 + 2) = gpSharedUserCritDeferredUnlockListHead;
  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v5;
  return result;
}
