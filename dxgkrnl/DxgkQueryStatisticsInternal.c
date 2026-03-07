__int64 __fastcall DxgkQueryStatisticsInternal(ULONG64 a1, char a2, __int64 a3)
{
  char v3; // r13
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // r14
  struct DXGPROCESS *v13; // r13
  __int64 v14; // rcx
  struct DXGPROCESS *Process; // rax
  __int64 v16; // rsi
  DXGADAPTER *v17; // r14
  DXGADAPTER *v18; // rbx
  int Statistics; // eax
  BOOL v20; // ecx
  int ProcessStatistics; // eax
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int NodePerfData; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  int AdapterPerfData; // eax
  int AdapterPerfDataCaps; // eax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  _OWORD *v39; // rcx
  _OWORD *v40; // rax
  __int64 v41; // rdx
  _OWORD *v42; // rcx
  _OWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  DXGADAPTER *v49; // [rsp+58h] [rbp-410h] BYREF
  DXGADAPTER *v50; // [rsp+60h] [rbp-408h]
  int v51; // [rsp+68h] [rbp-400h] BYREF
  __int64 v52; // [rsp+70h] [rbp-3F8h]
  char v53; // [rsp+78h] [rbp-3F0h]
  unsigned __int64 v54; // [rsp+80h] [rbp-3E8h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp-3E0h] BYREF
  _BYTE v56[8]; // [rsp+90h] [rbp-3D8h] BYREF
  DXGADAPTER *v57; // [rsp+98h] [rbp-3D0h]
  char v58; // [rsp+A0h] [rbp-3C8h]
  _BYTE v59[808]; // [rsp+B0h] [rbp-3B8h] BYREF
  _BYTE v60[80]; // [rsp+3E0h] [rbp-88h] BYREF

  v3 = a2;
  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2049);
  memset(v59, 0, sizeof(v59));
  v54 = 0LL;
  if ( v3 )
  {
    v5 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = v59;
    v7 = 6LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    *v6 = *v5;
    v6[1] = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v8 = (_OWORD *)a1;
    v9 = v59;
    v10 = 6LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      *(v9 - 1) = v8[7];
      v8 += 8;
      --v10;
    }
    while ( v10 );
    *v9 = *v8;
    v9[1] = v8[1];
    *((_QWORD *)v9 + 4) = *((_QWORD *)v8 + 4);
  }
  memset(&v59[24], 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal();
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v59[4], &v54);
  v50 = v12;
  if ( v12 )
  {
    v13 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60, *(void **)&v59[16], 1024);
    if ( *(_QWORD *)&v59[16] )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v60, 1) < 0 )
      {
        WdLogSingleEntry1(3LL, *(_QWORD *)&v59[16]);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v60);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v14);
    }
    v13 = Process;
