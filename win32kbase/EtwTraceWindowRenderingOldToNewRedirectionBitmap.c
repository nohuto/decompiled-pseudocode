__int64 __fastcall EtwTraceWindowRenderingOldToNewRedirectionBitmap(
        int a1,
        char a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200) != 0 )
    return McTemplateK0pppqqqqpppqqqq_EtwWriteTransfer(
             a1,
             (unsigned int)&WindowRenderingOldToNewRedirectionBitmap,
             a3,
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14);
  return result;
}
