/*
 * XREFs of EditionPostInputMessage @ 0x1C0110810
 * Callers:
 *     <none>
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C004F480 (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 */

__int64 __fastcall EditionPostInputMessage(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        _QWORD *a11)
{
  __int64 v11; // r10
  void *v12; // rbx
  _QWORD *v13; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  struct tagINPUT_MESSAGE_SOURCE *v18; // rsi
  __int64 v19; // rax
  __int128 *v20; // r11
  __int64 v21; // rax
  __int128 *v22; // r10
  __int64 v23; // rax
  __int128 *v24; // r9
  char *v25; // r8
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int128 v29; // xmm0
  __int64 v30; // xmm1_8
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  __int128 v33; // xmm0
  __int64 v34; // xmm1_8
  __int128 v35; // xmm0
  __int64 v36; // xmm1_8
  __int128 v37; // xmm0
  __int64 v38; // xmm1_8
  struct tagUIPI_INFO *v40; // [rsp+58h] [rbp-31h]
  __int64 v41; // [rsp+70h] [rbp-19h] BYREF
  __int128 v42; // [rsp+78h] [rbp-11h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  struct tagQ *v44; // [rsp+C0h] [rbp+37h] BYREF
  struct tagWND *v45; // [rsp+C8h] [rbp+3Fh] BYREF

  v45 = a2;
  v11 = *(_QWORD *)(a1 + 80);
  v12 = 0LL;
  v13 = a11;
  v16 = *a11;
  if ( *(char *)(*(_QWORD *)(v11 + 40) + 19LL) < 0 )
    return 0LL;
  if ( a3 - 512 <= 0xE )
  {
    if ( !v16 || *(_DWORD *)v16 != 2 )
      goto LABEL_5;
LABEL_20:
    v12 = *(void **)(v16 + 8);
    goto LABEL_5;
  }
  if ( a3 - 581 <= 0x12 )
  {
    v45 = *(struct tagWND **)(a1 + 80);
    if ( v16 )
      goto LABEL_20;
  }
LABEL_5:
  v17 = *(_QWORD *)(v11 + 16);
  v18 = a10;
  LODWORD(a11) = 0;
  v41 = v17;
  v44 = *(struct tagQ **)(v17 + 432);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v44,
                        (__int64 *)&v45,
                        (struct tagTHREADINFO **)&v41,
                        a3,
                        a10,
                        &a11) )
    return 0LL;
  v19 = *((_QWORD *)v44 + 15);
  if ( v19 )
    v19 = *(_QWORD *)(v19 + 16);
  v20 = (__int128 *)gObjDummyLock;
  if ( v19 )
    v20 = (__int128 *)(v19 + 392);
  v21 = *((_QWORD *)v44 + 11);
  v22 = (__int128 *)gObjDummyLock;
  if ( v21 )
    v22 = (__int128 *)(v21 + 392);
  v23 = *((_QWORD *)v44 + 12);
  v24 = (__int128 *)gObjDummyLock;
  if ( v23 )
    v24 = (__int128 *)(v23 + 392);
  v25 = (char *)gObjDummyLock;
  if ( v45 )
    v25 = (char *)v45 + 56;
  v26 = *((_QWORD *)&gpsiLock + 2);
  v42 = gpsiLock;
  v27 = *(_OWORD *)v25;
  v43 = v26;
  v28 = *((_QWORD *)v25 + 2);
  v42 = v27;
  v29 = *(_OWORD *)(v41 + 392);
  v43 = v28;
  v30 = *(_QWORD *)(v41 + 408);
  v40 = (struct tagUIPI_INFO *)v13[1];
  v42 = v29;
  v31 = *(_OWORD *)v44;
  v43 = v30;
  v32 = *((_QWORD *)v44 + 2);
  v42 = v31;
  v33 = *v24;
  v43 = v32;
  v34 = *((_QWORD *)v24 + 2);
  v42 = v33;
  v35 = *v22;
  v43 = v34;
  v36 = *((_QWORD *)v22 + 2);
  v42 = v35;
  v37 = *v20;
  v43 = v36;
  v38 = *((_QWORD *)v20 + 2);
  v42 = v37;
  v43 = v38;
  return PostInputMessage(v44, v45, a3, a4, a5, a6, a7, a8, a9, v18, v12, v40, (int)a11, v41);
}
