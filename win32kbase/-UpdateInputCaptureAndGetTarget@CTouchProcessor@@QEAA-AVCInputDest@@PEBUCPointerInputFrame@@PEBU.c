struct CInputDest *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        struct CInputDest *a2,
        struct CPointerInputFrame *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        unsigned int *a8,
        unsigned int a9)
{
  struct CInputDest *v9; // r12
  __int64 v11; // r13
  int v12; // edx
  int v13; // r8d
  int v14; // r14d
  char v15; // r15
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int128 *WindowDetails; // rax
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  CTouchProcessor *v25; // rcx
  __int16 v26; // si
  struct tagPROCESSINFO *InputProcessContext; // rax
  __int64 v28; // r9
  struct tagPROCESSINFO *v29; // rbx
  int v30; // ebx
  int v31; // eax
  __int16 v32; // bx
  struct CPointerInputFrame *v33; // rbx
  const struct CHitTestState *HitTestState; // rax
  const struct CHitTestState *v35; // rbx
  int v36; // ebx
  unsigned __int8 v37; // bl
  int v38; // r12d
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r13
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rbx
  CInputDest *v48; // rax
  int v49; // r8d
  char v50; // r9
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  bool v56; // zf
  __int64 v57; // rax
  unsigned int v58; // edx
  CSpatialProcessor *v59; // r9
  int v60; // edx
  int v61; // r8d
  int v62; // ecx
  int v63; // ecx
  _WORD *v64; // rdx
  _DWORD *v65; // rdi
  __int16 v66; // si
  __int16 v67; // cx
  void *v68; // r8
  int v70; // [rsp+20h] [rbp-E0h]
  int IsPointerInputRedirected; // [rsp+50h] [rbp-B0h] BYREF
  int v72; // [rsp+54h] [rbp-ACh] BYREF
  int v73; // [rsp+58h] [rbp-A8h]
  int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v75; // [rsp+60h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-98h]
  int v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+74h] [rbp-8Ch]
  struct CPointerInputFrame *v79; // [rsp+78h] [rbp-88h]
  unsigned int *v80; // [rsp+80h] [rbp-80h]
  CSpatialProcessor *v81; // [rsp+88h] [rbp-78h]
  const WCHAR *v82; // [rsp+90h] [rbp-70h] BYREF
  void *v83; // [rsp+98h] [rbp-68h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  struct CInputDest *v85; // [rsp+A8h] [rbp-58h]
  _WORD *v86; // [rsp+B0h] [rbp-50h]
  __int64 v87; // [rsp+B8h] [rbp-48h] BYREF
  int v88; // [rsp+C0h] [rbp-40h]
  int v89; // [rsp+C4h] [rbp-3Ch]
  int v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+CCh] [rbp-34h]
  _QWORD v92[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E4h] [rbp-1Ch]
  int v95; // [rsp+ECh] [rbp-14h]
  __int128 v96; // [rsp+F0h] [rbp-10h]
  __int128 v97; // [rsp+100h] [rbp+0h]
  _BYTE v98[40]; // [rsp+118h] [rbp+18h] BYREF
  CInpLockGuard *v99; // [rsp+140h] [rbp+40h]
  _BYTE v100[40]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v101[28]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v102[112]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v103[16]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v104[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v9 = a2;
  v11 = a4;
  v85 = a2;
  v79 = a3;
  v81 = (CSpatialProcessor *)a1;
  v86 = a7;
  v76 = a4;
  v80 = a8;
  v75 = a9;
  memset(a2, 0, 0x70uLL);
  v14 = 0;
  *((_BYTE *)v9 + 112) = 0;
  v73 = a6 & 0x10000;
  v77 = a6 & 0x40004;
  v78 = a6 & 0x40000;
  if ( a1[5] != KeGetCurrentThread() )
  {
    IsPointerInputRedirected = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1982);
  }
  v15 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      69,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a5 + 72));
    v16 = *(_DWORD *)(a5 + 300) & 0xFFFFFFCF;
    *(_DWORD *)(a5 + 300) = v16;
    if ( (v16 & 0x4000) == 0 )
    {
      *(_DWORD *)(a5 + 300) = v16 | 0x4000;
      v17 = *(_DWORD *)(a5 + 164);
      if ( v17 == 1 )
      {
        v18 = *(_QWORD *)(a5 + 152);
      }
      else
      {
        v18 = 0LL;
        if ( v17 == 2 )
        {
          v19 = *(_QWORD *)(a5 + 152);
          goto LABEL_19;
        }
      }
      v19 = 0LL;
LABEL_19:
      WindowDetails = (__int128 *)InputTraceLogging::GetWindowDetails((__int64)v100, v19, v18);
      v21 = WindowDetails[1];
      v96 = *WindowDetails;
      v97 = v21;
      if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
      {
        v72 = DWORD2(v97);
        IsPointerInputRedirected = DWORD2(v97);
        v82 = (const WCHAR *)v97;
        v83 = (void *)v96;
        v84 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v22,
          byte_1C029B034,
          v23,
          v24,
          (__int64)&v84,
          &v83,
          &v82,
          (__int64)&IsPointerInputRedirected,
          (__int64)&v72);
      }
    }
  }
  CInputDest::operator=((__int64)v9, a5 + 72);
  if ( *(_DWORD *)v9 )
  {
    v26 = 1;
    v14 = -__CFSHR__(*(_DWORD *)(a5 + 300), 5);
    IsPointerInputRedirected = -__CFSHR__(*(_DWORD *)(a5 + 300), 6);
LABEL_33:
    v28 = 0LL;
    goto LABEL_34;
  }
  InputProcessContext = CTouchProcessor::GetInputProcessContext(v25, *(void **)(v11 + 24));
  v28 = 0LL;
  v29 = InputProcessContext;
  IsPointerInputRedirected = 0;
  v26 = 0;
  if ( !InputProcessContext )
    goto LABEL_34;
  memset(v102, 0, sizeof(v102));
  IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(v29, *(unsigned int *)(a5 + 60), v102);
  v30 = IsPointerInputRedirected;
  CInputDest::CInputDest((CInputDest *)v103, (const struct tagINPUTDEST *)v102);
  CInputDest::operator=((__int64)v9, v103);
  CInputDest::SetEmpty((CInputDest *)v103);
  v31 = *(_DWORD *)v9;
  v28 = 0LL;
  v14 = v30;
  if ( v30 )
  {
    if ( v31 )
      goto LABEL_34;
    v72 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2052);
    goto LABEL_33;
  }
  if ( v31 )
  {
    v72 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2051);
    v28 = 0LL;
  }
  v26 = 0;
