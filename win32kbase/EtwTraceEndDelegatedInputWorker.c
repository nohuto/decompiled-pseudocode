void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cpttttttpppqqq_EtwWriteTransfer(v3, (unsigned int)&EndDelegatedInputWorker, v4, v2, a1);
  }
}
