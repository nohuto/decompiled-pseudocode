/*
 * XREFs of EditionPostMouseMoveToQ @ 0x1C004F570
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F480 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostMouseMoveToQ(
        struct tagQ *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct tagINPUT_MESSAGE_SOURCE *a6)
{
  struct tagINPUT_MESSAGE_SOURCE *v6; // rsi
  __int64 v10; // rax
  __int128 *v11; // rdi
  __int64 v12; // rax
  __int128 *v13; // rbx
  __int64 v14; // rax
  __int128 *v15; // r11
  __int64 v16; // r9
  char *v17; // r8
  __int64 v18; // xmm1_8
  __int128 v19; // xmm0
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __int128 v23; // xmm0
  __int64 v24; // xmm1_8
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  int v32; // [rsp+78h] [rbp-9h] BYREF
  __int64 v33; // [rsp+80h] [rbp-1h] BYREF
  struct tagWND *v34; // [rsp+88h] [rbp+7h] BYREF
  __int128 v35; // [rsp+90h] [rbp+Fh]
  __int64 v36; // [rsp+A0h] [rbp+1Fh]
  struct tagQ *v37; // [rsp+D8h] [rbp+57h] BYREF

  v37 = a1;
  v6 = a6;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0;
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v37,
                        (__int64 *)&v34,
                        (struct tagTHREADINFO **)&v33,
                        0x200u,
                        a6,
                        &v32) )
    return 0LL;
  v10 = *((_QWORD *)v37 + 15);
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 16);
  v11 = (__int128 *)gObjDummyLock;
  if ( v10 )
    v11 = (__int128 *)(v10 + 392);
  v12 = *((_QWORD *)v37 + 11);
  v13 = (__int128 *)gObjDummyLock;
  if ( v12 )
    v13 = (__int128 *)(v12 + 392);
  v14 = *((_QWORD *)v37 + 12);
  v15 = (__int128 *)gObjDummyLock;
  if ( v14 )
    v15 = (__int128 *)(v14 + 392);
  v16 = gObjDummyLock;
  if ( v33 )
    v16 = v33 + 392;
  v17 = (char *)gObjDummyLock;
  if ( v34 )
    v17 = (char *)v34 + 56;
  v18 = *((_QWORD *)&gpsiLock + 2);
  v35 = gpsiLock;
  v19 = *(_OWORD *)v17;
  v36 = v18;
  v20 = *((_QWORD *)v17 + 2);
  v35 = v19;
  v21 = *(_OWORD *)v16;
  v36 = v20;
  v22 = *(_QWORD *)(v16 + 16);
  v35 = v21;
  v23 = *(_OWORD *)v37;
  v36 = v22;
  v24 = *((_QWORD *)v37 + 2);
  v35 = v23;
  v25 = *v15;
  v36 = v24;
  v26 = *((_QWORD *)v15 + 2);
  v35 = v25;
  v27 = *v13;
  v36 = v26;
  v28 = *((_QWORD *)v13 + 2);
  v35 = v27;
  v29 = *v11;
  v36 = v28;
  v30 = *((_QWORD *)v11 + 2);
  v35 = v29;
  v36 = v30;
  return PostInputMessage(v37, v34, 0x200u, a2, a3, a4, a5, 0, v6, 0LL, 0LL, v32, v33);
}
