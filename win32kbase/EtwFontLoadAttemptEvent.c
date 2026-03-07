char __fastcall EtwFontLoadAttemptEvent(int a1, int a2, __int64 a3, char a4)
{
  char result; // al

  result = BYTE3(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000000LL) != 0 )
    return McTemplateK0zqzt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
