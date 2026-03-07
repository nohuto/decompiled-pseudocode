__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  void *v7; // r8
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rbx
  struct tagTHREADINFO *v18; // rax
  int v19; // eax
  struct tagTHREADINFO *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 result; // rax
  HWND v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int128 v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-20h]
  __int128 v34; // [rsp+F0h] [rbp-10h]
  __int128 v35; // [rsp+100h] [rbp+0h]
  __int128 v36; // [rsp+110h] [rbp+10h]
  __int128 v37; // [rsp+120h] [rbp+20h]
  __int128 v38; // [rsp+130h] [rbp+30h]
  unsigned __int16 v39; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v40; // [rsp+188h] [rbp+88h] BYREF
  int v41; // [rsp+190h] [rbp+90h] BYREF

  v4 = *a3;
  v5 = *a1;
  v7 = *a2;
  v24 = 0LL;
  v25 = 0LL;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v23[0] = 0LL;
  if ( !MakePointerMessage(v4, v5, v7, &v24, &v25, &v39, &v40, &v41, v23) )
    return 0LL;
  v11 = HMValidateHandleNoSecure((int)v23[0], 1);
  v12 = INPUTDEST_FROM_PWND(&v32, v11);
  *(_OWORD *)v23 = *v12;
  v26 = v12[1];
  v27 = v12[2];
  v28 = v12[3];
  v29 = v12[4];
  v30 = v12[5];
  v31 = v12[6];
  v14 = SGDGetUserSessionState(v13);
  v16 = a4 == 0;
  v17 = *(_QWORD *)(v14 + 3424);
  if ( v16 )
  {
    v20 = PtiCurrentShared(v15);
    v32 = *(_OWORD *)v23;
    v34 = v27;
    v33 = v26;
    v36 = v29;
    v35 = v28;
    v38 = v31;
    v37 = v30;
    v19 = CTouchProcessor::AddThreadPointerData(v17, (char *)v20 + 1128, v39, v40, v4, v5, &v32, 0);
  }
  else
  {
    v18 = PtiCurrentShared(v15);
    v32 = *(_OWORD *)v23;
    v33 = v26;
    v34 = v27;
    v35 = v28;
    v36 = v29;
    v37 = v30;
    v38 = v31;
    v19 = CTouchProcessor::AddThreadPointerHookData(v17, (char *)v18 + 1128, v39, v40, v4, v5, &v32);
  }
  if ( !v19 )
    return 0LL;
  v21 = v24;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v21;
  *a3 = v25;
  return result;
}
