/*
 * XREFs of sub_1800BB410 @ 0x1800BB410
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 *     sub_1800638B0 @ 0x1800638B0 (sub_1800638B0.c)
 * Callees:
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800BB410(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = (unsigned int)(2 * v4 + 2);
  }
  else
  {
    v5 = 10LL;
  }
  v10 = 0;
  v9 = v5;
  if ( !a3 )
    a3 = L"NULL";
  v12 = 4LL;
  v8 = a3;
  v11 = &v13;
  return sub_18000F730(v5, (__int64)&unk_18016D4A0, (__int64)a3, 3LL, (__int64)v7);
}
