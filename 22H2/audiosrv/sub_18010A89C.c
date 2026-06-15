/*
 * XREFs of sub_18010A89C @ 0x18010A89C
 * Callers:
 *     sub_18010B268 @ 0x18010B268 (sub_18010B268.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_18010A89C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const CHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void **a15,
        __int64 a16)
{
  __int64 v17; // rdx
  _WORD *v18; // rcx
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rcx
  const CHAR *v22; // rcx
  int v23; // edx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-D0h] BYREF
  const CHAR *v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _WORD *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]

  v50 = a16;
  v17 = -1LL;
  v51 = 8LL;
  v18 = *a15;
  if ( *a15 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &unk_18015C744;
    v20 = 2;
  }
  v45 = a14;
  v43 = a13;
  v41 = a12;
  v39 = a11;
  v37 = a10;
  v35 = a9;
  v47 = v18;
  v48 = v20;
  v49 = 0;
  v21 = *a8;
  v31 = a7;
  v29 = a6;
  v33 = v21;
  v46 = 4LL;
  v44 = 1LL;
  v22 = *a5;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 16LL;
  v32 = 8LL;
  v30 = 4LL;
  if ( v22 )
  {
    do
      ++v17;
    while ( v22[v17] );
    v23 = v17 + 1;
  }
  else
  {
    v22 = MultiByteStr;
    v23 = 1;
  }
  v26 = v22;
  v27 = v23;
  v28 = 0;
  return sub_180109634((__int64)&CallbackContext, a2, 0LL, 0LL, 0xEu, &v25);
}
