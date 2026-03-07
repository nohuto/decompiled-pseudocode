NTSTATUS __fastcall EtwTracePTPReadThresholdsStart(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &PTPReadThresholdsStart, &W32kControlGuid);
  return result;
}
