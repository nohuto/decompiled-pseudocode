NTSTATUS __fastcall EtwTraceFlipManagerBindingStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &FlipManagerBindingStop, &W32kControlGuid);
  return result;
}
