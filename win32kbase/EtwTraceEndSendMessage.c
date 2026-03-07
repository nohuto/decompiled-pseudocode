void __fastcall EtwTraceEndSendMessage(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cp_EtwWriteTransfer(v3, &EndSendMessage, v4, v2, a1);
  }
}
