void __fastcall EtwTracePostInjectedGestureMessage(__int64 *a1, char a2)
{
  __int64 v3; // rbx
  int v4; // r9d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v3 = *a1;
    LOBYTE(v4) = GetCallbackCount();
    McTemplateK0cpp_EtwWriteTransfer(v6, v5, v7, v4, v3, a2);
  }
}
