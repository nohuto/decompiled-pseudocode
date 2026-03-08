/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C00A5310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // r14
  char *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // r8

  v5 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v7 = gpKernelHandleTable;
    v10 = a1 >> 16;
    v8 = (char *)qword_1C02D0E08 + (unsigned int)v6;
    v9 = 3 * ((__int64)(unsigned int)v6 >> 5);
    LOWORD(v10) = v10 & 0x7FFF;
    if ( ((_WORD)v10 == *((_WORD *)v8 + 13)
       || (_WORD)v10 == 0x7FFF
       || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v6, a2, v10, a4))
      && (v8[25] & 1) == 0
      && v8[24] == 12 )
    {
      return v7[v9];
    }
  }
  return v5;
}