LABEL_34:
  v32 = 32;
  if ( *(_DWORD *)(a5 + 232) )
    goto LABEL_68;
  if ( !*(_DWORD *)v9 )
  {
    if ( v77 && !v73 )
      goto LABEL_71;
    v33 = v79;
    if ( (*((_DWORD *)v79 + 57) & 0x80u) != 0 )
    {
      HitTestState = CPTPProcessor::GetHitTestState(*(CPTPProcessor **)(*((_QWORD *)v79 + 32) + 1056LL), v79);
      v35 = HitTestState;
      if ( HitTestState )
      {
        CInputDest::operator=((__int64)v9, (__int64)HitTestState);
        *v80 = *((_DWORD *)v35 + 30);
        v36 = *((_DWORD *)v35 + 31);
        v14 = -__CFSHR__(v36, 2);
        v37 = v36 & 1;
LABEL_62:
        v56 = v37 == 0;
        v32 = 32;
        if ( !v56 )
        {
          *(_DWORD *)(a5 + 300) |= 0x40u;
          v14 = 1;
        }
        goto LABEL_68;
      }
      v33 = v79;
    }
    v38 = (a6 & 0x4002000) == 0 ? 0x200 : 0;
    if ( *(_DWORD *)(a5 + 60) == 3 && (*(_DWORD *)(v11 + 20) & 4) != 0 )
    {
      v39 = *(_DWORD *)(v11 + 104);
      if ( (v39 & 1) != 0 )
        v38 |= 0x40u;
      if ( (v39 & 4) != 0 )
        v38 |= 0x80u;
    }
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v98,
      (CSpatialProcessor *)((char *)v81 + 32),
      0LL,
      v28);
    v44 = *((_QWORD *)v33 + 32);
    if ( (v38 & 0x200) == 0 || *(_DWORD *)(v44 + 24) == 7 )
    {
      if ( *(_DWORD *)(v44 + 960) )
      {
        v45 = *(_DWORD *)(v44 + 956);
        v91 = 0;
        v90 = v45;
        v87 = *(_QWORD *)(v76 + 24);
        v88 = *(_DWORD *)(v76 + 8);
        v89 = *(_DWORD *)(v76 + 180);
        SendMessageTo(19LL, (__int64)&v87, 24LL, v43);
      }
      *(_DWORD *)(v44 + 956) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken(
                                 v41,
                                 v40,
                                 v42,
                                 v43);
      *(_DWORD *)(v44 + 960) = 1;
    }
    v46 = *(_DWORD *)(v44 + 956);
    v74 = 0;
    memset(v101, 0, sizeof(v101));
    v70 = v46;
    v47 = v76;
    v48 = CTouchProcessor::TouchHitTest((CInputDest *)v104, v76, v38, v75, v70, (__int64)&v74, (__int64)v101);
    v9 = v85;
    CInputDest::operator=((__int64)v85, v48);
    CInputDest::SetEmpty((CInputDest *)v104);
    v49 = v101[20];
    v50 = v74 != 0;
    *v80 = v101[20];
    InputTraceLogging::Pointer::SpeedHitTest((const union POINTERINFOUNION *)(v47 + 8), v9, v49, v50);
    v37 = (unsigned int)(*((_DWORD *)v9 + 1) - 2) <= 1;
    if ( v101[26]
      && ((v52 = *(_DWORD *)(v44 + 360), (v52 & 8) == 0)
       || (v52 & 0x10) != 0
       || (*(_DWORD *)(*(_QWORD *)(v44 + 16) + 184LL) & 0x4000) != 0) )
    {
      *(_DWORD *)(a5 + 232) = v101[26];
      CInputDest::SetEmpty(v9);
      v37 = 0;
    }
    else if ( v73 )
    {
      v11 = v76;
      v57 = *((_QWORD *)v9 + 12);
      v95 = 0;
      v92[0] = v57;
      v92[1] = *(_QWORD *)(v76 + 24);
      v93 = *(_DWORD *)(v76 + 8);
      v94 = *(_QWORD *)(v76 + 40);
      SendMessageTo(5LL, (__int64)v92, 32LL, v51);
      goto LABEL_59;
    }
    v11 = v76;
