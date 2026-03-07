void __fastcall EtwTraceBeginAppMessageProcessing(char a1, char a2, __int64 a3)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    LOBYTE(v6) = GetCallbackCount();
    McTemplateK0cdqq_EtwWriteTransfer(v8, v7, v9, v6, a1, a2, v5);
  }
}
