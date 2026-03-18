/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1C02F4AB8
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C03A4C34 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0002C98 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0013C40 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00151DC (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x1C0015754 (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C0017094 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0025A64 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C004A0D8 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C004A1E8 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C01E9830 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C02B5BA4 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator() @ 0x1C02F3EC0 (_lambda_b19eb8e30f7421e25a3eba0801a1f707_--operator().c)
 *     _lambda_ba9a8767fe334596bf562779960bba36_::operator() @ 0x1C02F42FC (_lambda_ba9a8767fe334596bf562779960bba36_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02F47C8 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1C034C528 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C034C6E8 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C035557C (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0356CF4 (DxgkWaitForPnPTransitionDone.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C039DC8C (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C03C505C (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C03C5308 (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, unsigned int a2, unsigned int *a3, int *a4)
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
  __int64 v39; // rcx
  DXGSESSIONMGR *v40; // rsi
  unsigned int v41; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // rax
  struct _PORT_MESSAGE *v46; // rsi
  int v47; // eax
  int v48; // ebx
  int v49; // eax
  ULONG MessageId; // eax
  char v51; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v52; // [rsp+58h] [rbp-A8h] BYREF
  char v53; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID *v54[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v55; // [rsp+78h] [rbp-88h] BYREF
  DXGSESSIONDATA *v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  ReferenceCounted *v62; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v63[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct _LUID *v64; // [rsp+C0h] [rbp-40h]
  char v65; // [rsp+C8h] [rbp-38h]
  union _LARGE_INTEGER v66; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-20h] BYREF
  int v69; // [rsp+E8h] [rbp-18h]
  __int64 v70; // [rsp+F0h] [rbp-10h] BYREF
  int v71; // [rsp+F8h] [rbp-8h]
  unsigned int v72; // [rsp+FCh] [rbp-4h]
  __int64 *v73[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v74[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v75; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v76; // [rsp+130h] [rbp+30h]
  DXGSESSIONDATA **v77; // [rsp+138h] [rbp+38h]
  int *v78[4]; // [rsp+140h] [rbp+40h] BYREF
  char v79; // [rsp+160h] [rbp+60h]
  struct _KAPC_STATE ApcState; // [rsp+168h] [rbp+68h] BYREF
  char v81; // [rsp+198h] [rbp+98h]
  struct _PORT_MESSAGE v82[2]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = a2;
  v59 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1);
  v81 = 0;
  v61 = CurrentProcessSessionId;
  *((_QWORD *)&v75 + 1) = &v59;
  v76 = &v61;
  v77 = &v56;
  v56 = 0LL;
  *(_QWORD *)&v75 = a4;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v78, &v75);
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
  v52 = a3;
  v13 = *a3;
  if ( (unsigned int)v13 >= 0x10 )
  {
    v12 = -1073741811LL;
    WdLogSingleEntry2(2LL, (unsigned int)v13, -1073741811LL);
    v11 = L"IddSetDisplayConfig has too many paths (0x%I64x), returning 0x%I64x.";
    v10 = -1073741811;
    v9 = (unsigned int)*v52;
    goto LABEL_5;
  }
  v9 = v4;
  if ( v4 < 68 * v13 + 4 )
  {
    v10 = -1073741789;
    WdLogSingleEntry3(2LL, v9, *a3, -1073741789LL);
    v11 = L"Input buffer (size = 0x%I64x) was too small for 0x%I64x paths of DXGK_IDD_PATH_CONFIG, returning 0x%I64x.";
    v12 = (unsigned int)*v52;
    v14 = -1073741789LL;
    goto LABEL_8;
  }
  v54[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v54, v7);
  if ( v54[0] )
  {
    v59 = *(_QWORD *)&v54[0][50].HighPart;
    v60 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v54[0], v15, 0LL, &v60);
    v61 = v60;
    v64 = v54[0];
    v65 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
    v16 = v54[0];
    if ( v54[0][25].LowPart == 1 && !BYTE1(v54[0][354].LowPart) )
    {
      v17 = v54[0][365];
      if ( !*(_QWORD *)&v17 || (v54[0][54].HighPart & 0x100) == 0 )
      {
        WdLogSingleEntry2(2LL, v54[0], -1073741811LL);
        v18 = L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      if ( *v52 > *(_DWORD *)(*(_QWORD *)&v17 + 96LL) )
      {
        WdLogSingleEntry2(2LL, v54[0], -1073741811LL);
        v18 = L"Caller specified PathCount exceeds the number of VidPn sourrce on adapter (0x%I64x), returning 0x%I64x.";
LABEL_79:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, (__int64)v54[0], -1073741811LL, 0LL, 0LL, 0LL);
        *a4 = -1073741811;
        goto LABEL_82;
      }
      v55 = 0;
      if ( !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v54[0], v54[0], &v55, 0LL) )
      {
        WdLogSingleEntry2((unsigned int)(v19 + 2), v54[0], -1073741811LL);
        v18 = L"Caller specified adapter (0x%I64x) is not a sessionized adapter, returning 0x%I64x.";
        goto LABEL_79;
      }
      v20 = (void *)v54[0][27];
      ObfReferenceObject(v20);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
      v21 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v55, 2LL);
      *a4 = v21;
      if ( v21 < 0 )
      {
        ObfDereferenceObject(v20);
        v22 = v55;
        WdLogSingleEntry2(2LL, v55, *a4);
        v23 = L"Failed to wait for all pending PnP transition to be done in session 0x%I64x (ntStatus = 0x%I64x).";
LABEL_20:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, *a4, 0LL, 0LL, 0LL);
        goto LABEL_82;
      }
      *a4 = DpiFdoWaitConnectionChangeComplete(v20);
      ObfDereferenceObject(v20);
      if ( *a4 < 0 )
      {
        WdLogSingleEntry3(2LL, v54[0], *a4, -1071775725LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to wait for all pending connection changes to be completed on adapter 0x%I64x with ntStatus 0x"
                    "%I64x, returning 0x%I64x.",
          (__int64)v54[0],
          *a4,
          -1071775725LL,
          0LL,
          0LL);
LABEL_81:
        *a4 = -1071775725;
LABEL_82:
        if ( v65 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
        goto LABEL_85;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
      v16 = v54[0];
      if ( v54[0][25].LowPart == 1 && !BYTE1(v54[0][354].LowPart) )
      {
        v24 = v52;
        v73[0] = (__int64 *)v54;
        v25 = 0;
        v51 = 0;
        v73[1] = (__int64 *)&v51;
        if ( *v52 )
        {
          while ( 1 )
          {
            v26 = lambda_ba9a8767fe334596bf562779960bba36_::operator()(v73, v25, &v24[17 * v25 + 1]);
            *a4 = v26;
            if ( v26 < 0 )
              break;
            v24 = v52;
            if ( ++v25 >= *v52 )
            {
              if ( !v51 )
              {
                v16 = v54[0];
                goto LABEL_77;
              }
              Global = DXGGLOBAL::GetGlobal();
              REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)Global + 304832), 0LL);
              v28 = v52;
              v29 = 0;
              if ( *v52 )
              {
                while ( 1 )
                {
                  v30 = 17LL * v29;
                  v31 = MonitorSetScaleFactorOverride(v54[0], (unsigned int)v28[v30 + 3], (unsigned int)v28[v30 + 12]);
                  *a4 = v31;
                  if ( v31 < 0 )
                    break;
                  v32 = MonitorSetPhysicalSizeOverride(
                          v54[0],
                          (unsigned int)v52[v30 + 3],
                          (unsigned int)v52[v30 + 13],
                          (unsigned int)v52[v30 + 14]);
                  *a4 = v32;
                  if ( v32 < 0 )
                  {
                    WdLogSingleEntry3(2LL, (unsigned int)v52[v30 + 3], v29, v32);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to set monitor size override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                      (unsigned int)v52[v30 + 3],
                      v29,
                      *a4,
                      0LL,
                      0LL);
                    goto LABEL_82;
                  }
                  Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage();
                  v28 = v52;
                  if ( v52[v30 + 15] || v52[v30 + 16] || v52[v30 + 17] )
                  {
                    v70 = *(_QWORD *)&v52[v30 + 1];
                    v71 = v52[v30 + 3];
                    v68 = *(_QWORD *)&v52[v30 + 15];
                    v69 = v52[v30 + 17];
                    v72 = v29;
                    v33 = DXGGLOBAL::GetGlobal();
                    v34 = REMOTEMONITORMAPPING::AddMapping(
                            (struct DXGGLOBAL *)((char *)v33 + 304832),
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v68,
                            (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v70);
                    *a4 = v34;
                    if ( v34 < 0 )
                    {
                      WdLogSingleEntry3(2LL, (unsigned int)v52[v30 + 3], v29, v34);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Failed to set monitor mapping override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                        (unsigned int)v52[v30 + 3],
                        v29,
                        *a4,
                        0LL,
                        0LL);
                      goto LABEL_82;
                    }
                    v28 = v52;
                  }
                  if ( ++v29 >= *v28 )
                    goto LABEL_39;
                }
                WdLogSingleEntry3(2LL, (unsigned int)v52[v30 + 3], v29, v31);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to set monitor DPI override on target 0x%I64x on path 0x%I64x, (Status = 0x%I64x).",
                  (unsigned int)v52[v30 + 3],
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
                v22 = v55;
                if ( ProcessSessionId != v55 )
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
                v40 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
                if ( v40 )
                {
                  v41 = PsGetCurrentProcessSessionId(v39);
                  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v40, v41);
                }
                else
                {
                  SessionDataForSpecifiedSession = 0LL;
                }
                v56 = SessionDataForSpecifiedSession;
                if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18976)
                  || !*((_BYTE *)SessionDataForSpecifiedSession + 18496) )
                {
                  *a4 = -1071775725;
                  WdLogSingleEntry2(2LL, v22, -1071775725LL);
                  v23 = L"Sending SetDisplayConfig ALPC message from display broker disabled session 0x%I64x, returning 0x%I64x.";
                  goto LABEL_20;
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v54[0][365] + 656LL)) )
                {
                  LOBYTE(v43) = 1;
                  if ( (unsigned __int8)WdIsDebuggerPresent(v43) )
                  {
                    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
                    __debugbreak();
                  }
                  v57 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v22, 0, 0, 0, 0LL);
                }
                if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v54[0][365] + 656LL)) )
                {
                  v57 = 0LL;
                  DxgkLogCodePointPacketForSession(0x72u, v22, 0, 0, 0, 0LL);
                }
                memset(v82, 0, 0x48uLL);
                v44 = 216 * *v52 + 80;
                v45 = operator new[](216LL * (unsigned int)*v52 + 96, 0x4B677844u, 256LL);
                if ( v45 )
                {
                  v62 = (ReferenceCounted *)v45;
                  *(_QWORD *)v45 = &ReferenceCounted::`vftable';
                  v46 = (struct _PORT_MESSAGE *)(v45 + 16);
                  *(_DWORD *)(v45 + 8) = 1;
                  *(_QWORD *)v45 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
                  v53 = 0;
                  v74[0] = &v52;
                  v74[1] = &v53;
                  v47 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
                          (_WORD *)(v45 + 16),
                          (__int64)v74,
                          (unsigned __int16)v44 - 80);
                  *a4 = v47;
                  if ( v47 >= 0 )
                  {
                    v48 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v56, &v62);
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
                    v67 = 72LL;
                    v66.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
                    *a4 = DxgkSendDisplayBrokerMessage(0x120000u, v46, 0LL, v82, &v67, 0LL, &v66);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
                    if ( v54[0][25].LowPart != 1 || BYTE1(v54[0][354].LowPart) )
                    {
                      WdLogSingleEntry2(3LL, v54[0], -1071775725LL);
                      *a4 = -1071775725;
                    }
                    else
                    {
                      v49 = *a4;
                      if ( *a4 == -1073741772 )
                      {
                        WdLogSingleEntry1(3LL, *(unsigned int *)v56);
                        *a4 = 0;
                      }
                      else if ( v49 == 192 )
                      {
                        *a4 = -1073741749;
                        WdLogSingleEntry2(3LL, *(unsigned int *)v56, -1073741749LL);
                      }
                      else if ( v49 >= 0 )
                      {
                        MessageId = v82[1].MessageId;
                        if ( (v82[1].MessageId & 0x80000000) == 0 )
                        {
                          DXGSESSIONDATA::SetDisplayConfigDone(v56, v48);
                          MessageId = v82[1].MessageId;
                        }
                        *a4 = MessageId;
                      }
                      else
                      {
                        WdLogSingleEntry2(2LL, *(unsigned int *)v56, *a4);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Failed to send Display broker message in session 0x%I64x, status 0x%I64x",
                          *(unsigned int *)v56,
                          *a4,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v47);
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
                  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v62, 0LL);
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
            (__int64)v54[0],
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
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v54, 0LL);
LABEL_86:
  if ( v79 )
    lambda_b19eb8e30f7421e25a3eba0801a1f707_::operator()(v78);
  if ( v81 )
    KeUnstackDetachProcess(&ApcState);
}