LABEL_21:
    if ( !v13 )
    {
      WdLogSingleEntry1(3LL, 6170LL);
      LODWORD(v16) = -1073741811;
LABEL_87:
      DXGADAPTER::ReleaseReference(v12);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v60);
      v3 = a2;
      goto LABEL_90;
    }
    v49 = 0LL;
    v55 = 0LL;
    LODWORD(v16) = DxgkpGetPairingAdapters(v12, 0, &v49, &v55, 0LL, 0LL, 0);
    if ( (int)v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x",
        (__int64)v12,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = v49;
LABEL_84:
      if ( v17 )
        DXGADAPTER::ReleaseReference(v17);
      v12 = v50;
      goto LABEL_87;
    }
    v17 = v49;
    if ( !v49 )
    {
      LODWORD(v16) = -1073741637;
      v18 = v50;
      WdLogSingleEntry2(2LL, v50, -1073741637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Try to call query process statistics on a display only adapter 0x%I64x (Status = 0x%I64x)!",
        (__int64)v18,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_84;
    }
    if ( *((_BYTE *)v49 + 209) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v49 + 4472),
                     (struct _D3DKMT_QUERYSTATISTICS *)v59,
                     v13);
      v16 = Statistics;
      if ( Statistics < 0 )
      {
        WdLogSingleEntry2(2LL, v17, Statistics);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Host adapter failed the call. hAdapter (0x%I64x) specified, returning 0x%I64x",
          (__int64)v17,
          v16,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_84;
    }
    v57 = v49;
    v58 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
    v20 = *((_DWORD *)v17 + 50) == 1;
    v17 = v49;
    if ( !v20 )
    {
LABEL_82:
      if ( v58 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
      goto LABEL_84;
    }
    if ( !*(_QWORD *)(*((_QWORD *)v49 + 366) + 760LL) )
    {
      WdLogSingleEntry1(1LL, 5939LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidMmExport()",
        5939LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v17 + 366) + 736LL) )
    {
      WdLogSingleEntry1(1LL, 5940LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderAdapter->GetRenderCore()->GetVidSchExport()",
        5940LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(int *)v59 > 10 )
    {
      if ( *(_DWORD *)v59 == 11 )
      {
        if ( (unsigned int)*(unsigned __int16 *)&v59[800] < *((_DWORD *)v17 + 72) )
        {
          LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366) + 760LL)
                                                                                        + 8LL)
                                                                            + 288LL))(
                           *(_QWORD *)(*((_QWORD *)v17 + 366) + 768LL),
                           *(unsigned __int16 *)&v59[800],
                           &v59[24]);
          if ( (int)v16 >= 0 )
          {
            LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366)
                                                                                              + 736LL)
                                                                                  + 8LL)
                                                                      + 688LL))(
                             *(_QWORD *)(*((_QWORD *)v17 + 366) + 744LL),
                             &v59[24]);
            *(_DWORD *)&v59[28] = *(unsigned __int16 *)(344LL * *(unsigned __int16 *)&v59[800] + *((_QWORD *)v17 + 351));
          }
        }
        else
        {
          LODWORD(v16) = -1073741811;
        }
        goto LABEL_82;
      }
      if ( *(_DWORD *)v59 != 12 )
      {
        switch ( *(_DWORD *)v59 )
        {
          case 0xD:
          case 0xE:
          case 0xF:
            goto LABEL_75;
          case 0x10:
            ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366) + 760LL) + 8LL)
                                                                                           + 1248LL))(
                                  *(_QWORD *)(*((_QWORD *)v17 + 366) + 768LL),
                                  *(unsigned __int16 *)&v59[800],
                                  *(unsigned __int16 *)&v59[802],
                                  &v59[24]);
            goto LABEL_76;
          case 0x11:
            v34 = *((_QWORD *)v17 + 366);
            v35 = *(_QWORD *)(v34 + 760);
            v36 = *((_QWORD *)v13 + 8);
            if ( v36 )
              v37 = *(_QWORD *)(v36 + 8LL * (unsigned int)(*(_DWORD *)v35 - 1));
            else
              v37 = 0LL;
            ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _BYTE *))(*(_QWORD *)(v35 + 8) + 1256LL))(
                                  *(_QWORD *)(v34 + 768),
                                  *(unsigned __int16 *)&v59[800],
                                  *(unsigned __int16 *)&v59[802],
                                  v37,
                                  &v59[24]);
            goto LABEL_76;
        }
        if ( *(_DWORD *)v59 != 18 )
          goto LABEL_75;
        v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 696LL))(
                *(_QWORD *)(*((_QWORD *)v17 + 366) + 744LL),
                *(unsigned __int16 *)(a1 + 800),
                *(unsigned __int16 *)(a1 + 802),
                &v59[24]);
        v16 = v33;
        if ( v33 < 0 )
          goto LABEL_44;
        if ( *((int *)v17 + 705) < 2400 )
          goto LABEL_82;
        v23 = *(unsigned __int16 *)(a1 + 802);
        v24 = *(unsigned __int16 *)(a1 + 800);
