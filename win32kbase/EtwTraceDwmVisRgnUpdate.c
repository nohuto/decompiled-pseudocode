__int64 __fastcall EtwTraceDwmVisRgnUpdate(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000) != 0 )
    return McTemplateK0ppqt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
