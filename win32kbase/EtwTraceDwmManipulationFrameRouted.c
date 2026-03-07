NTSTATUS __fastcall EtwTraceDwmManipulationFrameRouted(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    LODWORD(v4) = a2;
    return McTemplateK0dq_EtwWriteTransfer(a1, &DwmManipulationFrameRouted, a3, a1, v4);
  }
  return result;
}