LABEL_47:
        *(_DWORD *)&v59[572] = v24;
        *(_DWORD *)&v59[568] = v23;
        NodePerfData = DXGADAPTER::GetNodePerfData(v17, (struct _D3DKMT_NODE_PERFDATA *)&v59[568]);
        goto LABEL_48;
      }
      v38 = *((_QWORD *)v17 + 366);
      v27 = *(_QWORD *)(v38 + 768);
      v30 = *(unsigned __int16 *)&v59[802];
      v28 = *(_QWORD *)(*(_QWORD *)(v38 + 760) + 8LL);
      v29 = *(unsigned __int16 *)&v59[800];
    }
    else
    {
      switch ( *(_DWORD *)v59 )
      {
        case 0xA:
          if ( *((int *)v17 + 705) < 2400 )
          {
            LODWORD(v16) = -1073741822;
            goto LABEL_82;
          }
          *(_DWORD *)&v59[24] = *(_DWORD *)&v59[800];
          AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v17, (struct _D3DKMT_ADAPTER_PERFDATA *)&v59[24]);
          v16 = AdapterPerfData;
          if ( AdapterPerfData < 0 )
            goto LABEL_44;
          *(_DWORD *)&v59[88] = *(_DWORD *)&v59[800];
          AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(v17, (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v59[88]);
          v16 = AdapterPerfDataCaps;
          if ( AdapterPerfDataCaps < 0 )
            goto LABEL_44;
          *(_DWORD *)&v59[128] = *(_DWORD *)&v59[800];
          NodePerfData = DXGADAPTER::GetGpuVersion(v17, (struct _D3DKMT_GPUVERSION *)&v59[128]);
LABEL_48:
          v16 = NodePerfData;
          if ( NodePerfData >= 0 )
            goto LABEL_82;
          goto LABEL_44;
        case 0:
          LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366) + 760LL)
                                                                                        + 8LL)
                                                                            + 288LL))(
                           *(_QWORD *)(*((_QWORD *)v17 + 366) + 768LL),
                           0LL,
                           &v59[24]);
          if ( (int)v16 < 0 )
            goto LABEL_82;
          ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366)
                                                                                                 + 736LL)
                                                                                     + 8LL)
                                                                         + 688LL))(
                                *(_QWORD *)(*((_QWORD *)v17 + 366) + 744LL),
                                &v59[24]);
          goto LABEL_76;
        case 2:
          goto LABEL_75;
      }
      if ( *(_DWORD *)v59 != 3 )
      {
        if ( *(_DWORD *)v59 == 4 )
          goto LABEL_75;
        if ( *(_DWORD *)v59 != 5 )
        {
          if ( *(_DWORD *)v59 == 7 )
          {
            ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366) + 736LL)
                                                                                               + 8LL)
                                                                                   + 704LL))(
                                  *(_QWORD *)(*((_QWORD *)v17 + 366) + 744LL),
                                  *(unsigned int *)&v59[800],
                                  &v59[24]);
LABEL_76:
            LODWORD(v16) = ProcessStatistics;
            goto LABEL_82;
          }
LABEL_75:
          ProcessStatistics = QueryProcessStatistics(
                                (struct _D3DKMT_QUERYSTATISTICS *)v59,
                                v17,
                                (struct _KTHREAD **)v13);
          goto LABEL_76;
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 366)
                                                                                                  + 736LL)
                                                                                      + 8LL)
                                                                          + 696LL))(
                *(_QWORD *)(*((_QWORD *)v17 + 366) + 744LL),
                0xFFFFLL,
                *(unsigned int *)(a1 + 800),
                &v59[24]);
        v16 = v22;
        if ( v22 < 0 )
        {
LABEL_44:
          WdLogSingleEntry1(3LL, v16);
          goto LABEL_82;
        }
        if ( *((int *)v17 + 705) < 2400 )
          goto LABEL_82;
        v23 = *(_DWORD *)&v59[800] % (unsigned int)**((unsigned __int16 **)v17 + 351);
        v24 = *(_DWORD *)&v59[800] / (unsigned int)**((unsigned __int16 **)v17 + 351);
        goto LABEL_47;
      }
      v26 = *((_QWORD *)v17 + 366);
      v27 = *(_QWORD *)(v26 + 768);
      v28 = *(_QWORD *)(*(_QWORD *)(v26 + 760) + 8LL);
      v29 = 0LL;
      v30 = *(unsigned int *)&v59[800];
    }
    ProcessStatistics = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v28 + 312))(
                          v27,
                          v29,
                          v30,
                          &v59[24]);
    goto LABEL_76;
  }
  WdLogSingleEntry2(3LL, *(unsigned int *)&v59[4], *(int *)&v59[8]);
  LODWORD(v16) = -1073741811;
LABEL_90:
  if ( (int)v16 >= 0 )
  {
    if ( v3 )
    {
      v39 = (_OWORD *)(a1 + 24);
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v39 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v40 = &v59[24];
      v41 = 6LL;
      do
      {
        *v39 = *v40;
        v39[1] = v40[1];
        v39[2] = v40[2];
        v39[3] = v40[3];
        v39[4] = v40[4];
        v39[5] = v40[5];
        v39[6] = v40[6];
        v39 += 8;
        *(v39 - 1) = v40[7];
        v40 += 8;
        --v41;
      }
      while ( v41 );
      *(_QWORD *)v39 = *(_QWORD *)v40;
    }
    else
    {
      v42 = (_OWORD *)(a1 + 24);
      v43 = &v59[24];
      v44 = 6LL;
      do
      {
        *v42 = *v43;
        v42[1] = v43[1];
        v42[2] = v43[2];
        v42[3] = v43[3];
        v42[4] = v43[4];
        v42[5] = v43[5];
        v42[6] = v43[6];
        v42 += 8;
        *(v42 - 1) = v43[7];
        v43 += 8;
        --v44;
      }
      while ( v44 );
      *(_QWORD *)v42 = *(_QWORD *)v43;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v51);
  return (unsigned int)v16;
}
