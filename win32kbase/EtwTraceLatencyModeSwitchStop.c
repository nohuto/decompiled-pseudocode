NTSTATUS __fastcall EtwTraceLatencyModeSwitchStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &LatencyModeSwitchStop, &W32kControlGuid);
  return result;
}
