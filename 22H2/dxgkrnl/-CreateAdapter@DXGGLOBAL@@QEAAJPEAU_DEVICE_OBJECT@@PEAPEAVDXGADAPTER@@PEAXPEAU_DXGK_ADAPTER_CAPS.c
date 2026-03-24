/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019450C
 * Callers:
 *     DxgkAddAdapter @ 0x1C0195B98 (DxgkAddAdapter.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009188 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C003A0C4 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C004648C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0101D60 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C018F684 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C01910CC (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     DxgkStartPnPTransition @ 0x1C019489C (DxgkStartPnPTransition.c)
 *     DxgkDetermineAffectedSession @ 0x1C0194B90 (DxgkDetermineAffectedSession.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0194BDC (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiReportAdapter @ 0x1C0195528 (DpiReportAdapter.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0195738 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0196044 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C01960F0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0196180 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C019CF40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020C968 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026C220 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02B5E68 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        PDEVICE_OBJECT DeviceObject,
        struct DXGADAPTER **a3,
        void *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  void *v6; // r12
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  int v14; // esi
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // r12
  int v18; // r13d
  int *AdapterType; // rax
  unsigned int v20; // r9d
  struct _LUID *v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool IsAdapterSessionized; // al
  int v26; // ecx
  bool v27; // r13
  int v28; // r8d
  int v29; // edx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGADAPTER **v33; // rax
  DXGGLOBAL **v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r14d
  int updated; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // edi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v51; // rax
  NTSTATUS v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // [rsp+C8h] [rbp-C0h]
  int v59; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v60[4]; // [rsp+108h] [rbp-80h] BYREF
  int v61; // [rsp+10Ch] [rbp-7Ch]
  unsigned int v62; // [rsp+110h] [rbp-78h] BYREF
  int v63; // [rsp+114h] [rbp-74h] BYREF
  unsigned __int64 v64; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v65[8]; // [rsp+120h] [rbp-68h] BYREF
  DXGADAPTER *v66; // [rsp+128h] [rbp-60h]
  char v67; // [rsp+130h] [rbp-58h]

  v61 = 0;
  v6 = a4;
  v9 = operator new(0x11A0uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v9 )
    v13 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = DXGADAPTER::Initialize(v13, DeviceObject, a5);
    if ( v14 < 0 )
    {
      if ( DXGADAPTER::IsComputeOnlyAdapter(v13) )
        DXGADAPTER::AdapterTelemetry(v46, 0LL, a6);
    }
    else
    {
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)v13 + 337);
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 80);
        else
          LOBYTE(v16) = 0;
        v17 = *((_QWORD *)v13 + 34);
        v18 = *((_DWORD *)v13 + 736);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v63);
        v20 = *((_DWORD *)v13 + 511);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v47 = v20 >> 14;
          LOBYTE(v47) = v47 & 7;
          McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
            v47,
            &EventCreateAdapter,
            v20 >> 31,
            (__int64)DeviceObject,
            (char)v13,
            v16,
            *((_QWORD *)v13 + 249),
            *((_DWORD *)v13 + 500),
            *((_QWORD *)v13 + 251),
            *((_DWORD *)v13 + 504),
            *((_DWORD *)v13 + 505),
            *((_DWORD *)v13 + 507),
            *((_DWORD *)v13 + 508),
            *((_DWORD *)v13 + 509),
            *((_DWORD *)v13 + 512),
            *((_DWORD *)v13 + 506),
            *((_DWORD *)v13 + 510),
            v20,
            (v20 >> 10) & 0xF,
            v47,
            (v20 >> 17) & 7,
            (v20 & 0x80000000) != 0,
            *((_DWORD *)v13 + 513),
            *((_DWORD *)v13 + 514),
            v58,
            *((_DWORD *)v13 + 516),
            *((_DWORD *)v13 + 517),
            v59,
            v18,
            *AdapterType,
            v17);
        }
        v6 = a4;
      }
      DpiReportAdapter(DeviceObject, v13);
      if ( *((_QWORD *)v13 + 338) )
        DXGADAPTER::ReportNodeMetadata(v13);
      DXGADAPTER::AdapterTelemetry(v13, 0LL, a6);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = v13;
      v22 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 338);
      if ( v22 && (v14 = ADAPTER_RENDER::FinalizeInitialization(v22), v14 < 0) )
      {
        v48 = WdLogNewEntry5_WdWarning(v23, v21, v24);
        *(_QWORD *)(v48 + 24) = -1073741801LL;
        *(_QWORD *)(v48 + 32) = 2317LL;
        WdLogEvent5_WdWarning(v48);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      else
      {
        v62 = 0;
        v64 = 0LL;
        IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v13, v21, &v62, &v64);
        v26 = v64;
        v27 = IsAdapterSessionized;
        LOBYTE(v26) = IsAdapterSessionized;
        LOBYTE(v28) = *((_QWORD *)v13 + 337) != 0LL;
        LOBYTE(v29) = *((_QWORD *)v13 + 338) != 0LL;
        v30 = DxgkDetermineAffectedSession(v26, v29, v28, 0, v64);
        if ( DxgkStartPnPTransition(v6, v30) )
        {
          if ( *((_QWORD *)v13 + 338) && (*((_DWORD *)v13 + 87) & 0x4000) == 0 )
          {
            v66 = v13;
            v67 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
            if ( *((_DWORD *)v13 + 50) == 1 )
            {
              if ( *((_DWORD *)this + 76074) != 10 || (*((_DWORD *)this + 76077) & 1) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 338) + 616LL) + 8LL)
                                                       + 952LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 338) + 624LL),
                  *((_DWORD *)this + 76077) & 1);
              if ( *(_QWORD *)((char *)this + 304300) != 0x1E00000032LL )
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 338) + 640LL)
                                                                           + 8LL)
                                                               + 1160LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 338) + 648LL),
                  *((unsigned int *)this + 76075),
                  *((unsigned int *)this + 76076));
            }
            if ( v67 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
          }
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 584));
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 624));
          v33 = (DXGADAPTER **)((char *)this + 664);
          v34 = (DXGGLOBAL **)*((_QWORD *)this + 83);
          if ( v34[1] != (DXGGLOBAL *)((char *)this + 664) )
            __fastfail(3u);
          *(_QWORD *)v13 = v34;
          *((_QWORD *)v13 + 1) = v33;
          v34[1] = v13;
          *v33 = v13;
          if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v34, v13) )
          {
            if ( ++*((_DWORD *)this + 76152) == 2 )
            {
              Global = DXGGLOBAL::GetGlobal(v36, v35);
              DXGGLOBAL::RecordFeatureUsage(Global, 6LL, 1LL);
            }
            if ( *((_BYTE *)v13 + 2540) )
            {
              ++*((_DWORD *)this + 76148);
            }
            else if ( *((_BYTE *)v13 + 2535) )
            {
              ++*((_DWORD *)this + 76149);
            }
            if ( *((_DWORD *)this + 76149) && *((_DWORD *)this + 76148) )
            {
              v51 = DXGGLOBAL::GetGlobal(v36, v35);
              DXGGLOBAL::RecordFeatureUsage(v51, 9LL, 1LL);
            }
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 78, v35);
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 73, v37);
          if ( *((_BYTE *)v13 + 209) )
          {
            if ( !*((_QWORD *)this + 104) && !DXGADAPTER::IsComputeOnlyAdapter(v13) )
            {
              DXGGLOBAL::SetVirtualRenderAdapter(this, v13);
              v39 = *((unsigned __int8 *)v13 + 211);
              goto LABEL_30;
            }
          }
          else
          {
            v38 = *(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL);
            if ( *(_BYTE *)(v38 + 5736) )
            {
              v52 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v38 + 5720), 1u);
              v55 = v52;
              if ( v52 < 0 )
              {
                v56 = WdLogNewEntry5_WdError(v54, v53);
                *(_QWORD *)(v56 + 24) = v55;
                WdLogEvent5_WdError(v56);
              }
            }
          }
          v39 = v61;
LABEL_30:
          *((_BYTE *)v13 + 4368) = 1;
          if ( v27 )
            updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v62, 0, 0);
          else
            updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
          v43 = updated;
          if ( updated < 0 )
          {
            v57 = WdLogNewEntry5_WdError(v42, v41);
            *(_QWORD *)(v57 + 24) = v13;
            *(_QWORD *)(v57 + 32) = v43;
            WdLogEvent5_WdError(v57);
          }
          if ( v39 )
            DXGVAILOBJECT::NotifyVailAdapter(1);
          if ( *((_QWORD *)v13 + 338) )
          {
            v60[0] = 0;
            DxgkCheckAndUpdatePairingForNewAdapter(v13, v60);
            *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v60[0] << 6)) & 0x40;
          }
          *a3 = v13;
          return (unsigned int)v14;
        }
        v49 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v49 + 24) = -1073741801LL;
        *(_QWORD *)(v49 + 32) = 2338LL;
        WdLogEvent5_WdError(v49);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v45 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v45 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v45);
  return 3221225495LL;
}
