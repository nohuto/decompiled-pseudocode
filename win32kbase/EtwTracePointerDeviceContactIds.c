__int64 __fastcall EtwTracePointerDeviceContactIds(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqqdd_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, SBYTE4(a4));
  return result;
}
