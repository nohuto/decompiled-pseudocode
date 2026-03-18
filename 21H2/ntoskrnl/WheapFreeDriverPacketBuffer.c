/*
 * XREFs of WheapFreeDriverPacketBuffer @ 0x140644808
 * Callers:
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140644250 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406443F0 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 *     WheapErrDescIsDeviceDriver @ 0x1406447D0 (WheapErrDescIsDeviceDriver.c)
 */

char __fastcall WheapFreeDriverPacketBuffer(ULONG_PTR BugCheckParameter3)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rdi
  volatile __int32 *v4; // rax

  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *(_DWORD *)(BugCheckParameter3 + 12));
  v3 = (unsigned __int64)(ErrorSource + 12) & -(__int64)(ErrorSource != 0LL);
  LOBYTE(v4) = WheapErrDescIsDeviceDriver(v3);
  if ( (_BYTE)v4 )
  {
    v4 = *(volatile __int32 **)(BugCheckParameter3 + 32);
    *(_DWORD *)BugCheckParameter3 = 0;
    if ( *(_BYTE *)(BugCheckParameter3 + 48) )
    {
      _InterlockedExchange(v4, 0);
    }
    else
    {
      ExFreeHeapPool((ULONG_PTR)v4);
      LOBYTE(v4) = ExFreeHeapPool(BugCheckParameter3);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 152));
  }
  return (char)v4;
}
