/*
 * XREFs of DxgkIddHandleSetDisplayConfig @ 0x1C025B8CC
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02D5F90 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___ @ 0x1C001A2E8 (DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570___.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A80C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage @ 0x1C00267E8 (Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage.c)
 *     Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage @ 0x1C0027760 (Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0043C90 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__-D.c)
 *     ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C0043D18 (-SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C013C5FC (DxgkWaitForPnPTransitionDone.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C016D010 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C020C004 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C025B09C (_lambda_1ecc0e3e99406e51155bf30eed62debb_--operator().c)
 *     _lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator() @ 0x1C025B210 (_lambda_1f8a3375a223ce0e5161cba7601a4e42_--operator().c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C025B670 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C029F4B4 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C4268 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     DpiFdoWaitConnectionChangeComplete @ 0x1C02CD224 (DpiFdoWaitConnectionChangeComplete.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02F52BC (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02F553C (MonitorSetScaleFactorOverride.c)
 */

void __fastcall DxgkIddHandleSetDisplayConfig(__int64 a1, __int64 a2, DWORD *a3, int *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // r14
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  struct _LUID *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  struct _LUID *v22; // rdx
  __int64 v23; // r8
  __int64 LowPart; // rcx
  struct _LUID v25; // rcx
  void *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct _LUID *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  DWORD *v35; // rdx
  DWORD v36; // edi
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // esi
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  struct DXGGLOBAL *Global; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  struct DXGGLOBAL *v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  DXGSESSIONMGR *v59; // rsi
  unsigned int v60; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v62; // rcx
  size_t v63; // rdi
  char *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  char *v69; // rsi
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edi
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  ULONG MessageId; // eax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  char v86; // [rsp+40h] [rbp-C0h] BYREF
  DWORD *v87; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID *v88[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v89; // [rsp+60h] [rbp-A0h] BYREF
  char v90; // [rsp+64h] [rbp-9Ch] BYREF
  DXGSESSIONDATA *v91; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v94; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v95[2]; // [rsp+88h] [rbp-78h] BYREF
  ReferenceCounted *v96; // [rsp+98h] [rbp-68h] BYREF
  char v97[8]; // [rsp+A0h] [rbp-60h] BYREF
  struct _LUID *v98; // [rsp+A8h] [rbp-58h]
  char v99; // [rsp+B0h] [rbp-50h]
  union _LARGE_INTEGER v100; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v101; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-38h] BYREF
  DWORD v103; // [rsp+D0h] [rbp-30h]
  __int64 v104; // [rsp+D8h] [rbp-28h] BYREF
  DWORD v105; // [rsp+E0h] [rbp-20h]
  __int64 *v106[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v107[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v108; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v109; // [rsp+120h] [rbp+20h]
  DXGSESSIONDATA **v110; // [rsp+128h] [rbp+28h]
  int *v111[4]; // [rsp+130h] [rbp+30h] BYREF
  char v112; // [rsp+150h] [rbp+50h]
  struct _KAPC_STATE ApcState; // [rsp+158h] [rbp+58h] BYREF
  char v114; // [rsp+188h] [rbp+88h]
  struct _PORT_MESSAGE v115[2]; // [rsp+190h] [rbp+90h] BYREF

  v4 = (unsigned int)a2;
  v93 = 0LL;
  v7 = (unsigned int)a1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(a1, a2);
  v114 = 0;
  v95[0] = CurrentProcessSessionId;
  *((_QWORD *)&v108 + 1) = &v93;
  v109 = v95;
  v110 = &v91;
  v91 = 0LL;
  *(_QWORD *)&v108 = a4;
  DXGKCALLONEXIT__lambda_d7c4861ef0734605370a98f05df27570_((__int64)v111, &v108);
  *a4 = -1073741823;
  if ( (unsigned int)v4 < 4 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v13[3] = v4;
    v14 = -1073741789;
    v13[4] = -1073741789LL;
LABEL_7:
    WdLogEvent5_WdError(v13);
    goto LABEL_8;
  }
  v87 = a3;
  v15 = *a3;
  if ( (unsigned int)v15 >= 0x10 )
  {
    v16 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v16 + 24) = *v87;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    v14 = -1073741811;
LABEL_8:
    *a4 = v14;
    goto LABEL_81;
  }
  v18 = 68 * v15 + 4;
  if ( v4 < v18 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v18, v9);
    v13[3] = v4;
    v14 = -1073741789;
    v13[4] = *v87;
    v13[5] = -1073741789LL;
    goto LABEL_7;
  }
  v88[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle((struct DXGADAPTER **)v88, (unsigned int)v7, v11, v12);
  if ( v88[0] )
  {
    v93 = *(_QWORD *)&v88[0][39].HighPart;
    v94 = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v88[0], v19, 0LL, &v94);
    v95[0] = v94;
    v98 = v88[0];
    v99 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    LowPart = v88[0][25].LowPart;
    if ( (_DWORD)LowPart != 1 )
      goto LABEL_76;
    v22 = v88[0];
    if ( BYTE1(v88[0][326].LowPart) )
      goto LABEL_76;
    v25 = v88[0][337];
    if ( !*(_QWORD *)&v25
      || (v88[0][43].HighPart & 0x100) == 0
      || (v25 = (struct _LUID)*(unsigned int *)(*(_QWORD *)&v25 + 80LL), *v87 > v25.LowPart)
      || (v89 = 0, !DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v88[0], v88[0], &v89, 0LL)) )
    {
      v84 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(v25, v22);
      *(struct _LUID **)(v84 + 24) = v88[0];
      *(_QWORD *)(v84 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v84);
      *a4 = -1073741811;
      goto LABEL_78;
    }
    v26 = (void *)v88[0][27];
    ObfReferenceObject(v26);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    v27 = DxgkWaitForPnPTransitionDone(0LL, 0LL, v89, 2);
    *a4 = v27;
    if ( v27 < 0 )
    {
      ObfDereferenceObject(v26);
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v31 = (struct _LUID *)v89;
      goto LABEL_19;
    }
    *a4 = DpiFdoWaitConnectionChangeComplete(v26);
    ObfDereferenceObject(v26);
    if ( *a4 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v33, v32);
      *(struct _LUID **)(v34 + 24) = v88[0];
      *(_QWORD *)(v34 + 32) = *a4;
      *(_QWORD *)(v34 + 40) = -1071775725LL;
      WdLogEvent5_WdError(v34);
LABEL_77:
      *a4 = -1071775725;
LABEL_78:
      if ( v99 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      goto LABEL_80;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
    LowPart = v88[0][25].LowPart;
    if ( (_DWORD)LowPart != 1 || BYTE1(v88[0][326].LowPart) )
    {
LABEL_76:
      v85 = WdLogNewEntry5_WdWarning(LowPart, v22, v23);
      *(struct _LUID **)(v85 + 24) = v88[0];
      *(_QWORD *)(v85 + 32) = -1071775725LL;
      WdLogEvent5_WdWarning(v85);
      goto LABEL_77;
    }
    v35 = v87;
    v106[0] = (__int64 *)v88;
    v36 = 0;
    v86 = 0;
    v106[1] = (__int64 *)&v86;
    if ( !*v87 )
    {
LABEL_74:
      *a4 = -1073741811;
      v30 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v35);
      v31 = v88[0];
LABEL_19:
      v30[3] = v31;
LABEL_20:
      v30[4] = *a4;
      goto LABEL_21;
    }
    do
    {
      v37 = lambda_1ecc0e3e99406e51155bf30eed62debb_::operator()(v106, v36, &v35[17 * v36 + 1]);
      *a4 = v37;
      if ( v37 < 0 )
        goto LABEL_78;
      v35 = v87;
      ++v36;
    }
    while ( v36 < *v87 );
    if ( !v86 )
      goto LABEL_74;
    v40 = 0;
    if ( *v87 )
    {
      while ( 1 )
      {
        v41 = 17LL * v40;
        v42 = MonitorSetScaleFactorOverride(v88[0], v35[v41 + 3], v35[v41 + 12]);
        *a4 = v42;
        if ( v42 < 0 )
          break;
        v45 = MonitorSetPhysicalSizeOverride(v88[0], v87[v41 + 3], v87[v41 + 13], v87[v41 + 14]);
        *a4 = v45;
        if ( v45 < 0 )
          break;
        Feature_VAIL_Monitor_Projection__private_ReportDeviceUsage();
        Feature_VAIL_Fake_Monitor_Projection__private_ReportDeviceUsage();
        v35 = v87;
        if ( v87[v41 + 15] || v87[v41 + 16] || v87[v41 + 17] )
        {
          v102 = *(_QWORD *)&v87[v41 + 1];
          v103 = v87[v41 + 3];
          v104 = *(_QWORD *)&v87[v41 + 15];
          v105 = v87[v41 + 17];
          Global = DXGGLOBAL::GetGlobal(LowPart, (__int64)v87);
          v47 = REMOTEMONITORMAPPING::AddMapping(
                  (struct DXGGLOBAL *)((char *)Global + 304616),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v104,
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v102);
          *a4 = v47;
          if ( v47 < 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(LowPart, v48);
            v58 = v87[17 * v40 + 3];
            goto LABEL_44;
          }
          v35 = v87;
        }
        if ( ++v40 >= *v35 )
          goto LABEL_39;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
      v58 = v87[v41 + 3];
LABEL_44:
      v30[3] = v58;
      v30[4] = v40;
      v30[5] = *a4;
LABEL_21:
      WdLogEvent5_WdError(v30);
      goto LABEL_78;
    }
LABEL_39:
    CurrentProcess = PsGetCurrentProcess(LowPart, v35, v38, v39);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    v53 = v89;
    if ( ProcessSessionId != v89 )
    {
      Object = 0LL;
      v54 = DXGGLOBAL::GetGlobal(v52, v51);
      v55 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
              *((DXGSESSIONMGR **)v54 + 102),
              v53,
              (struct _KPROCESS **)&Object);
      *a4 = v55;
      if ( v55 < 0 )
      {
LABEL_41:
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
        v30[3] = v53;
        goto LABEL_20;
      }
      CPROCESSATTACHHELPER::Attach(&ApcState, (PRKPROCESS)Object);
      ObfDereferenceObject(Object);
    }
    v59 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v52, v51) + 102);
    if ( v59 )
    {
      v60 = PsGetCurrentProcessSessionId(v57, v56);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v59, v60);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    v91 = SessionDataForSpecifiedSession;
    if ( !*((_BYTE *)SessionDataForSpecifiedSession + 18944) || !*((_BYTE *)SessionDataForSpecifiedSession + 18488) )
    {
      *a4 = -1071775725;
      goto LABEL_41;
    }
    if ( !KeReadStateEvent(*(PRKEVENT *)(*(_QWORD *)&v88[0][337] + 560LL)) )
    {
      LOBYTE(v62) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v62) )
      {
        DbgPrintEx(0x65u, 0, "Breaking in to allow debug of missing GDOs when PnP transition is done.");
        __debugbreak();
      }
      v95[1] = 0LL;
      DxgkLogCodePointPacketForSession(0x72u, v53, 0, 0, 0, 0LL);
    }
    memset(v115, 0, 0x48uLL);
    v63 = 200LL * *v87 + 80;
    v64 = (char *)operator new[](200LL * *v87 + 96, 0x4B677844u, PagedPool);
    v69 = v64;
    if ( !v64 )
    {
      v70 = WdLogNewEntry5_WdLowResource(v66, v65, v67, v68);
      *(_QWORD *)(v70 + 24) = 1066LL;
      WdLogEvent5_WdLowResource(v70);
      *a4 = -1073741801;
      goto LABEL_78;
    }
    memset(v64, 0, v63);
    v96 = (ReferenceCounted *)v69;
    *(_QWORD *)v69 = &ReferenceCounted::`vftable';
    *((_DWORD *)v69 + 2) = 1;
    *(_QWORD *)v69 = &rc_buffer<DispBroker::AlpcRequest<8>>::`vftable';
    v107[0] = &v87;
    v107[1] = &v90;
    v71 = InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
            (_WORD *)v69 + 8,
            (__int64)v107,
            (unsigned __int16)v63 - 80);
    *a4 = v71;
    if ( v71 >= 0 )
    {
      v75 = DXGSESSIONDATA::CacheIddDisplayConfigRequest((__int64)v91, (__int64 *)&v96);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      v101 = 72LL;
      v100.QuadPart = (-(__int64)(g_bSkuSupportMultipleUsers != 0) & 0xFFFFFFFF8EC04D00uLL) - 100000000;
      *a4 = DxgkSendDisplayBrokerMessage(1179648LL, (struct _PORT_MESSAGE *)(v69 + 16), 0LL, v115, &v101, 0LL, &v100);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
      v78 = v88[0][25].LowPart;
      if ( (_DWORD)v78 != 1 || BYTE1(v88[0][326].LowPart) )
      {
        v83 = WdLogNewEntry5_WdWarning(v78, v76, v77);
        *(struct _LUID **)(v83 + 24) = v88[0];
        *(_QWORD *)(v83 + 32) = -1071775725LL;
        WdLogEvent5_WdWarning(v83);
        *a4 = -1071775725;
        goto LABEL_72;
      }
      v79 = *a4;
      if ( *a4 == -1073741772 )
      {
        v80 = WdLogNewEntry5_WdWarning(v78, v76, v77);
        *(_QWORD *)(v80 + 24) = *(unsigned int *)v91;
        WdLogEvent5_WdWarning(v80);
        *a4 = 0;
        goto LABEL_72;
      }
      if ( v79 == 192 )
      {
        *a4 = -1073741749;
        v81 = WdLogNewEntry5_WdWarning(v78, v76, v77);
        *(_QWORD *)(v81 + 24) = *(unsigned int *)v91;
        *(_QWORD *)(v81 + 32) = *a4;
        WdLogEvent5_WdWarning(v81);
        goto LABEL_72;
      }
      if ( v79 >= 0 )
      {
        MessageId = v115[1].MessageId;
        if ( (v115[1].MessageId & 0x80000000) == 0 )
        {
          DXGSESSIONDATA::SetDisplayConfigDone(v91, v75);
          MessageId = v115[1].MessageId;
        }
        *a4 = MessageId;
        goto LABEL_72;
      }
      v74 = WdLogNewEntry5_WdError(v78, v76);
      *(_QWORD *)(v74 + 24) = *(unsigned int *)v91;
      *(_QWORD *)(v74 + 32) = *a4;
    }
    else
    {
      v74 = WdLogNewEntry5_WdError(v73, v72);
      *(_QWORD *)(v74 + 24) = *a4;
    }
    WdLogEvent5_WdError(v74);
LABEL_72:
    auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v96, 0LL);
    goto LABEL_78;
  }
  v21 = WdLogNewEntry5_WdWarning(0LL, v19, v20);
  *(_QWORD *)(v21 + 24) = v7;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  *a4 = -1073741811;
LABEL_80:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v88, 0LL);
LABEL_81:
  if ( v112 )
    lambda_1f8a3375a223ce0e5161cba7601a4e42_::operator()(v111, v17);
  if ( v114 )
    KeUnstackDetachProcess(&ApcState);
}
