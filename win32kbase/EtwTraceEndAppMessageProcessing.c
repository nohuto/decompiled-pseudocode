void __fastcall EtwTraceEndAppMessageProcessing(int a1)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = GetCallbackCount();
    McTemplateK0cd_EtwWriteTransfer(v3, &EndAppMessageProcessing, v4, v2, a1);
  }
}
