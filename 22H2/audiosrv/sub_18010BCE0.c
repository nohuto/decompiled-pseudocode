/*
 * XREFs of sub_18010BCE0 @ 0x18010BCE0
 * Callers:
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     sub_18010CB28 @ 0x18010CB28 (sub_18010CB28.c)
 *     sub_1801333EC @ 0x1801333EC (sub_1801333EC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010BCE0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, const CHAR **a5)
{
  const CHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF
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
  return sub_180109634(a1, a2, 0LL, 0LL, 3u, &v10);
}
