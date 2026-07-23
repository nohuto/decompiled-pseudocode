/*
 * XREFs of WheapFreeDriverPacketBuffer @ 0x1405BC59C
 * Callers:
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1405BC010 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BC1B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     WheapGetErrorSource @ 0x1405BBCFC (WheapGetErrorSource.c)
 */

PSLIST_ENTRY __fastcall WheapFreeDriverPacketBuffer(ULONG_PTR BugCheckParameter2)
{
  __int64 *ErrorSource; // rax
  unsigned __int64 v3; // rdx
  PSLIST_ENTRY result; // rax
  __int64 v5; // rdi
  volatile __int32 *v6; // rcx

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(BugCheckParameter2 + 12));
  v3 = (unsigned __int64)(ErrorSource + 12);
  result = (PSLIST_ENTRY)-(__int64)ErrorSource;
  v5 = v3 & -(__int64)(result != 0LL);
  if ( v5 )
  {
    v6 = *(volatile __int32 **)(BugCheckParameter2 + 32);
    *(_DWORD *)BugCheckParameter2 = 0;
    if ( *(_BYTE *)(BugCheckParameter2 + 48) )
    {
      result = (PSLIST_ENTRY)(unsigned int)_InterlockedExchange(v6, 0);
    }
    else
    {
      ExFreeHeapPool((ULONG_PTR)v6);
      result = ExFreeHeapPool(BugCheckParameter2);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 152));
  }
  return result;
}
