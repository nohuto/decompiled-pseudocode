/*
 * XREFs of sub_18013C928 @ 0x18013C928
 * Callers:
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18013C928(
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
        const CHAR **a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int64 v17; // rcx
  const CHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const CHAR *v21; // rdx
  int v22; // ecx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  const CHAR *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  int v35; // [rsp+9Ch] [rbp-64h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  const CHAR *v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]

  v49 = a16;
  v17 = -1LL;
  v47 = a15;
  v45 = a14;
  v43 = a13;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v18 = *a12;
  v44 = 4LL;
  if ( v18 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = MultiByteStr;
    v20 = 1;
  }
  v41 = v20;
  v38 = a11;
  v36 = a10;
  v40 = v18;
  v42 = 0;
  v39 = 4LL;
  v21 = *a9;
  v37 = 4LL;
  if ( v21 )
  {
    do
      ++v17;
    while ( v21[v17] );
    v22 = v17 + 1;
  }
  else
  {
    v21 = MultiByteStr;
    v22 = 1;
  }
  v31 = a8;
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v33 = v21;
  v34 = v22;
  v35 = 0;
  v32 = 4LL;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 4LL;
  return sub_180109634((__int64)&dword_18019D1B8, a2, 0LL, 0LL, 0xEu, &v24);
}
