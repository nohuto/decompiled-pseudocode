/*
 * XREFs of sub_180001108 @ 0x180001108
 * Callers:
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

__int64 __fastcall sub_180001108(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9)
{
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  __int64 v17; // [rsp+60h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  __int64 v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  _WORD *v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+8Ch] [rbp+Bh]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  __int64 v25; // [rsp+98h] [rbp+17h]

  v24 = a9;
  v25 = 4LL;
  v10 = *a8;
  if ( *a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_18015C744;
    v12 = 2;
  }
  v19 = a7;
  v17 = a6;
  v15 = a5;
  v21 = v10;
  v22 = v12;
  v23 = 0;
  v20 = 4LL;
  v18 = 4LL;
  v16 = 4LL;
  return sub_180109634((int)&dword_18019C4F0, a2, 0, 0, 7u, &v14);
}
