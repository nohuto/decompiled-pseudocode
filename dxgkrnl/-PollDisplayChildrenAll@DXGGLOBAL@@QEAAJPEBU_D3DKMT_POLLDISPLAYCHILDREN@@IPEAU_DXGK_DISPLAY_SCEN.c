__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  _QWORD **v4; // r15
  ULONG v5; // r13d
  unsigned int v6; // edi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  PVOID v10; // rcx
  PVOID *QuadPart; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  void *v16; // rcx
  int v17; // eax
  int v18; // r12d
  int v19; // eax
  __int64 v20; // rbx
  const wchar_t *v21; // r9
  PVOID *v22; // rdi
  int v23; // esi
  __int64 v24; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // r13
  int v26; // eax
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v28; // eax
  __int64 v29; // rbx
  const wchar_t *v30; // r9
  signed __int64 v31; // r14
  __int64 v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  _QWORD *v35; // rbx
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  char v38; // al
  bool v39; // zf
  _QWORD *v40; // rax
  ULONG v41; // ecx
  int v42; // eax
  __int64 v43; // rbx
  int v45; // [rsp+50h] [rbp-B0h]
  ULONG v46; // [rsp+58h] [rbp-A8h]
  _QWORD *v47; // [rsp+60h] [rbp-A0h]
  PVOID *v49; // [rsp+80h] [rbp-80h]
  PVOID *Object; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v53[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // [rsp+B0h] [rbp-50h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h]
  _BYTE v57[64]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v58; // [rsp+108h] [rbp+8h]
  PVOID v59; // [rsp+110h] [rbp+10h]
  _BYTE v60[64]; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v61; // [rsp+158h] [rbp+58h]
  PVOID v62; // [rsp+160h] [rbp+60h]
  _BYTE v63[64]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v64; // [rsp+1A8h] [rbp+A8h]
  PVOID Pool2; // [rsp+1B0h] [rbp+B0h]
  _BYTE v66[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v67; // [rsp+1F8h] [rbp+F8h]
  _BYTE v68[144]; // [rsp+200h] [rbp+100h] BYREF
  PVOID v69; // [rsp+290h] [rbp+190h]
  _BYTE v70[384]; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v71; // [rsp+418h] [rbp+318h]
  _BYTE v72[144]; // [rsp+420h] [rbp+320h] BYREF

  v4 = (_QWORD **)((char *)this + 768);
  v54 = a4;
  v45 = 0;
  v5 = 0;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v53, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
  v7 = *v4;
  while ( v7 != v4 && v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    if ( v8[365] )
      ++v6;
  }
  if ( !v6 )
  {
    v9 = 0;
    goto LABEL_115;
  }
  Pool2 = 0LL;
  v67 = 0;
  if ( v6 <= 8 )
  {
    Pool2 = v66;
    memset(v66, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_13;
    Pool2 = (PVOID)ExAllocatePool2(64LL, 8LL * v6, 1265072196LL);
  }
  v67 = v6;
LABEL_13:
  v69 = 0LL;
  v71 = 0;
  if ( v6 <= 8 )
  {
    v69 = v70;
    memset(v70, 0, 48LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x30 )
      goto LABEL_18;
    v69 = (PVOID)ExAllocatePool2(64LL, 48LL * v6, 1265072196LL);
  }
  v71 = v6;
LABEL_18:
  v62 = 0LL;
  v64 = 0;
  if ( v6 <= 8 )
  {
    v62 = v63;
    memset(v63, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_23;
    v62 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
  }
  v64 = v6;
LABEL_23:
  v59 = 0LL;
  v61 = 0;
  if ( v6 <= 8 )
  {
    v59 = v60;
    memset(v60, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_28;
    v59 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
  }
  v61 = v6;
LABEL_28:
  v58 = 0;
  v10 = 0LL;
  v47 = 0LL;
  P = 0LL;
  if ( v6 <= 8 )
  {
    P = v57;
    memset(v57, 0, 8LL * v6);
    v10 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_33;
    v10 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
    P = v10;
  }
  v47 = v10;
  v58 = v6;
LABEL_33:
  QuadPart = (PVOID *)v59;
  Object = (PVOID *)Pool2;
  WaitBlockArray = (PKWAIT_BLOCK)v69;
  v49 = (PVOID *)v62;
  Timeout.QuadPart = (LONGLONG)v59;
  if ( !v62 || !v59 || !Pool2 || !v69 || !v10 )
  {
    WdLogSingleEntry1(2LL, 3891LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate per-adapter array memory in PollDisplayChildrenAll",
      3891LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741801;
    goto LABEL_99;
  }
  v12 = *v4;
  while ( v12 != v4 && v12 )
  {
    if ( v5 >= v6 )
    {
      WdLogSingleEntry1(1LL, 3902LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumAdapters < MaxNumAdapters", 3902LL, 0LL, 0LL, 0LL, 0LL);
    }
    v13 = v12;
    v12 = (_QWORD *)*v12;
    _m_prefetchw(v13 + 3);
    v14 = v13[3];
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v13 + 3, v14 + 1, v14);
      if ( v15 == v14 )
      {
        LOBYTE(v14) = 1;
        break;
      }
    }
    if ( (_BYTE)v14 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, (struct DXGADAPTER *const)v13, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v13);
      if ( v13[365] && (int)COREADAPTERACCESS::AcquireExclusive((__int64)v68, 1LL) >= 0 )
      {
        v16 = (void *)v13[27];
        v49[v5] = v16;
        ObfReferenceObject(v16);
        if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
          goto LABEL_52;
        v17 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v13);
        v18 = v17;
        if ( v17 >= 0 )
        {
          QuadPart[v5] = 0LL;
          Object[v5] = (PVOID)24;
LABEL_52:
          if ( (*((_DWORD *)a2 + 1) & 4) != 0 )
          {
            v19 = DmmEnableModeResetOnMonitorEvent(v13, 0);
            v18 = v19;
            if ( v19 >= 0 )
            {
              v47[v5] = v13;
              goto LABEL_55;
            }
            v20 = v19;
            WdLogSingleEntry1(2LL, v19);
            v21 = L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!";
LABEL_61:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, v20, 0LL, 0LL, 0LL, 0LL);
            v45 = v18;
            ObfDereferenceObject(v49[v5]);
            v49[v5] = 0LL;
          }
          else
          {
LABEL_55:
            ++v5;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v68);
          goto LABEL_57;
        }
        v20 = v17;
        WdLogSingleEntry1(2LL, v17);
        v21 = L"Failed in acquiring monitor pending event (Status == 0x%I64x)!";
        goto LABEL_61;
      }
LABEL_57:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
    }
  }
  v46 = v5;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
  if ( v5 )
  {
    v22 = v49;
    v23 = v45;
    v24 = v5;
    v25 = v54;
    do
    {
      v26 = DpiPollDisplayChildren(*v22, a3, v25);
      if ( v26 < 0 )
        v23 = v26;
      ObfDereferenceObject(*v22);
      *v22++ = 0LL;
      --v24;
    }
    while ( v24 );
    v5 = v46;
    v45 = v23;
    QuadPart = (PVOID *)Timeout.QuadPart;
  }
  if ( (*((_DWORD *)a2 + 1) & 2) != 0 && v5 )
  {
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v28 = KeWaitForMultipleObjects(v5, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    if ( v28 == 258 )
    {
      v45 = 258;
      v29 = 4048LL;
      WdLogSingleEntry1(2LL, 4048LL);
      v30 = L"Monitor pending event wait has been timeouted!";
      goto LABEL_74;
    }
    if ( v28 < 0 )
    {
      v45 = v28;
      v29 = v28;
      WdLogSingleEntry1(2LL, v28);
      v30 = L"Failed in waiting for pending monitor event (Status == 0x%I64x)!";
LABEL_74:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, v29, 0LL, 0LL, 0LL, 0LL);
    }
    v31 = (char *)Object - (char *)QuadPart;
    v32 = v5;
    do
    {
      MonitorReleaseMonitorPendingEvent(*QuadPart);
      *QuadPart = 0LL;
      *(PVOID *)((char *)QuadPart++ + v31) = 0LL;
      --v32;
    }
    while ( v32 );
  }
  if ( (*((_DWORD *)a2 + 1) & 4) != 0 && v5 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v53);
    v33 = v4;
    v34 = *v4;
    while ( v34 != v33 && v34 )
    {
      v35 = v34;
      v34 = (_QWORD *)*v34;
      _m_prefetchw(v35 + 3);
      v36 = v35[3];
      do
      {
        if ( !v36 )
        {
          v38 = 0;
          goto LABEL_86;
        }
        v37 = v36;
        v36 = _InterlockedCompareExchange64(v35 + 3, v36 + 1, v36);
      }
      while ( v37 != v36 );
      v38 = 1;
LABEL_86:
      v39 = v38 == 0;
      v33 = v4;
      if ( !v39 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, (struct DXGADAPTER *const)v35, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v35);
        v40 = v47;
        v41 = 0;
        while ( (_QWORD *)*v40 != v35 )
        {
          ++v41;
          ++v40;
          if ( v41 >= v5 )
            goto LABEL_96;
        }
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v72, 1LL) >= 0 )
        {
          v42 = DmmEnableModeResetOnMonitorEvent(v35, 1u);
          if ( v42 < 0 )
          {
            v43 = v42;
            WdLogSingleEntry1(2LL, v42);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to re-eanble mode reset on monitor event (Status == 0x%I64x)!",
              v43,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v72);
        }
LABEL_96:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
        v33 = v4;
      }
    }
  }
  v9 = v45;
LABEL_99:
  if ( P != v57 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v58 = 0;
  if ( v59 != v60 && v59 )
    ExFreePoolWithTag(v59, 0);
  v59 = 0LL;
  v61 = 0;
  if ( v62 != v63 && v62 )
    ExFreePoolWithTag(v62, 0);
  v62 = 0LL;
  v64 = 0;
  if ( v69 != v70 && v69 )
    ExFreePoolWithTag(v69, 0);
  v69 = 0LL;
  v71 = 0;
  if ( Pool2 != v66 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v67 = 0;
LABEL_115:
  if ( v53[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v53);
  return v9;
}
