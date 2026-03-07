NTSTATUS __fastcall EtwTraceForegroundWindowFullScreenStop(const GUID *a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    return McTemplateK0_EtwWriteTransfer((__int64)a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}
