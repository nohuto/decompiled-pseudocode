/*
 * XREFs of sub_1800E2920 @ 0x1800E2920
 * Callers:
 *     sub_1800E5760 @ 0x1800E5760 (sub_1800E5760.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800E2920(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, const CHAR **a5)
{
  const CHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  const CHAR *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = MultiByteStr;
    v8 = 1;
  }
  v13 = 0;
  v12 = v8;
  v11 = v6;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 3, (__int64)v10);
}
