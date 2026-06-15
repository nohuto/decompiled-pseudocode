/*
 * XREFs of sub_1800C8E8C @ 0x1800C8E8C
 * Callers:
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_180064888 @ 0x180064888 (sub_180064888.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_1800C6AEC @ 0x1800C6AEC (sub_1800C6AEC.c)
 *     sub_1800CB090 @ 0x1800CB090 (sub_1800CB090.c)
 */

__int64 __fastcall sub_1800C8E8C(__int64 *a1, HMODULE a2, unsigned int a3)
{
  HRSRC Resource; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // r10
  unsigned __int16 v10; // dx

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( !Resource )
    return 0LL;
  v6 = (unsigned __int16 *)sub_1800CB090(a2, Resource);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *v6;
  v9 = *a1;
  v10 = *v6;
  if ( (((*(_DWORD *)(*a1 - 12) - v8) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
  {
    sub_18001B550(a1, v8);
    v10 = *v7;
    v9 = *a1;
  }
  sub_1800C6AEC(v9, v8, (__int64)(v7 + 1), v10);
  sub_1800448E4(a1, v8);
  return 1LL;
}
