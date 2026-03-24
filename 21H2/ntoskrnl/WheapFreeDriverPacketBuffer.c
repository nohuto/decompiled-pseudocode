/*
 * XREFs of WheapFreeDriverPacketBuffer @ 0x1405BC36C
 * Callers:
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1405BBDE0 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BBF80 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     WheapGetErrorSource @ 0x1405BBACC (WheapGetErrorSource.c)
 */

PSLIST_ENTRY __fastcall WheapFreeDriverPacketBuffer(ULONG_PTR BugCheckParameter2)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rdx
  PSLIST_ENTRY result; // rax
  __int64 v7; // rdi
  volatile __int32 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(BugCheckParameter2 + 12));
  v5 = (__int64)(ErrorSource + 12);
  result = (PSLIST_ENTRY)-(__int64)ErrorSource;
  v7 = v5 & -(__int64)(result != 0LL);
  if ( v7 )
  {
    v8 = *(volatile __int32 **)(BugCheckParameter2 + 32);
    *(_DWORD *)BugCheckParameter2 = 0;
    if ( *(_BYTE *)(BugCheckParameter2 + 48) )
    {
      result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchange(v8, 0);
    }
    else
    {
      ExFreeHeapPool((ULONG_PTR)v8, v5, v3, v4);
      result = ExFreeHeapPool(BugCheckParameter2, v9, v10, v11);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 152));
  }
  return result;
}
