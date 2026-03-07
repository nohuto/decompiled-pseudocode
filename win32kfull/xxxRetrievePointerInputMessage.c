__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        struct tagWND **a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  struct tagQMSG *v14; // rbx
  unsigned __int64 v18; // r15
  unsigned int v19; // edi
  bool v20; // cf
  int v21; // esi
  int v22; // eax
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  HWND v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  struct tagWND *v31; // r15
  unsigned int v32; // esi
  int *v34; // r13
  int *v35; // r12
  __int64 v36; // rcx
  struct _LIST_ENTRY *ThreadPointerData; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  __int128 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rax
  const struct CPointerInputFrame *v50; // r13
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // [rsp+38h] [rbp-C8h]
  unsigned int v56; // [rsp+40h] [rbp-C0h]
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v58; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v59; // [rsp+58h] [rbp-A8h] BYREF
  int v60; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  int v62; // [rsp+68h] [rbp-98h]
  HWND v63; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+A0h] [rbp-60h]
  __int128 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int128 v74; // [rsp+100h] [rbp+0h] BYREF
  __int128 v75; // [rsp+110h] [rbp+10h]
  __int128 v76; // [rsp+120h] [rbp+20h]
  __int128 v77; // [rsp+130h] [rbp+30h]
  __int128 v78; // [rsp+140h] [rbp+40h]
  __int128 v79; // [rsp+150h] [rbp+50h]
  __int128 v80; // [rsp+160h] [rbp+60h]
  unsigned int v81; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v82; // [rsp+1B8h] [rbp+B8h]

  v82 = a2;
  v14 = a8;
  v63 = 0LL;
  v61 = 0LL;
  v66 = 0LL;
  v18 = *((_QWORD *)a8 + 5);
  v19 = *((_DWORD *)a8 + 6);
  v20 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v65 = *((_QWORD *)a8 + 4);
  v21 = -v20;
  LOWORD(a8) = v65;
  v22 = *(_DWORD *)(a1 + 1272);
  v23 = 256LL;
  v81 = 0;
  v57 = 0;
  v60 = 0;
  v59 = 0;
  v58 = 0;
  v64 = v18;
  v62 = v21;
  if ( (v22 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( !a6 )
  {
    *(_DWORD *)(a1 + 1272) = v22 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v19);
    v26 = SGDGetUserSessionState(v25);
    if ( !CTouchProcessor::SetPointerFrameTargetWindows(
            *(CTouchProcessor **)(v26 + 3424),
            (struct tagTHREADINFO *)a1,
            v18,
            v19,
            &v60) )
    {
      EtwTraceEndPointerSetTargetWindows(v19);
      *(_DWORD *)(a1 + 1272) &= ~0x100u;
      return (unsigned int)(v60 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v19);
    v27 = *(_QWORD *)(a1 + 432);
    *(_DWORD *)(a1 + 1272) &= ~0x100u;
    if ( *(struct tagQMSG **)(v27 + 88) != v14 )
      return 4LL;
  }
  if ( v19 == 595 )
  {
    v28 = (HWND)*((_QWORD *)v14 + 2);
    v63 = v28;
    v57 = 1;
    v81 = 1;
    v59 = 1;
    v58 = 0;
    v61 = 0LL;
  }
  else
  {
    v29 = SGDGetUserSessionState(v23);
    if ( !CTouchProcessor::GetPointerMessageInfo(
            *(CTouchProcessor **)(v29 + 3424),
            v18,
            v21,
            &v63,
            &v57,
            (int *)&v81,
            &v59,
            &v58) )
      return 3LL;
    LODWORD(v28) = (_DWORD)v63;
  }
  v30 = HMValidateHandleNoSecure((int)v28, 1);
  v31 = (struct tagWND *)v30;
  if ( !v30 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v30, v82) )
    return 4LL;
  v32 = v19;
  if ( a5 && v81 != 1 )
  {
    switch ( v19 )
    {
      case 0x245u:
        v32 = 577;
        break;
      case 0x246u:
        v32 = 578;
        break;
      case 0x247u:
        v32 = 579;
        break;
    }
  }
  if ( a3 || a4 != -1 )
  {
    if ( a3 <= a4 )
    {
      if ( v32 < a3 || v32 > a4 )
        return 4LL;
    }
    else if ( v32 >= a4 && v32 <= a3 )
    {
      return 4LL;
    }
  }
  v34 = a7;
  v35 = a13;
  if ( (unsigned int)CheckCrossThreadInput(v31, v14, a13, a7, a14) )
  {
LABEL_51:
    *a9 = v31;
    return 2LL;
  }
  if ( *v35 )
  {
    v36 = *((_QWORD *)v31 + 2);
    if ( *(_QWORD *)(v36 + 432) == *(_QWORD *)(a1 + 432) )
    {
      if ( (*(_DWORD *)(v36 + 1272) & 0x8000) != 0 )
      {
        if ( ((v81 + 2) & 0xFFFFFFFD) == 0 )
          return 3LL;
        return 4LL;
      }
      goto LABEL_51;
    }
    return 3LL;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v32) )
  {
    v40 = (__int128 *)INPUTDEST_FROM_PWND(&v74, (__int64)v31);
    v67 = *v40;
    v68 = v40[1];
    v69 = v40[2];
    v70 = v40[3];
    v71 = v40[4];
    v72 = v40[5];
    v73 = v40[6];
    v42 = SGDGetUserSessionState(v41);
    v43 = v62;
    v44 = *(_QWORD *)(v42 + 3424);
    v56 = v19;
    v39 = v64;
    v55 = *v34;
    v74 = v67;
    v75 = v68;
    v76 = v69;
    v77 = v70;
    v78 = v71;
    v79 = v72;
    v80 = v73;
    CTouchProcessor::AdjustCaptureOnRetrieval(v44, &v74, v58, v64, v81, v57, v62, v55, v56);
    v46 = *(_QWORD *)(SGDGetUserSessionState(v45) + 3424);
    v74 = v67;
    v75 = v68;
    v76 = v69;
    v77 = v70;
    v78 = v71;
    v79 = v72;
    v80 = v73;
    if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(v46, v39, &v74, v81, v43, &v61, &v66) )
      return 3LL;
    if ( ((v81 + 2) & 0xFFFFFFFD) == 0 )
      return 3LL;
    v48 = *(_QWORD *)(SGDGetUserSessionState(v47) + 3424);
    v74 = v67;
    v75 = v68;
    v76 = v69;
    v77 = v70;
    v78 = v71;
    v79 = v72;
    v80 = v73;
    if ( !(unsigned int)CTouchProcessor::AddThreadPointerData(
                          v48,
                          a1 + 1128,
                          (unsigned __int16)a8,
                          v59,
                          v39,
                          v32,
                          &v74,
                          1) )
      return 3LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1128), (__int16)a8);
    v39 = v64;
    if ( ThreadPointerData )
      LODWORD(ThreadPointerData[3].Flink) |= 8u;
  }
  if ( v32 != 595 )
  {
    v49 = SGDGetUserSessionState(v38);
    v50 = CTouchProcessor::ReferenceFrameFromPointerMsgId(*(CTouchProcessor **)(v49 + 3424), v39);
    if ( v50 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)((char *)v50 + ((unsigned __int8)isChildPartition() != 0 ? 0x48 : 0) + 128) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::RetrieveMessage((const struct CPointerInputFrame *)((char *)v50 + 72));
      v53 = SGDGetUserSessionState(v52);
      CTouchProcessor::UnreferenceFrameExternal(*(CTouchProcessor **)(v53 + 3424), v50);
    }
  }
  *a9 = v31;
  *a10 = v32;
  if ( v32 - 577 <= 3 )
    v65 = (unsigned __int16)a8 | (unsigned __int64)((unsigned __int16)v81 << 16);
  result = 1LL;
  *a11 = v65;
  *a12 = (unsigned __int16)v61 | (unsigned __int64)(WORD2(v61) << 16);
  v54 = v66;
  *v35 = 0;
  *(_QWORD *)(a1 + 1364) = v54;
  return result;
}
