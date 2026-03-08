/*
 * XREFs of NtCreateProcess @ 0x1409AABE0
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateProcessEx @ 0x1409AAC70 (NtCreateProcessEx.c)
 */

__int64 __fastcall NtCreateProcess(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v9; // r11d
  int v10; // ecx

  v9 = a6 & 1 | 2;
  if ( (a7 & 1) == 0 )
    v9 = a6 & 1;
  v10 = v9 | 4;
  if ( !a5 )
    v10 = v9;
  return NtCreateProcessEx(a1, a2, a3, a4, v10, a6, a7, a8);
}
