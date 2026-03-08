/*
 * XREFs of NtDxgkDisplayPortOperation @ 0x1C004A830
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_DP_AUX_V2__private_ReportDeviceUsage @ 0x1C0025FB8 (Feature_DP_AUX_V2__private_ReportDeviceUsage.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1C0088780 (-SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z.c)
 *     ?DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z @ 0x1C02178B0 (-DdiGetDPAddress@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETDPADDRESS@@@Z.c)
 *     ?DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z @ 0x1C02C0F78 (-DdiDPAuxIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPAUXIOTRANSMISSION@@@Z.c)
 *     ?DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z @ 0x1C02C122C (-DdiDPI2CIoTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPI2CIOTRANSMISSION@@@Z.c)
 *     ?DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z @ 0x1C02C14E0 (-DdiDPSBMTransmission@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DPSBMTRANSMISSION@@@Z.c)
 *     ?DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z @ 0x1C02C48BC (-DdiQueryDPCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYDPCAPS@@@Z.c)
 */

__int64 __fastcall NtDxgkDisplayPortOperation(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  _OWORD *v4; // rax
  struct DXGADAPTER *v5; // r15
  __int64 LowPart; // rsi
  __int64 HighPart; // r14
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r14
  int v12; // r12d
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v17; // r13
  size_t v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int v33; // eax
  int v34; // eax
  unsigned int DPCaps; // eax
  unsigned int v36; // ecx
  __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // r8d
  unsigned int v40; // eax
  size_t v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r15
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51[8]; // [rsp+60h] [rbp-138h] BYREF
  int v52; // [rsp+68h] [rbp-130h] BYREF
  __int64 v53; // [rsp+70h] [rbp-128h]
  char v54; // [rsp+78h] [rbp-120h]
  __int64 v55; // [rsp+80h] [rbp-118h] BYREF
  struct DXGADAPTER *v56[2]; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v57; // [rsp+98h] [rbp-100h]
  struct _LUID v58[2]; // [rsp+A0h] [rbp-F8h] BYREF
  unsigned int v59; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-E0h]
  size_t Size; // [rsp+C0h] [rbp-D8h]
  _DWORD *v62; // [rsp+C8h] [rbp-D0h]
  _BYTE v63[144]; // [rsp+D0h] [rbp-C8h] BYREF

  Feature_DP_AUX_V2__private_ReportDeviceUsage();
  v52 = -1;
  v53 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v54 = 1;
    v52 = 2213;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2213);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2213);
  v51[0] = 0;
  if ( ((int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, v51) < 0 || !v51[0])
    && ((int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, v51) < 0 || !v51[0]) )
  {
    goto LABEL_105;
  }
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v58[0].LowPart = *v4;
  v56[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v56, &v58[1]);
  v5 = v56[0];
  if ( !v56[0] )
  {
    LowPart = v58[1].LowPart;
    HighPart = v58[1].HighPart;
    WdLogSingleEntry3(2LL, v58[1].HighPart, v58[1].LowPart, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v9,
        v8,
        v10,
        0LL,
        0,
        -1,
        L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
        HighPart,
        LowPart,
        -1073741811LL,
        0LL,
        0LL);
    goto LABEL_101;
  }
  v11 = (unsigned int)v58[0].HighPart;
  v12 = v58[0].HighPart - 16;
  if ( (unsigned int)(v58[0].HighPart - 17) > 0xFFF )
  {
    WdLogSingleEntry2(3LL, (int)v58[0].LowPart, (unsigned int)v58[0].HighPart);
    goto LABEL_101;
  }
  Size = v12;
  v13 = (_DWORD *)operator new[](v12, 0x4B677844u, 256LL);
  P = v13;
  v62 = v13;
  if ( !v13 )
  {
    DXGADAPTER_REFERENCE::Assign(v56, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v52);
    return 3221225495LL;
  }
  v17 = (char *)(a1 + 16);
  v18 = Size;
  if ( &v17[Size] < v17 || (unsigned __int64)&v17[Size] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, v17, v18);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v5, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v58[1].HighPart, v58[1].LowPart);
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
    ExFreePoolWithTag(v13, 0);
