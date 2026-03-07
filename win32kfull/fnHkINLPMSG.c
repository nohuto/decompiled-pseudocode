__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r15d
  _DWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // al
  bool v18; // bl
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rsi
  ULONG64 v26; // rax
  __int128 *v27; // xmm0_8
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // ecx
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct tagTHREADINFO *v42; // rax
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rbx
  unsigned __int64 v47; // [rsp+38h] [rbp-110h] BYREF
  __int64 v48; // [rsp+40h] [rbp-108h]
  __int64 v49; // [rsp+48h] [rbp-100h]
  int v50; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-E0h]
  __int64 v52; // [rsp+70h] [rbp-D8h]
  __int64 v53; // [rsp+78h] [rbp-D0h]
  __int128 v54; // [rsp+80h] [rbp-C8h]
  _OWORD v55[2]; // [rsp+90h] [rbp-B8h] BYREF
  int v56; // [rsp+B0h] [rbp-98h]
  __int64 v57; // [rsp+C0h] [rbp-88h]
  __int128 v58; // [rsp+D8h] [rbp-70h]
  volatile void *Address; // [rsp+E8h] [rbp-60h]
  __int128 v60; // [rsp+F0h] [rbp-58h]
  __int128 *v61; // [rsp+100h] [rbp-48h]
  int v62; // [rsp+150h] [rbp+8h] BYREF
  __int64 v63; // [rsp+158h] [rbp+10h]
  __int64 v64; // [rsp+160h] [rbp+18h]

  v11 = 0;
  v47 = 0LL;
  v62 = 0;
  v63 = 0LL;
  v64 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  memset_0(&v50, 0, 0x58uLL);
  v50 = a1;
  v51 = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v54 = *a3;
  v55[0] = a3[1];
  v55[1] = a3[2];
  v13 = *((_DWORD *)a3 + 2);
  if ( ((v13 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v13 == 576 || ((v13 - 281) & 0xFFFFFFFD) == 0 )
    {
      v32 = *((_QWORD *)a3 + 2);
      v63 = v32;
      v33 = *((_QWORD *)a3 + 3);
      v64 = v33;
      v34 = HMValidateHandle(v33, 0xFFu);
      v35 = v34;
      if ( !v34 )
        return 0LL;
      v36 = *((_DWORD *)a3 + 2);
      v37 = v36 == 576;
      v38 = (unsigned int)(v36 - 576);
      if ( v37 && *(_BYTE *)(_HMPheFromObject(v34) + 24) != 20 )
        return 0LL;
      if ( ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v35) + 24) != 21 )
        return 0LL;
      v48 = *((_QWORD *)PtiCurrentShared(v38) + 88);
      v49 = *((_QWORD *)PtiCurrentShared(v39) + 89);
      *((_QWORD *)PtiCurrentShared(v40) + 88) = v33;
      *((_QWORD *)PtiCurrentShared(v41) + 89) = v32;
    }
  }
  else
  {
    v63 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v13, v55);
  }
  v52 = a4;
  v53 = a5;
  v14 = a7;
  v56 = *a7;
  v15 = SGDGetUserSessionState(v12);
  v17 = ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v15 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v16);
  v18 = v17;
  UserSessionSwitchLeaveCrit(v16);
  EtwTraceBeginCallback(47LL);
  v19 = KeUserModeCallback(47LL, &v50, 88LL, &v47, &v62);
  EtwTraceEndCallback(47LL);
  if ( v18 )
    EnterSharedCrit(v21, v20, v22);
  else
    EnterCrit(0LL, 0LL);
  if ( v13 == 576 || ((v13 - 281) & 0xFFFFFFFD) == 0 )
  {
    v42 = PtiCurrentShared(v23);
    v43 = v48;
    *((_QWORD *)v42 + 88) = v48;
    v44 = PtiCurrentShared(v43);
    *((_QWORD *)v44 + 89) = v49;
  }
  if ( v19 < 0 || v62 != 24 )
    return 0LL;
  v24 = (__int64 *)v47;
  if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  v25 = *v24;
  v57 = *v24;
  v26 = v47;
  if ( v47 + 24 < v47 || v47 + 24 > MmUserProbeAddress )
    v26 = MmUserProbeAddress;
  v58 = *(_OWORD *)v26;
  v27 = *(__int128 **)(v26 + 16);
  Address = v27;
  v60 = v58;
  v61 = v27;
  ProbeForRead(v27, 0x38uLL, 4u);
  *a3 = *v27;
  a3[1] = v27[1];
  a3[2] = v27[2];
  *v14 ^= (*((_DWORD *)v27 + 12) ^ *v14) & 0x10;
  v28 = *((unsigned int *)a3 + 2);
  if ( (((_DWORD)v28 - 258) & 0xFFFFFFFB) != 0 || !a6 )
    goto LABEL_19;
  v45 = a3 + 1;
  if ( *(_QWORD *)&v55[0] != *((_QWORD *)a3 + 2) )
  {
    RtlMBMessageWParamCharToWCS(v28, v45);
LABEL_19:
    v29 = v63;
    goto LABEL_20;
  }
  v29 = v63;
  *v45 = v63;
LABEL_20:
  v30 = *((_DWORD *)a3 + 2);
  if ( v30 == 576 || ((v30 - 281) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a3 + 2) = v13;
    *((_QWORD *)a3 + 2) = v29;
    *((_QWORD *)a3 + 3) = v64;
  }
  else if ( v29 == 1 )
  {
    v46 = v64;
    if ( v13 == 576 )
      FreeTouchInputInfo(v64, 1LL);
    LOBYTE(v11) = ((v13 - 281) & 0xFFFFFFFD) == 0;
    if ( v11 )
      FreeGestureInfo(v46, 1LL);
  }
  return v25;
}
