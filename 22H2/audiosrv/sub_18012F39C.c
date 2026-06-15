/*
 * XREFs of sub_18012F39C @ 0x18012F39C
 * Callers:
 *     sub_180130E20 @ 0x180130E20 (sub_180130E20.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18012F39C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        void **a7)
{
  _WORD *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r8
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  _WORD *v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+7Ch] [rbp-1Ch]

  v9 = *a7;
  if ( *a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v9 = &unk_18015C744;
    v11 = 2;
  }
  v19 = v9;
  v20 = v11;
  v21 = 0;
  v12 = *a6;
  v15 = a5;
  v17 = v12;
  v18 = 16LL;
  v16 = 4LL;
  return sub_180109634(a1, a2, 0LL, 0LL, 5u, &v14);
}
