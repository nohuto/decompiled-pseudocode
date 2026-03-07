NTSTATUS __fastcall EtwTraceDitTerminated(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitTerminated, &W32kControlGuid);
  return result;
}
