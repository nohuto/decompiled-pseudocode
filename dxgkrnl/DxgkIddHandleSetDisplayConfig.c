void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, __int64 a2, unsigned int *a3, int *a4)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // r15
  int v10; // esi
  const wchar_t *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  struct _LUID *v16; // rdx
  struct _LUID v17; // rcx
  const wchar_t *v18; // r9
  int v19; // r9d
  void *v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // rbx
  const wchar_t *v23; // r9
  _DWORD *v24; // r8
  unsigned int v25; // ebx
  int v26; // eax
  struct DXGGLOBAL *Global; // rax
  _DWORD *v28; // rcx
  unsigned int v29; // esi
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  struct DXGGLOBAL *v33; // rax
  int v34; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  struct DXGGLOBAL *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  DXGSESSIONMGR *v41; // rsi
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v46; // rcx
  int v47; // ebx
  __int64 v48; // rax
  struct _PORT_MESSAGE *v49; // rsi
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  ULONG MessageId; // eax
  char v54; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v55; // [rsp+58h] [rbp-A8h] BYREF
  char v56; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID *v57[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v58; // [rsp+78h] [rbp-88h] BYREF
  DXGSESSIONDATA *v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v64; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v65; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct _LUID *v67; // [rsp+C0h] [rbp-40h]
  char v68; // [rsp+C8h] [rbp-38h]
  union _LARGE_INTEGER v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v70; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+E0h] [rbp-20h] BYREF
  int v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h] BYREF
  int v74; // [rsp+F8h] [rbp-8h]
  unsigned int v75; // [rsp+FCh] [rbp-4h]
  __int64 *v76[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v77[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v78; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v79; // [rsp+130h] [rbp+30h]
  DXGSESSIONDATA **v80; // [rsp+138h] [rbp+38h]
  int *v81[4]; // [rsp+140h] [rbp+40h] BYREF
  char v82; // [rsp+160h] [rbp+60h]
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+68h] BYREF
  char v84; // [rsp+198h] [rbp+98h]
  struct _PORT_MESSAGE v85[2]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = (unsigned int)a2;
  v62 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v84 = 0;
  v64 = CurrentProcessSessionId;
  *((_QWORD *)&v78 + 1) = &v62;
  v79 = &v64;
  v80 = &v59;
  v59 = 0LL;
  *(_QWORD *)&v78 = a4;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v81, &v78);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v9 = (unsigned int)v4;
    v10 = -1073741789;
    WdLogSingleEntry2(2LL, (unsigned int)v9, -1073741789LL);
    v11 = L"Input buffer size (0x%I64x) was too small for DXGK_IDD_SET_DISPLAY_CONFIGURATION, returning 0x%I64x.";
    v12 = -1073741789LL;
LABEL_5:
    v14 = 0LL;
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v9, v12, v14, 0LL, 0LL);
    *a4 = v10;
    goto LABEL_86;
  }
  v55 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v12 = -1073741811LL;
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    v11 = L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.";
    v10 = -1073741811;
    v9 = (unsigned int)*v55;
    goto LABEL_5;
  }
  v9 = v4;
  if ( v4 < 68 * v13 + 4 )
  {
    v10 = -1073741789;
    WdLogSingleEntry3(2LL, v9, *a3, -1073741789LL);
    v11 = L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.";
    v12 = (unsigned int)*v55;
    v14 = -1073741789LL;
    goto LABEL_8;
  }
  v57[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v57, v7);
  if ( v57[0] )
  {
    v62 = *(_QWORD *)&v57[0][50].HighPart;
    v63 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v57[0], v15, 0LL, &v63);
    v64 = v63;
    v67 = v57[0];
    v68 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
    v16 = v57[0];
    if ( v57[0][25].LowPart == 1 && !BYTE1(v57[0][354].LowPart) )
    {
      v17 = v57[0][365];
      if ( !*(_QWORD *)&v17 || (v57[0][54].HighPart & 0x100) == 0 )
      {
        WdLogSingleEntry2(2LL, v57[0], -1073741811LL);
        v18 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      if ( *v55 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
      {
        WdLogSingleEntry2(2LL, v57[0], -1073741811LL);
        v18 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
LABEL_79:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v57[0], -1073741811LL, 0LL, 0LL, 0LL);
        *a4 = -1073741811;
        goto LABEL_82;
      }
      v58 = 0;
      if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v57[0], v57[0], &v58, 0LL) )
      {
        WdLogSingleEntry2((unsigned int)(v19 + 2), v57[0], -1073741811LL);
        v18 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      v20 = (void *)v57[0][27];
      ObfReferenceObject(v20);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      v21 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v58, 2LL);
      *a4 = v21;
      if ( v21 < 0 )
      {
        ObfDereferenceObject(v20);
        v22 = v58;
        WdLogSingleEntry2(2LL, v58, *a4);
        v23 = L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).";