LABEL_101:
    DXGADAPTER_REFERENCE::Assign(v56, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v52);
    }
    return 3221225485LL;
  }
  v22 = *((_QWORD *)v5 + 365);
  if ( !v22 )
  {
    v42 = v58[1].LowPart;
    v43 = v58[1].HighPart;
    WdLogSingleEntry3(2LL, v58[1].HighPart, v58[1].LowPart, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v45,
        v44,
        v46,
        0LL,
        0,
        -1,
        L"Non-display adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
        v43,
        v42,
        -1073741811LL,
        0LL,
        0LL);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v5 + 181) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v22, v20, v21);
    v23[3] = v58[1].HighPart;
    v23[4] = v58[1].LowPart;
    v24 = -1073741637;
    v23[5] = -1073741637LL;
    goto LABEL_30;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v55, *(_QWORD *)(v22 + 104));
  v28 = (int)v58[0].LowPart;
  switch ( v58[0].LowPart )
  {
    case 1u:
      if ( (unsigned int)v11 < 0x18 )
      {
        v29 = v11;
        v30 = 1LL;
        goto LABEL_44;
      }
      DPCaps = ADAPTER_DISPLAY::DdiQueryDPCaps(*((ADAPTER_DISPLAY **)v5 + 365), (struct _DXGKARG_QUERYDPCAPS *)v13);
      goto LABEL_93;
    case 2u:
      if ( (unsigned int)v11 < 0x2C )
      {
        v29 = v11;
        v30 = 2LL;
        goto LABEL_44;
      }
      DPCaps = ADAPTER_DISPLAY::DdiGetDPAddress(*((ADAPTER_DISPLAY **)v5 + 365), (struct _DXGKARG_GETDPADDRESS *)v13);
      goto LABEL_93;
    case 3u:
      if ( (unsigned int)v11 < 0x38 || (*v13 & 1) != 0 )
      {
        v29 = v11;
        v30 = 3LL;
        goto LABEL_44;
      }
      if ( *((_BYTE *)v13 + 12) > 0x10u )
        goto LABEL_40;
      DPCaps = ADAPTER_DISPLAY::DdiDPAuxIoTransmission(
                 *((ADAPTER_DISPLAY **)v5 + 365),
                 (struct _DXGKARG_DPAUXIOTRANSMISSION *)v13);
      goto LABEL_93;
    case 4u:
      if ( (unsigned int)v11 < 0x3C )
      {
        v29 = v11;
        goto LABEL_63;
      }
      v36 = v13[4];
      if ( v36 + 40 > v12 )
      {
        v29 = v36;
        goto LABEL_63;
      }
      v37 = (unsigned int)v13[6];
      if ( (unsigned int)v37 > v36 )
      {
LABEL_67:
        v29 = v37;
        goto LABEL_63;
      }
      v38 = v13[5];
      if ( v38 > v36 )
      {
        v29 = v38;
        goto LABEL_63;
      }
      v39 = *v13;
      if ( (*v13 & 3) != 0 && ((v39 & 1) == 0 || (_DWORD)v37) )
      {
        if ( (v39 & 2) == 0 )
          goto LABEL_77;
        if ( v38 )
        {
          v37 = (unsigned int)v13[2];
          if ( (_DWORD)v37 != 110 )
            goto LABEL_67;
LABEL_77:
          v40 = (v39 >> 3) & 7;
          if ( ((v39 & 4) == 0 || v40 == 1) && v40 <= 4 )
          {
            DPCaps = ADAPTER_DISPLAY::DdiDPI2CIoTransmission(
                       *((ADAPTER_DISPLAY **)v5 + 365),
                       (struct _DXGKARG_DPI2CIOTRANSMISSION *)v13);
LABEL_93:
            v24 = DPCaps;
            v57 = DPCaps;
            v41 = Size;
            if ( (unsigned __int64)&v17[Size] > MmUserProbeAddress || &v17[Size] <= v17 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v17, v13, v41);
            goto LABEL_53;
          }
          v29 = (*v13 >> 3) & 7;
LABEL_63:
          v30 = 4LL;
          goto LABEL_44;
        }
      }
      v28 = 4LL;
      goto LABEL_39;
  }
  if ( v58[0].LowPart != 5 )
  {
LABEL_39:
    WdLogSingleEntry1(3LL, v28);
LABEL_40:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v55 + 40));
    goto LABEL_26;
  }
  if ( (unsigned int)v11 < 0x3C )
  {
    v29 = v11;
LABEL_43:
    v30 = 5LL;
LABEL_44:
    WdLogSingleEntry2(3LL, v30, v29);
    goto LABEL_40;
  }
  v31 = v13[2];
  if ( v31 + 28 > v12 )
  {
    v29 = v31;
    goto LABEL_43;
  }
  v32 = (unsigned int)v13[3];
  if ( (unsigned int)v32 > v31 )
  {
    v29 = (unsigned int)v32;
    goto LABEL_43;
  }
  v33 = v13[4];
  if ( v33 > v31 )
  {
    v29 = v33;
    goto LABEL_43;
  }
  v59 = 127;
  v34 = SidebandMessageParser(v13 + 7, v32, v27, &v59);
  v24 = v34;
  if ( v34 < 0 )
  {
    WdLogSingleEntry2(3LL, 5LL, v34);
LABEL_53:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v55 + 40));
LABEL_30:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
    ExFreePoolWithTag(v13, 0);
    DXGADAPTER_REFERENCE::Assign(v56, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v52);
    return v24;
  }
  if ( v59 < 2 || v59 == 18 || v59 == 32 || v59 == 34 || v59 == 56 )
  {
    DPCaps = ADAPTER_DISPLAY::DdiDPSBMTransmission(
               *((ADAPTER_DISPLAY **)v5 + 365),
               (struct _DXGKARG_DPSBMTRANSMISSION *)v13);
    goto LABEL_93;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v55 + 40));
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
  ExFreePoolWithTag(v13, 0);
  DXGADAPTER_REFERENCE::Assign(v56, 0LL);
LABEL_105:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v52);
  return 3221225506LL;
}
