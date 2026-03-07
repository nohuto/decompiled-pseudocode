void __fastcall EtwTraceGdiCreateHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v5; // di
  int v6; // esi
  _DWORD *v7; // rax
  int v8; // ecx
  int v9; // r8d

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v7 = (_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
    McTemplateK0pqqq_EtwWriteTransfer(v8, (unsigned int)&GdiCreateHandle, v9, v6, v5, *v7, v4);
  }
}
