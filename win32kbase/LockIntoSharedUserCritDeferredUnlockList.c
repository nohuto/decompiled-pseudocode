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
