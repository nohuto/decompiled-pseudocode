/*
 * XREFs of ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C008D2DC
 * Callers:
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C008D0B0 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpBytesToString(unsigned __int8 *a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // r9

  LODWORD(v4) = 0;
  v5 = 4LL;
  do
  {
    v6 = (unsigned int)v4;
    v7 = (unsigned int)(v4 + 1);
    a3[v6] = (*a1 & 0xF) + 55 + ((*a1 & 0xFu) < 0xA ? 0xFFF9 : 0);
    LOBYTE(v6) = *a1++ >> 4;
    a3[v7] = (unsigned __int8)v6 + ((unsigned __int8)v6 < 0xAu ? 48 : 55);
    v4 = (unsigned int)(v7 + 1);
    --v5;
  }
  while ( v5 );
  a3[v4] = 0;
}
