/*
 * XREFs of sub_18013C814 @ 0x18013C814
 * Callers:
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18013C814(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const CHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const CHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-91h]
  __int64 v19; // [rsp+58h] [rbp-89h]
  __int64 v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  __int64 v22; // [rsp+70h] [rbp-71h]
  __int64 v23; // [rsp+78h] [rbp-69h]
  __int64 v24; // [rsp+80h] [rbp-61h]
  __int64 v25; // [rsp+88h] [rbp-59h]
  const CHAR *v26; // [rsp+90h] [rbp-51h]
  int v27; // [rsp+98h] [rbp-49h]
  int v28; // [rsp+9Ch] [rbp-45h]
  __int64 v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+A8h] [rbp-39h]
  __int64 v31; // [rsp+B0h] [rbp-31h]
  __int64 v32; // [rsp+B8h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-21h]
  __int64 v34; // [rsp+C8h] [rbp-19h]
  __int64 v35; // [rsp+D0h] [rbp-11h]
  __int64 v36; // [rsp+D8h] [rbp-9h]

  v35 = a13;
  v33 = a12;
  v31 = a11;
  v29 = a10;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v13 = *a9;
  v30 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = MultiByteStr;
    v15 = 1;
  }
  v27 = v15;
  v24 = a8;
  v22 = a7;
  v20 = a6;
  v18 = a5;
  v26 = v13;
  v28 = 0;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  return sub_180109634((__int64)&dword_18019D1B8, a2, 0LL, 0LL, 0xBu, &v17);
}
