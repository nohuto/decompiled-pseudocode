/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C0096A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateHmonitorNoRip(int a1)
{
  __int16 v1; // r8d^2
  __int64 v2; // rbx
  unsigned int v3; // ecx
  _QWORD *v4; // r14
  char *v5; // rdi
  __int64 v6; // rsi
  __int16 v7; // r8

  v1 = HIWORD(a1);
  v2 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = dword_1C028FE70 * (unsigned __int16)a1;
    v4 = gpKernelHandleTable;
    v5 = (char *)qword_1C028FE68 + v3;
    v6 = 3 * ((__int64)v3 >> 5);
    v7 = v1 & 0x7FFF;
    if ( ((v1 & 0x7FFF) == *((_WORD *)v5 + 13) || v7 == 0x7FFF || !v7 && PsGetCurrentProcessWow64Process())
      && (v5[25] & 1) == 0
      && v5[24] == 12 )
    {
      return v4[v6];
    }
  }
  return v2;
}
