NTSTATUS __fastcall EtwTraceTouchTargetingWindowHitTestStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchTargetingWindowHitTestStart, &W32kControlGuid);
  return result;
}
