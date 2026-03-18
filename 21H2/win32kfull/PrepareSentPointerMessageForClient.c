/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01EA2F0
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00514D0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01EAF28 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EBC1C (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  void *v7; // r8
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  HWND v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int128 v28; // [rsp+F0h] [rbp-10h]
  __int128 v29; // [rsp+100h] [rbp+0h]
  __int128 v30; // [rsp+110h] [rbp+10h]
  __int128 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+130h] [rbp+30h]
  unsigned __int16 v33; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v34; // [rsp+188h] [rbp+88h] BYREF
  int v35; // [rsp+190h] [rbp+90h] BYREF

  v4 = *a3;
  v5 = *a1;
  v7 = *a2;
  v18 = 0LL;
  v19 = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v17[0] = 0LL;
  if ( !MakePointerMessage(v4, v5, v7, &v18, &v19, &v33, &v34, &v35, v17) )
    return 0LL;
  v11 = HMValidateHandleNoSecure((int)v17[0], 1);
  v12 = INPUTDEST_FROM_PWND(&v26, v11);
  *(_OWORD *)v17 = *v12;
  v20 = v12[1];
  v21 = v12[2];
  v22 = v12[3];
  v23 = v12[4];
  v24 = v12[5];
  v25 = v12[6];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v26 = *(_OWORD *)v17;
  if ( a4 )
  {
    v27 = v20;
    v28 = v21;
    v29 = v22;
    v30 = v23;
    v31 = v24;
    v32 = v25;
    v14 = CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, ThreadWin32Thread + 1112, v33, v34, v4, v5, &v26);
  }
  else
  {
    v28 = v21;
    v27 = v20;
    v30 = v23;
    v29 = v22;
    v32 = v25;
    v31 = v24;
    v14 = CTouchProcessor::AddThreadPointerData(gpTouchProcessor, ThreadWin32Thread + 1112, v33, v34, v4, v5, &v26, 0);
  }
  if ( !v14 )
    return 0LL;
  v16 = v18;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v16;
  *a3 = v19;
  return result;
}
