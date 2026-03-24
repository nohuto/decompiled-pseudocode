/*
 * XREFs of xxxPointerCallHook @ 0x1C01F048C
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     PhkFirstValid @ 0x1C00202CC (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00FD9B4 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     IsMiPPointerMessage @ 0x1C01E1EDC (IsMiPPointerMessage.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EFA60 (PrepareSentPointerMessageForClient.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1008 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F13E8 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(unsigned int a1, __int64 a2, unsigned int *a3, int a4, unsigned int a5)
{
  unsigned int *v6; // rbx
  unsigned __int16 *v9; // rdi
  void **v10; // rsi
  unsigned __int64 ThreadPointerData; // rax
  int ThreadPointerHookData; // eax
  unsigned int *v13; // rcx
  unsigned __int64 *v14; // r8
  void **v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v18; // edi
  struct tagHOOK *Valid; // rax
  HWND *v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  v25 = 0;
  v22 = 0LL;
  v6 = a3;
  v23 = 0LL;
  v24 = 0LL;
  if ( a4 == 3 )
  {
    v9 = (unsigned __int16 *)(a3 + 4);
    v10 = (void **)(a3 + 2);
    if ( !(unsigned int)IsMiPPointerMessage(a3[2]) )
    {
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL),
                            *v9,
                            0LL,
                            0LL,
                            v21);
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 == 4 )
  {
    v10 = (void **)(a3 + 2);
    v9 = (unsigned __int16 *)(a3 + 4);
    if ( !(unsigned int)IsMiPPointerMessage(a3[4]) )
    {
      ThreadPointerData = *(_QWORD *)v6;
      goto LABEL_10;
    }
    return a5;
  }
  if ( a4 != 12 )
    return a5;
  v9 = (unsigned __int16 *)(a3 + 4);
  if ( (unsigned int)IsMiPPointerMessage(a3[6]) )
    return a5;
  v10 = (void **)(v6 + 2);
  ThreadPointerData = *((_QWORD *)v6 + 1);
LABEL_10:
  if ( !ThreadPointerData || CTouchProcessor::IsPointerMsgRedirected(gpTouchProcessor, ThreadPointerData, &v25) && !v25 )
    return a5;
  switch ( a4 )
  {
    case 3:
      ThreadPointerHookData = MakeThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL), *v9);
      if ( ThreadPointerHookData )
      {
        v16 = *((_OWORD *)v6 + 1);
        v22 = *(_OWORD *)v6;
        v17 = *((_OWORD *)v6 + 2);
        v6 = (unsigned int *)&v22;
        v23 = v16;
        v24 = v17;
      }
      goto LABEL_22;
    case 4:
      v14 = (unsigned __int64 *)v6;
      v15 = v10;
      v13 = (unsigned int *)v9;
      goto LABEL_19;
    case 12:
      v13 = v6 + 6;
      v14 = (unsigned __int64 *)v10;
      v15 = (void **)v9;
LABEL_19:
      ThreadPointerHookData = PrepareSentPointerMessageForClient(v13, v15, v14, 1);
      goto LABEL_22;
  }
  ThreadPointerHookData = 0;
LABEL_22:
  v18 = a5;
  if ( ThreadPointerHookData )
  {
    Valid = (struct tagHOOK *)PhkFirstValid(gptiCurrent, a4);
    v18 = xxxCallHook2(Valid, a1, a2, (__int64)v6, 0LL, 0);
    RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1088LL));
  }
  return v18;
}
