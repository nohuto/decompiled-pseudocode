__int64 __fastcall EtwTraceTokenCompositionSurfaceObjectEvent(
        int a1,
        int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        char a9)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0ppqxxxqqq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
