/*
 * XREFs of ValidateHmonitor @ 0x1C0096E80
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C005DDB8 (DrvGetCurrentDpiInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmonitor(int a1)
{
  __int16 v1; // r8d^2
  unsigned int v2; // ecx
  _QWORD *v3; // rsi
  char *v4; // rbx
  __int64 v5; // rdi
  __int16 v6; // r8
  __int64 result; // rax

  v1 = HIWORD(a1);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = dword_1C028FE70 * (unsigned __int16)a1,
        v3 = gpKernelHandleTable,
        v4 = (char *)qword_1C028FE68 + v2,
        v5 = 3 * ((__int64)v2 >> 5),
        v6 = v1 & 0x7FFF,
        (v1 & 0x7FFF) != *((_WORD *)v4 + 13))
    && v6 != 0x7FFF
    && (v6 || !PsGetCurrentProcessWow64Process())
    || (v4[25] & 1) != 0
    || v4[24] != 12
    || (result = v3[v5]) == 0 )
  {
    UserSetLastError(1461);
    return 0LL;
  }
  return result;
}
