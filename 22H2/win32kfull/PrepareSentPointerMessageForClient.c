/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01C4208
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0127BE0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01C4E30 (xxxPointerCallHook.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00AE500 (INPUTDEST_FROM_PWND.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C5B64 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  void *v7; // r8
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rbx
  struct tagTHREADINFO *v21; // rax
  int v22; // eax
  struct tagTHREADINFO *v23; // rax
  unsigned __int64 v24; // rcx
  __int64 result; // rax
  HWND v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+F0h] [rbp-10h]
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int128 v39; // [rsp+110h] [rbp+10h]
  __int128 v40; // [rsp+120h] [rbp+20h]
  __int128 v41; // [rsp+130h] [rbp+30h]
  unsigned __int16 v42; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v43; // [rsp+188h] [rbp+88h] BYREF
  int v44; // [rsp+190h] [rbp+90h] BYREF

  v4 = *a3;
  v5 = *a1;
  v7 = *a2;
  v27 = 0LL;
  v28 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v26[0] = 0LL;
  if ( !MakePointerMessage(v4, v5, v7, &v27, &v28, &v42, &v43, &v44, v26) )
    return 0LL;
  v11 = HMValidateHandleNoSecure((int)v26[0], 1);
  v12 = INPUTDEST_FROM_PWND(&v35, v11);
  *(_OWORD *)v26 = *v12;
  v29 = v12[1];
  v30 = v12[2];
  v31 = v12[3];
  v32 = v12[4];
  v33 = v12[5];
  v34 = v12[6];
  v14 = SGDGetUserSessionState(v13);
  v19 = a4 == 0;
  v20 = *(_QWORD *)(v14 + 3424);
  if ( v19 )
  {
    v23 = PtiCurrentShared(v16, v15, v17, v18);
    v35 = *(_OWORD *)v26;
    v37 = v30;
    v36 = v29;
    v39 = v32;
    v38 = v31;
    v41 = v34;
    v40 = v33;
    v22 = CTouchProcessor::AddThreadPointerData(v20, (char *)v23 + 1128, v42, v43, v4, v5, &v35, 0);
  }
  else
  {
    v21 = PtiCurrentShared(v16, v15, v17, v18);
    v35 = *(_OWORD *)v26;
    v36 = v29;
    v37 = v30;
    v38 = v31;
    v39 = v32;
    v40 = v33;
    v41 = v34;
    v22 = CTouchProcessor::AddThreadPointerHookData(v20, (char *)v21 + 1128, v42, v43, v4, v5, &v35);
  }
  if ( !v22 )
    return 0LL;
  v24 = v27;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v24;
  *a3 = v28;
  return result;
}