LABEL_20:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, *a4, 0LL, 0LL, 0LL);
        goto LABEL_82;
      }
      *a4 = DpiFdoWaitConnectionChangeComplete(v20);
      ObfDereferenceObject(v20);
      if ( *a4 < 0 )
      {
        WdLogSingleEntry3(2LL, v57[0], *a4, -1071775725LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x"
                    "%I64x, returning 0x%I64x.",
          (__int64)v57[0],
          *a4,
          -1071775725LL,
          0LL,
          0LL);
LABEL_81:
        *a4 = -1071775725;
LABEL_82:
        if ( v68 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
        goto LABEL_85;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      v16 = v57[0];
      if ( v57[0][25].LowPart == 1 && !BYTE1(v57[0][354].LowPart) )
      {
        v24 = v55;
        v76[0] = (__int64 *)v57;
        v25 = 0;
        v54 = 0;
        v76[1] = (__int64 *)&v54;
        if ( *v55 )
        {
          while ( 1 )
          {
            v26 = lambda_ba9a8767fe334596bf562779960bba36_::operator()(v76, v25, &v24[17 * v25 + 1]);
            *a4 = v26;
            if ( v26 < 0 )
              break;
            v24 = v55;
            if ( ++v25 >= *v55 )
            {
              if ( !v54 )
              {
                v16 = v57[0];
                goto LABEL_77;
              }
              Global = DXGGLOBAL::GetGlobal();
              REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 304832), 0LL);
              v28 = v55;
              v29 = 0;
              if ( *v55 )
              {
                while ( 1 )
                {
                  v30 = 17LL * v29;
                  v31 = MonitorSetScaleFactorOverride(v57[0], (unsigned int)v28[v30 + 3], (unsigned int)v28[v30 + 12]);
                  *a4 = v31;
                  if ( v31 < 0 )
                    break;
                  v32 = MonitorSetPhysicalSizeOverride(
                          v57[0],
                          (unsigned int)v55[v30 + 3],
                          (unsigned int)v55[v30 + 13],
                          (unsigned int)v55[v30 + 14]);
                  *a4 = v32;
                  if ( v32 < 0 )
                  {
                    WdLogSingleEntry3(2LL, (unsigned int)v55[v30 + 3], v29, v32);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                      (unsigned int)v55[v30 + 3],
                      v29,
                      *a4,
                      0LL,
                      0LL);
                    goto LABEL_82;
                  }
                  Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage();
                  v28 = v55;
                  if ( v55[v30 + 15] || v55[v30 + 16] || v55[v30 + 17] )
                  {
                    v73 = *(_QWORD *)&v55[v30 + 1];
                    v74 = v55[v30 + 3];
                    v71 = *(_QWORD *)&v55[v30 + 15];
                    v72 = v55[v30 + 17];
                    v75 = v29;
                    v33 = DXGGLOBAL::GetGlobal();
                    v34 = REMOTEMONITORMAPPING::AddMapping(
                            (struct DXGGLOBAL *)((char *)v33 + 304832),
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v71,
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v73);
                    *a4 = v34;
                    if ( v34 < 0 )
                    {
                      WdLogSingleEntry3(2LL, (unsigned int)v55[v30 + 3], v29, v34);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                        (unsigned int)v55[v30 + 3],
                        v29,
                        *a4,
                        0LL,
                        0LL);
                      goto LABEL_82;
                    }
                    v28 = v55;
                  }
                  if ( ++v29 >= *v28 )
                    goto LABEL_39;
                }
                WdLogSingleEntry3(2LL, (unsigned int)v55[v30 + 3], v29, v31);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                  (unsigned int)v55[v30 + 3],
                  v29,
                  *a4,
                  0LL,
                  0LL);
              }
              else
              {
LABEL_39:
                CurrentProcess = PsGetCurrentProcess(v28);
                ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
                v22 = v58;
                if ( ProcessSessionId != v58 )
                {
                  Object = 0LL;
                  v37 = DXGGLOBAL::GetGlobal();
                  v38 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
                          *((DXGSESSIONMGR **)v37 + 118),
                          v22,
                          (struct _KPROCESS **)&Object);
                  *a4 = v38;
                  if ( v38 < 0 )
                  {
                    WdLogSingleEntry2(2LL, (unsigned int)v22, v38);
                    v23 = L"Failed to get CSRSS process from session 0x%I64x, (Status = 0x%I64x).";
                    goto LABEL_20;
                  }
                  CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
                  ObfDereferenceObject(Object);
                }
                v41 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                if ( v41 )
                {
                  v44 = PsGetCurrentProcessSessionId(v40, v39, v42, v43);
                  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v41, v44);
                }
                else
                {
                  SessionDataForSpecifiedSession = 0LL;
                }
                v59 = SessionDataForSpecifiedSession;
                if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18976)
                  || !*((_BYTE *)SessionDataForSpecifiedSession + 18496) )
                {
                  *a4 = -1071775725;
                  WdLogSingleEntry2(2LL, v22, -1071775725LL);
                  v23 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
                  goto LABEL_20;
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v57[0][365] + 656LL)) )
                {
                  LOBYTE(v46) = 1;
                  if ( (unsigned __int8)WdIsDebuggerPresent(v46) )
                  {
                    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
                    __debugbreak();
                  }
                  v60 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v22, 0, 0, 0, 0LL);
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v57[0][365] + 656LL)) )
                {
                  v60 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v22, 0, 0, 0, 0LL);
                }
                memset(v85, 0, 0x48uLL);
                v47 = 216 * *v55 + 80;
                v48 = operator new[](216LL * (unsigned int)*v55 + 96, 0x4B677844u, 256LL);
                if ( v48 )
                {
                  v65 = (ReferenceCounted *)v48;
                  *(_QWORD *)v48 = &ReferenceCounted::`vftable';
                  v49 = (struct _PORT_MESSAGE *)(v48 + 16);
                  *(_DWORD *)(v48 + 8) = 1;
                  *(_QWORD *)v48 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
                  v56 = 0;
                  v77[0] = &v55;
                  v77[1] = &v56;
                  v50 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
                          (_WORD *)(v48 + 16),
                          (__int64)v77,
                          (unsigned __int16)v47 - 80);
                  *a4 = v50;
                  if ( v50 >= 0 )
                  {
                    v51 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v59, &v65);
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
                    v70 = 72LL;
                    v69.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
                    *a4 = DxgkSendDisplayBrokerMessage(0x120000u, v49, 0LL, v85, &v70, 0LL, &v69);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
                    if ( v57[0][25].LowPart != 1 || BYTE1(v57[0][354].LowPart) )
                    {
                      WdLogSingleEntry2(3LL, v57[0], -1071775725LL);
                      *a4 = -1071775725;
                    }
                    else
                    {
                      v52 = *a4;
                      if ( *a4 == -1073741772 )
                      {
                        WdLogSingleEntry1(3LL, *(unsigned int *)v59);
                        *a4 = 0;
                      }
                      else if ( v52 == 192 )
                      {
                        *a4 = -1073741749;
                        WdLogSingleEntry2(3LL, *(unsigned int *)v59, -1073741749LL);
                      }
                      else if ( v52 >= 0 )
                      {
                        MessageId = v85[1].MessageId;
                        if ( (v85[1].MessageId & 0x80000000) == 0 )
                        {
                          DXGSESSIONDATA::SetDisplayConfigDone(v59, v51);
                          MessageId = v85[1].MessageId;
                        }
                        *a4 = MessageId;
                      }
                      else
                      {
                        WdLogSingleEntry2(2LL, *(unsigned int *)v59, *a4);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                          *(unsigned int *)v59,
                          *a4,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v50);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to initialize display broker message, (Status = 0x%I64x).",
                      *a4,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v65, 0LL);
                }
                else
                {
                  WdLogSingleEntry1(6LL, 1137LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262145,
                    -1,
                    (__int64)L"Cannot allocate buffer to hold the SetDisplayConfig ALPC message",
                    1137LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  *a4 = -1073741801;
                }
              }
              goto LABEL_82;
            }
          }
        }
        else
        {
LABEL_77:
          *a4 = -1073741811;
          WdLogSingleEntry2(2LL, v16, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Did not find primary path from DXGK_IDD_SET_DISPLAY_CONFIGURATION on adapter 0x%I64x, returning 0x%I64x.",
            (__int64)v57[0],
            *a4,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_82;
      }
    }
    WdLogSingleEntry2(3LL, v16, -1071775725LL);
    goto LABEL_81;
  }
  WdLogSingleEntry2(3LL, v7, -1073741811LL);
  *a4 = -1073741811;
LABEL_85:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v57, 0LL);
LABEL_86:
  if ( v82 )
    lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator()(v81);
  if ( v84 )
    KeUnstackDetachProcess(&ApcState);
}
