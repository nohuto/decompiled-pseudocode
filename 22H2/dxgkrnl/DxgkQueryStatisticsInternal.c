/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C0226088
 * Callers:
 *     DxgkQueryStatistics @ 0x1C0226070 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246090 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0002D74 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00ED4E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00ED5A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020DA00 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C020DBA8 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C020DC38 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020DCC4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C0222AE0 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C024B83C (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C028452C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 a1, char a2, __int64 a3)
{
  char v3; // r14
  ULONG64 v4; // rsi
  _OWORD *v5; // rax
  int *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdx
  _OWORD *v9; // rax
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *v18; // r12
  struct DXGPROCESS *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  DXGADAPTER *v36; // rsi
  __int64 v37; // rax
  int Statistics; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  int ProcessStatistics; // eax
  int AdapterPerfData; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v55; // eax
  __int64 v56; // rax
  unsigned int v57; // edx
  ULONG64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  _OWORD *v61; // rcx
  _OWORD *v62; // rax
  _OWORD *v63; // rcx
  _OWORD *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  DXGADAPTER *v69; // [rsp+48h] [rbp-400h] BYREF
  int v70; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-3F0h]
  char v72; // [rsp+60h] [rbp-3E8h]
  ULONG64 v73; // [rsp+68h] [rbp-3E0h]
  unsigned __int64 v74; // [rsp+70h] [rbp-3D8h] BYREF
  unsigned __int64 v75; // [rsp+78h] [rbp-3D0h] BYREF
  _BYTE v76[8]; // [rsp+80h] [rbp-3C8h] BYREF
  DXGADAPTER *v77; // [rsp+88h] [rbp-3C0h]
  char v78; // [rsp+90h] [rbp-3B8h]
  int v79; // [rsp+A0h] [rbp-3A8h] BYREF
  struct _LUID v80; // [rsp+A4h] [rbp-3A4h]
  void *v81; // [rsp+B0h] [rbp-398h]
  _BYTE v82[776]; // [rsp+B8h] [rbp-390h] BYREF
  unsigned int v83; // [rsp+3C0h] [rbp-88h]
  _BYTE v84[80]; // [rsp+3D0h] [rbp-78h] BYREF

  v3 = a2;
  v4 = a1;
  v73 = a1;
  v70 = -1;
  v71 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v72 = 1;
    v70 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v70, 2049LL);
  v74 = 0LL;
  if ( v3 )
  {
    v5 = (_OWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = &v79;
    v7 = 6LL;
    v8 = 6LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v9 = (_OWORD *)v4;
    v10 = &v79;
    v7 = 6LL;
    v11 = 6LL;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 32;
      *((_OWORD *)v10 - 1) = v9[7];
      v9 += 8;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
  }
  memset(v82, 0, sizeof(v82));
  Global = DXGGLOBAL::GetGlobal(v13, v12);
  v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v80, &v74);
  if ( v18 )
  {
    v19 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v84, v81, 1024);
    if ( v81 )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v84, 1) < 0 )
      {
        v31 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v31 + 24) = v81;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v84);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v21, v20, v22, v23);
    }
    v19 = Process;
LABEL_21:
    if ( !v19 )
    {
      v59 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v59 + 24) = 5704LL;
      WdLogEvent5_WdWarning(v59);
      LODWORD(v34) = -1073741811;
LABEL_63:
      DXGADAPTER::ReleaseReference(v18);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v84);
      v3 = a2;
      goto LABEL_66;
    }
    v69 = 0LL;
    v75 = 0LL;
    LODWORD(v34) = DxgkpGetPairingAdapters(v18, 0LL, &v69, &v75, 0LL, 0LL, 0);
    if ( (int)v34 < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v35 + 24) = v18;
      WdLogEvent5_WdError(v35);
      v36 = v69;
LABEL_60:
      if ( v36 )
        DXGADAPTER::ReleaseReference(v36);
      v4 = v73;
      goto LABEL_63;
    }
    v36 = v69;
    if ( !v69 )
    {
      v37 = WdLogNewEntry5_WdError(v33, v32);
      *(_QWORD *)(v37 + 24) = v18;
      v34 = -1073741637LL;
      goto LABEL_29;
    }
    if ( *((_BYTE *)v69 + 209) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v69 + 4240),
                     (struct _D3DKMT_QUERYSTATISTICS *)&v79,
                     v19);
      v34 = Statistics;
      if ( Statistics >= 0 )
        goto LABEL_60;
      v37 = WdLogNewEntry5_WdError(v40, v39);
      *(_QWORD *)(v37 + 24) = v36;
