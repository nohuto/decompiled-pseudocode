__int64 __fastcall ValidateHmonitor(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  char *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v5 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1,
        v6 = gpKernelHandleTable,
        v9 = a1 >> 16,
        v7 = (char *)qword_1C02D0E08 + (unsigned int)v5,
        v8 = 3 * ((__int64)(unsigned int)v5 >> 5),
        LOWORD(v9) = v9 & 0x7FFF,
        (_WORD)v9 != *((_WORD *)v7 + 13))
    && (_WORD)v9 != 0x7FFF
    && ((_WORD)v9 || !PsGetCurrentProcessWow64Process(v5, a2, v9, a4))
    || (v7[25] & 1) != 0
    || v7[24] != 12
    || (result = v6[v8]) == 0 )
  {
    UserSetLastError(1461);
    return 0LL;
  }
  return result;
}
