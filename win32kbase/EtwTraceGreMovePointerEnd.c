__int64 __fastcall EtwTraceGreMovePointerEnd(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&GreMovePointerEnd, a3, a1, a2, a3);
  return result;
}