LABEL_29:
      *(_QWORD *)(v37 + 32) = v34;
      WdLogEvent5_WdError(v37);
      goto LABEL_60;
    }
    v77 = v69;
    v78 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
    v44 = *((_DWORD *)v36 + 50);
    v36 = v69;
    if ( v44 != 1 )
    {
LABEL_58:
      if ( v78 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v76);
      goto LABEL_60;
    }
    v45 = *((_QWORD *)v69 + 338);
    if ( !*(_QWORD *)(v45 + 640) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v45, v41);
      *(_QWORD *)(v46 + 24) = 5586LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = *((_QWORD *)v36 + 338);
    }
    if ( !*(_QWORD *)(v45 + 616) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v45, v41);
      *(_QWORD *)(v47 + 24) = 5587LL;
      WdLogEvent5_WdAssertion(v47);
    }
    switch ( v79 )
    {
      case 0:
        LODWORD(v34) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 338)
                                                                                          + 640LL)
                                                                              + 8LL)
                                                                  + 296LL))(
                         *(_QWORD *)(*((_QWORD *)v36 + 338) + 648LL),
                         v82);
        if ( (int)v34 < 0 )
          goto LABEL_58;
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 338)
                                                                                               + 616LL)
                                                                                   + 8LL)
                                                                       + 688LL))(
                              *(_QWORD *)(*((_QWORD *)v36 + 338) + 624LL),
                              v82);
        goto LABEL_57;
      case 3:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 338) + 640LL)
                                                                                           + 8LL)
                                                                               + 320LL))(
                              *(_QWORD *)(*((_QWORD *)v36 + 338) + 648LL),
                              v83,
                              v82);
        goto LABEL_57;
      case 5:
        v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 338) + 616LL)
                                                                             + 8LL)
                                                                 + 696LL))(
                *(_QWORD *)(*((_QWORD *)v36 + 338) + 624LL),
                v83,
                v82);
        v34 = v55;
        if ( v55 < 0 )
          goto LABEL_48;
        if ( *((int *)v36 + 649) < 2400 )
          goto LABEL_58;
        v57 = v83 % **((unsigned __int16 **)v36 + 323);
        *(_DWORD *)&v82[548] = v83 / **((unsigned __int16 **)v36 + 323);
        *(_DWORD *)&v82[544] = v57;
        NodePerfData = DXGADAPTER::GetNodePerfData(v36, (struct _D3DKMT_NODE_PERFDATA *)&v82[544], v52);
        break;
      case 7:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 338) + 616LL)
                                                                                           + 8LL)
                                                                               + 704LL))(
                              *(_QWORD *)(*((_QWORD *)v36 + 338) + 624LL),
                              v83,
                              v82);
        goto LABEL_57;
      case 10:
        if ( *((int *)v36 + 649) < 2400 )
        {
          LODWORD(v34) = -1073741822;
          goto LABEL_58;
        }
        *(_DWORD *)v82 = v83;
        AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v36, (struct _D3DKMT_ADAPTER_PERFDATA *)v82, v42);
        v34 = AdapterPerfData;
        if ( AdapterPerfData < 0
          || (*(_DWORD *)&v82[64] = v83,
              AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                      v36,
                                      (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v82[64],
                                      v52),
              v34 = AdapterPerfDataCaps,
              AdapterPerfDataCaps < 0) )
        {
LABEL_48:
          v56 = WdLogNewEntry5_WdWarning(v51, v50, v52);
          *(_QWORD *)(v56 + 24) = v34;
          WdLogEvent5_WdWarning(v56);
          goto LABEL_58;
        }
        *(_DWORD *)&v82[104] = v83;
        NodePerfData = DXGADAPTER::GetGpuVersion(v36, (struct _D3DKMT_GPUVERSION *)&v82[104], v52);
        break;
      default:
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v79, v36, v19, v43);
LABEL_57:
        LODWORD(v34) = ProcessStatistics;
        goto LABEL_58;
    }
    v34 = NodePerfData;
    if ( NodePerfData >= 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  v60 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v60 + 24) = v80.LowPart;
  *(_QWORD *)(v60 + 32) = v80.HighPart;
  WdLogEvent5_WdWarning(v60);
  LODWORD(v34) = -1073741811;
LABEL_66:
  if ( (int)v34 >= 0 )
  {
    if ( v3 )
    {
      v61 = (_OWORD *)(v4 + 24);
      v58 = MmUserProbeAddress;
      if ( v4 + 800 > MmUserProbeAddress || v4 + 800 <= (unsigned __int64)v61 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v62 = v82;
      do
      {
        *v61 = *v62;
        v61[1] = v62[1];
        v61[2] = v62[2];
        v61[3] = v62[3];
        v61[4] = v62[4];
        v61[5] = v62[5];
        v61[6] = v62[6];
        v61 += 8;
        *(v61 - 1) = v62[7];
        v62 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v61 = *(_QWORD *)v62;
    }
    else
    {
      v63 = (_OWORD *)(v4 + 24);
      v64 = v82;
      do
      {
        *v63 = *v64;
        v63[1] = v64[1];
        v63[2] = v64[2];
        v63[3] = v64[3];
        v63[4] = v64[4];
        v63[5] = v64[5];
        v63[6] = v64[6];
        v63 += 8;
        *(v63 - 1) = v64[7];
        v64 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v63 = *(_QWORD *)v64;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v58);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v65, &EventProfilerExit, v66, v70);
  return (unsigned int)v34;
}
