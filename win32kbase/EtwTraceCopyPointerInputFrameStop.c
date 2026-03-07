NTSTATUS __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
