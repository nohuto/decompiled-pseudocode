__int64 __fastcall EtwTraceDitEngaged(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &DitEngaged, &W32kControlGuid);
  return result;
}
