__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 DxgkWin32kInterface; // rax
  _QWORD v7[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v7, 0, 0x48uLL);
  v7[0] = 0x4800000003LL;
  memset(&v7[1], 0, 36);
  if ( a1 )
  {
    LODWORD(v7[7]) = *(_DWORD *)a1;
    v7[8] = *(_QWORD *)(a1 + 16);
    HIDWORD(v7[7]) = *(_DWORD *)(a1 + 24);
    BYTE4(v7[6]) = 0;
  }
  else
  {
    BYTE4(v7[6]) = 1;
  }
  LODWORD(v7[6]) = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL, v4);
  return (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 304))(v7);
}
