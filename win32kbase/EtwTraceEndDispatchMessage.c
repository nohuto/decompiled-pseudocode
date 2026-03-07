__int64 __fastcall EtwTraceEndDispatchMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cd_EtwWriteTransfer(a1, &EndDispatchMessage, a3, a4, a2);
  }
  return result;
}
