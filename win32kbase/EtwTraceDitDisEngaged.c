__int64 __fastcall EtwTraceDitDisEngaged(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitDisEngaged, &W32kControlGuid);
  return result;
}
