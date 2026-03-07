NTSTATUS __fastcall EtwTraceEndPointerFrameCommit(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, &EndPointerFrameCommit, a3, a1, a2, 0);
  return result;
}
