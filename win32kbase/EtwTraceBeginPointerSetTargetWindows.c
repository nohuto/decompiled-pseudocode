NTSTATUS __fastcall EtwTraceBeginPointerSetTargetWindows(int a1)
{
  __int64 v1; // rcx
  const EVENT_DESCRIPTOR *v2; // rdx
  NTSTATUS result; // eax

  v1 = (unsigned int)(a1 - 577);
  if ( !(_DWORD)v1 || (_DWORD)v1 == 4 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) == 0 )
      return result;
    v2 = (const EVENT_DESCRIPTOR *)&BeginPointerUpdateSetTargetWindows;
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) == 0 )
      return result;
    v2 = (const EVENT_DESCRIPTOR *)&BeginPointerSetTargetWindows;
  }
  return McTemplateK0_EtwWriteTransfer(v1, v2, &W32kControlGuid);
}
