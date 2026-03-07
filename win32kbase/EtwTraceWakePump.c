void __fastcall EtwTraceWakePump(char a1, __int64 *a2, char a3)
{
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    if ( a2 )
      v5 = *a2;
    else
      LOBYTE(v5) = 0;
    LOBYTE(v6) = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v7, (unsigned int)&WakePump, v8, v6, a1, v5, 0, 0, a3, 0);
  }
}
