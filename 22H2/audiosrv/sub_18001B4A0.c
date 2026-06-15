/*
 * XREFs of sub_18001B4A0 @ 0x18001B4A0
 * Callers:
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180019278 @ 0x180019278 (sub_180019278.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_1800C8320 @ 0x1800C8320 (sub_1800C8320.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18006AC00 @ 0x18006AC00 (sub_18006AC00.c)
 *     sub_18006AC64 @ 0x18006AC64 (sub_18006AC64.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 sub_18001B4A0(__int64 *a1, __int64 a2, ...)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 result; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( !a2 )
    goto LABEL_8;
  v4 = sub_18006AC64(a2, (__int64 *)va);
  v5 = (int)v4;
  if ( v4 == -1 )
    sub_1800B8610(2147942414LL);
  v6 = *a1;
  if ( (((*(_DWORD *)(*a1 - 12) - v4) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
  {
    sub_18001B550(a1, v4);
    v6 = *a1;
  }
  sub_18006AC00(v6, (int)v5 + 1, a2, (__int64 *)va);
  if ( (int)v5 < 0 || (int)v5 > *(_DWORD *)(*a1 - 12) )
LABEL_8:
    sub_1800B8610(2147942487LL);
  *(_DWORD *)(*a1 - 16) = v5;
  result = *a1;
  *(_WORD *)(*a1 + 2 * v5) = 0;
  return result;
}
