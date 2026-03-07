void __fastcall EtwTraceBeginInjectMouse(char a1, char a2, char a3)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = GetCallbackCount();
    McTemplateK0cddd_EtwWriteTransfer(v7, (unsigned int)&BeginInjectMouse, v8, v6, a1, a2, a3);
  }
}
