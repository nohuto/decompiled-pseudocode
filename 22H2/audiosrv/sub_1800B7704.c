/*
 * XREFs of sub_1800B7704 @ 0x1800B7704
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_180053C10 @ 0x180053C10 (sub_180053C10.c)
 *     sub_18005BC6C @ 0x18005BC6C (sub_18005BC6C.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D7B5C @ 0x1800D7B5C (sub_1800D7B5C.c)
 *     sub_1800D7EB0 @ 0x1800D7EB0 (sub_1800D7EB0.c)
 *     sub_180115BB8 @ 0x180115BB8 (sub_180115BB8.c)
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800B7704(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void **a5)
{
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  _BYTE v11[32]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v7 = &unk_18015C744;
    v9 = 2;
  }
  v12 = v7;
  v13 = v9;
  v14 = 0;
  return sub_1800521E8(a1, a2, 0LL, 0LL, 3, (__int64)v11);
}