LABEL_59:
    if ( (*((_DWORD *)v79 + 57) & 0x80u) != 0 )
      CHitTestState::Set((CHitTestState *)(*(_QWORD *)(*((_QWORD *)v79 + 32) + 1056LL) + 392LL), v9, *v80, v37, v37);
    CInpLockGuard::LockExclusive(v99);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v98, v53, v54, v55);
    goto LABEL_62;
  }
  v58 = *(_DWORD *)(v11 + 8);
  if ( v58 - 2 <= 1 )
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
      v81,
      v58,
      *(struct tagPOINT *)(v11 + 40),
      *(_QWORD *)(v11 + 88),
      *(unsigned __int16 *)(a5 + 32),
      v75);
LABEL_68:
  if ( v73 && *(_DWORD *)v9 )
  {
    CInputDest::operator=(a5 + 72, (__int64)v9);
    v59 = v81;
    v60 = *(unsigned __int16 *)(a5 + 32);
    v61 = IsPointerInputRedirected;
    v62 = *(_DWORD *)(a5 + 300) ^ (*(_DWORD *)(a5 + 300) ^ (16 * v14)) & 0x10;
    *(_DWORD *)(a5 + 300) = v62 ^ (v62 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v63 = *(_DWORD *)(v11 + 8);
    *((_QWORD *)v59 + 2) = *(_QWORD *)(v11 + 88);
    *((_DWORD *)v59 + 6) = v63;
    *((_DWORD *)v59 + 7) = v60;
    goto LABEL_75;
  }
LABEL_71:
  if ( v78 && *(_DWORD *)(a5 + 72) )
  {
    CInputDest::SetEmpty((CInputDest *)(a5 + 72));
    *(_DWORD *)(a5 + 300) &= 0xFFFFBFCF;
  }
  v61 = IsPointerInputRedirected;
LABEL_75:
  v64 = v86;
  v65 = (_DWORD *)(a5 + 300);
  v66 = *v86 | (16 * v26);
  *v86 = v66;
  if ( !v14 && (*v65 & 0x40) == 0 )
    v32 = 0;
  v67 = v32 | v66 | (v61 != 0 ? 0x40 : 0);
  *v64 = v67;
  *v64 = v67 | (2 * (*v65 & 0x40));
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v64) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v64) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)v64 || v15 )
  {
    v68 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
    LOBYTE(v68) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v64,
      (_DWORD)v68,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      70,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return v9;
}
