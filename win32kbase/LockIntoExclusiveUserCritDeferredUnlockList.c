/*
 * XREFs of LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00D1154
 * Callers:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0072A40 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C009E600 (ThreadUnlockWorker1.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LockIntoExclusiveUserCritDeferredUnlockList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // r8
  char *v7; // rdi
  __int64 result; // rax

  v4 = (unsigned __int16)*(_DWORD *)a1;
  v6 = 3 * v4;
  v7 = (char *)gpKernelHandleTable + 24 * v4;
  if ( !gphePrimaryDestroyTarget )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4188LL);
  if ( !gbInDestroyHandleTableObjects && !IS_USERCRIT_OWNED_EXCLUSIVE(a1, v4, v6, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4189LL);
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4199LL);
  if ( *((_QWORD *)v7 + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4200LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *((_QWORD *)v7 + 2) = gpExclusiveUserCritDeferredUnlockListHead;
  gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v7;
  result = ++gcDeferredDestroyTargets;
  if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4209LL);
  return result;
}
