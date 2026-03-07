__int64 __fastcall HMValidateHandleNoSecure(int a1, char a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ecx
  _QWORD *v6; // r15
  char *v7; // rsi
  __int64 v8; // r14
  char v9; // al

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = dword_1C02D0E10 * (unsigned __int16)a1;
    v6 = gpKernelHandleTable;
    v7 = (char *)qword_1C02D0E08 + v5;
    v8 = 3 * ((__int64)v5 >> 5);
    LOWORD(a1) = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *((_WORD *)v7 + 13)
       || (_WORD)a1 == 0x7FFF
       || !(_WORD)a1 && PsGetCurrentProcessWow64Process())
      && (v7[25] & 1) == 0 )
    {
      v9 = v7[24];
      if ( v9 == a2 || a2 == -1 && v9 )
        return v6[v8];
    }
  }
  return v4;
}
