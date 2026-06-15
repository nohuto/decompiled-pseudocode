/*
 * XREFs of sub_180115054 @ 0x180115054
 * Callers:
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 */

ULONG __fastcall sub_180115054(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v21; // rcx
  int v22; // r9d
  _WORD *v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  _WORD *v26; // rdx
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  _WORD *v31; // [rsp+60h] [rbp-A0h]
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  _WORD *v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+7Ch] [rbp-84h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int64 v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  __int64 v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int64 v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]

  v59 = a19;
  v57 = a18;
  v21 = -1LL;
  v22 = 2;
  v55 = a17;
  v53 = a16;
  v51 = a15;
  v49 = a14;
  v47 = a13;
  v45 = a12;
  v43 = a11;
  v41 = a10;
  v39 = a9;
  v37 = a8;
  v60 = 4LL;
  v58 = 4LL;
  v56 = 4LL;
  v23 = *a7;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v46 = 4LL;
  v44 = 4LL;
  v42 = 4LL;
  v40 = 4LL;
  v38 = 4LL;
  if ( v23 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v23[v24] );
    v25 = 2 * v24 + 2;
  }
  else
  {
    v23 = &unk_18015C744;
    v25 = 2;
  }
  v34 = v23;
  v35 = v25;
  v36 = 0;
  v26 = *a6;
  if ( *a6 )
  {
    do
      ++v21;
    while ( v26[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v26 = &unk_18015C744;
  }
  v29 = a5;
  v31 = v26;
  v32 = v22;
  v33 = 0;
  v30 = 8LL;
  return sub_180109634(a1, a2, 0LL, 0LL, 0x11u, &v28);
}
