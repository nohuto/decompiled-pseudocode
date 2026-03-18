/*
 * XREFs of xxxPointerCallHook @ 0x1C01EAF28
 * Callers:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0053590 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C00EA6F4 (PhkFirstValid.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C00F3A94 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     IsMiPPointerMessage @ 0x1C01DCE34 (IsMiPPointerMessage.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EA2F0 (PrepareSentPointerMessageForClient.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBB0C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01EBEE4 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(unsigned int a1, unsigned __int64 a2, __int128 *a3, int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rbp
  unsigned __int16 *v11; // rdi
  void **v12; // r14
  unsigned __int64 ThreadPointerData; // rax
  unsigned int *v14; // rcx
  unsigned __int64 *v15; // r8
  void **v16; // rdx
  struct tagHOOK *Valid; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  HWND *v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  v25 = 0;
  v5 = a5;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  switch ( a4 )
  {
    case 3:
      v11 = (unsigned __int16 *)(a3 + 1);
      v12 = (void **)a3 + 1;
      if ( (unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 2)) )
        return v5;
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(ThreadWin32Thread + 1112),
                            *v11,
                            0LL,
                            0LL,
                            v21);
      break;
    case 4:
      v12 = (void **)a3 + 1;
      v11 = (unsigned __int16 *)(a3 + 1);
      if ( (unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 4)) )
        return v5;
      ThreadPointerData = *(_QWORD *)a3;
      break;
    case 12:
      v11 = (unsigned __int16 *)(a3 + 1);
      if ( (unsigned int)IsMiPPointerMessage(*((_DWORD *)a3 + 6)) )
        return v5;
      v12 = (void **)a3 + 1;
      ThreadPointerData = *((_QWORD *)a3 + 1);
      break;
    default:
      return v5;
  }
  if ( ThreadPointerData && (!CTouchProcessor::IsPointerMsgRedirected(gpTouchProcessor, ThreadPointerData, &v25) || v25) )
  {
    if ( a4 == 3 )
    {
      if ( !(unsigned int)MakeThreadPointerHookData(
                            (struct tagTHREADINPUTPOINTERLIST *)(ThreadWin32Thread + 1112),
                            *v11) )
        return v5;
      v19 = a3[1];
      v22 = *a3;
      v20 = a3[2];
      a3 = &v22;
      v23 = v19;
      v24 = v20;
      goto LABEL_18;
    }
    if ( a4 == 4 )
    {
      v15 = (unsigned __int64 *)a3;
      v16 = v12;
      v14 = (unsigned int *)v11;
    }
    else
    {
      v14 = (unsigned int *)a3 + 6;
      v15 = (unsigned __int64 *)v12;
      v16 = (void **)v11;
    }
    if ( (unsigned int)PrepareSentPointerMessageForClient(v14, v16, v15, 1) )
    {
LABEL_18:
      Valid = (struct tagHOOK *)PhkFirstValid(ThreadWin32Thread, a4);
      v5 = xxxCallHook2(Valid, a1, a2, (__int64)a3, 0LL, 0);
      RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(ThreadWin32Thread + 1112));
    }
  }
  return v5;
}
