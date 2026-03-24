/*
 * XREFs of EditionPointerWindowHitTest @ 0x1C0217110
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01325F4 (INPUTDEST_FROM_PWND.c)
 *     xxxPointerWindowHitTest @ 0x1C0217CF4 (xxxPointerWindowHitTest.c)
 */

_OWORD *__fastcall EditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct tagPOINT a8,
        int *a9,
        int a10,
        __int64 a11,
        __int64 a12,
        struct tagPOINT *a13)
{
  struct tagWND *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _OWORD *result; // rax
  __int128 v28; // [rsp+60h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-88h]
  _DWORD v30[30]; // [rsp+78h] [rbp-80h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  if ( a4 )
  {
    v16 = *(struct tagWND **)(a3 + 80);
  }
  else
  {
    v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
    *(_QWORD *)&v28 = *(_QWORD *)(a2 + 416);
    *(_QWORD *)(a2 + 416) = &v28;
    *((_QWORD *)&v28 + 1) = v16;
    if ( v16 )
      HMLockObject(v16);
  }
  v18 = xxxPointerWindowHitTest((struct tagTHREADINFO *)a2, v16, a7, a8, a9, a10, a11, a12, a13);
  if ( !a4 )
    ThreadUnlock1(v17);
  v19 = HMValidateHandleNoSecure(v18, 1);
  v20 = INPUTDEST_FROM_PWND(v30, v19);
  v21 = v20[1];
  *a1 = *v20;
  v22 = v20[2];
  a1[1] = v21;
  v23 = v20[3];
  a1[2] = v22;
  v24 = v20[4];
  a1[3] = v23;
  v25 = v20[5];
  a1[4] = v24;
  v26 = v20[6];
  result = a1;
  a1[5] = v25;
  a1[6] = v26;
  return result;
}
