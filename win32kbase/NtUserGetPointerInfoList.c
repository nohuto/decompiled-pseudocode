__int64 __fastcall NtUserGetPointerInfoList(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        ULONG64 a6,
        ULONG64 a7,
        _OWORD *Address)
{
  int v8; // esi
  int v9; // ebx
  int v11; // r15d
  unsigned __int64 v12; // r14
  __int64 v13; // r9
  int PointerInfoSize; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r12
  _DWORD *v18; // r13
  _OWORD *v19; // rdi
  int v20; // ecx
  unsigned int *v21; // rax
  __int64 v22; // r8
  unsigned int *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v27; // ebx
  _DWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int128 v37; // xmm3
  __int128 v38; // xmm4
  __int128 v39; // xmm5
  __int64 v40; // rax
  int PointerFrameInfoInternal; // eax
  ULONG64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v46[10]; // [rsp+50h] [rbp-F8h] BYREF
  struct tagTHREADINFO *v47; // [rsp+78h] [rbp-D0h]
  __int128 v48; // [rsp+B0h] [rbp-98h]
  __int128 v49; // [rsp+C0h] [rbp-88h]
  __int128 v50; // [rsp+D0h] [rbp-78h]
  __int128 v51; // [rsp+E0h] [rbp-68h]
  __int128 v52; // [rsp+F0h] [rbp-58h]
  __int128 v53; // [rsp+100h] [rbp-48h]
  unsigned int v54; // [rsp+150h] [rbp+8h] BYREF
  unsigned int v55; // [rsp+158h] [rbp+10h]
  int v56; // [rsp+160h] [rbp+18h]

  v56 = a3;
  v55 = a2;
  v8 = a4;
  v9 = a3;
  v11 = a1;
  v54 = 0;
  v46[0] = 0;
  LODWORD(v12) = 0;
  v47 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, 0LL, a3, a4);
  LODWORD(v13) = 0;
  if ( !v11 )
    goto LABEL_45;
  if ( HIWORD(v11) )
    goto LABEL_45;
  if ( !a5 )
    goto LABEL_45;
  PointerInfoSize = GetPointerInfoSize(a2);
  if ( (_DWORD)v15 != PointerInfoSize )
    goto LABEL_45;
  v17 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_45;
  v18 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_45;
  if ( v9 || v8 )
  {
    v19 = Address;
  }
  else
  {
    v19 = Address;
    if ( !Address )
    {
LABEL_45:
      v20 = 87;
      goto LABEL_46;
    }
  }
  if ( v8 && (*(_DWORD *)(v16 + 1272) & 0x100) != 0 )
  {
    v20 = 5;
LABEL_46:
    v27 = v13;
    goto LABEL_47;
  }
  v21 = (unsigned int *)a6;
  if ( a6 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  v54 = *v21;
  v23 = (unsigned int *)a7;
  if ( a7 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = *v23;
  v46[0] = *v23;
  if ( v19 )
  {
    if ( !(_DWORD)v22 )
      goto LABEL_45;
    if ( !(_DWORD)v24 )
      goto LABEL_45;
    v25 = v22 * v24;
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_45;
    v12 = v15 * (unsigned int)v25;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_45;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25, v15, 0xFFFFFFFFLL, v13);
    ProbeForWrite(v19, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  v27 = 1;
  if ( v11 == 1 )
  {
    v28 = (_DWORD *)*((_QWORD *)PtiCurrentShared(v24, v15, v22, v13) + 169);
    v31 = 0LL;
    if ( !v28 || (*v28 & 1) == 0 )
    {
      v27 = 0;
      v20 = 87;
LABEL_47:
      UserSetLastError(v20);
      goto LABEL_48;
    }
    v54 = 1;
    v32 = 1;
    v46[0] = 1;
    if ( v19 )
    {
      v33 = *((_QWORD *)PtiCurrentShared((__int64)v28, 0LL, v29, v30) + 169);
      v34 = *(_OWORD *)(v33 + 24);
      v48 = v34;
      v35 = *(_OWORD *)(v33 + 40);
      v49 = v35;
      v36 = *(_OWORD *)(v33 + 56);
      v50 = v36;
      v37 = *(_OWORD *)(v33 + 72);
      v51 = v37;
      v38 = *(_OWORD *)(v33 + 88);
      v52 = v38;
      v39 = *(_OWORD *)(v33 + 104);
      v53 = v39;
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = v34;
      v19[1] = v35;
      v19[2] = v36;
      v19[3] = v37;
      v19[4] = v38;
      v19[5] = v39;
    }
  }
  else
  {
    if ( v8 )
    {
      v40 = SGDGetUserSessionState(v24, v15, v22, v13);
      PointerFrameInfoInternal = CTouchProcessor::GetPointerFrameInfoInternal(
                                   *(CTouchProcessor **)(v40 + 3424),
                                   v47,
                                   v11,
                                   v55,
                                   v56,
                                   v12,
                                   &v54,
                                   v46,
                                   (unsigned __int8 *)v19);
      v32 = v46[0];
    }
    else
    {
      v32 = 1;
      v46[0] = 1;
      if ( v56 )
      {
        v43 = SGDGetUserSessionState(v24, v15, v22, v13);
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoHistoryInternal(
                                     *(CTouchProcessor **)(v43 + 3424),
                                     v47,
                                     v11,
                                     v55,
                                     v12,
                                     &v54,
                                     (unsigned __int8 *)v19);
      }
      else
      {
        v54 = 1;
        v44 = SGDGetUserSessionState(v24, v15, v22, v13);
        PointerFrameInfoInternal = CTouchProcessor::GetPointerInfoInternal(
                                     *(CTouchProcessor **)(v44 + 3424),
                                     v47,
                                     v11,
                                     v55,
                                     v12,
                                     (struct tagPOINTER_INFO *)v19);
      }
    }
    v27 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_48;
  }
  v42 = MmUserProbeAddress;
  if ( (unsigned __int64)v17 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = v54;
  if ( (unsigned __int64)v18 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = v32;
LABEL_48:
  UserSessionSwitchLeaveCrit(v42, v31, v29, v30);
  return v27;
}
