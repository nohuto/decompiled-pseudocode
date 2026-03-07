NTSTATUS __fastcall EtwTraceFlipManagerBindingStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0p_EtwWriteTransfer(a1, &FlipManagerBindingStart, &W32kControlGuid, a1);
  return result;
}
