/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930
 * Callers:
 *     DxgkAddAdapter @ 0x1C01F10BC (DxgkAddAdapter.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C003FCA8 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0050B14 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkStartPnPTransition @ 0x1C020ACBC (DxgkStartPnPTransition.c)
 *     DxgkDetermineAffectedSession @ 0x1C020AFC8 (DxgkDetermineAffectedSession.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C020B014 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C020B4AC (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     DpiReportAdapter @ 0x1C020B4D4 (DpiReportAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020C750 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C020C7CC (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C020C974 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C020CA04 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02B1790 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0310A38 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C035D628 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        PDEVICE_OBJECT DeviceObject,
        struct DXGADAPTER **a3,
        void *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  void *v8; // r13
  void *v9; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rdi
  int v12; // r14d
  __int64 v13; // r14
  __int64 v14; // r15
  int v15; // r12d
  __int64 v16; // rax
  int v17; // r11d
  unsigned int v18; // r9d
  ADAPTER_RENDER **v19; // r15
  struct _LUID *v20; // rdx
  __int64 v21; // r12
  unsigned __int8 IsAdapterSessionized; // al
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  DXGGLOBAL **v28; // rcx
  __int64 v29; // rcx
  int v30; // r15d
  int updated; // eax
  __int64 v33; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rbx
  int v38; // [rsp+C8h] [rbp-C0h]
  int v39; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v40[4]; // [rsp+108h] [rbp-80h] BYREF
  int v41; // [rsp+10Ch] [rbp-7Ch]
  unsigned int v42; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v44[8]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v45; // [rsp+128h] [rbp-60h]
  char v46; // [rsp+130h] [rbp-58h]

  v41 = 0;
  v8 = a4;
  v9 = (void *)operator new[](0x12C0uLL, 0x4B677844u, 64LL);
  if ( v9 )
  {
    v10 = DXGADAPTER::DXGADAPTER(v9, this);
    v11 = (__int64)v10;
    if ( v10 )
    {
      v12 = DXGADAPTER::Initialize(v10, DeviceObject, a5);
      if ( v12 < 0 )
      {
        if ( (*(_DWORD *)(v11 + 2792) & 8) != 0 )
          DXGADAPTER::AdapterTelemetry(v11, 0LL, a6);
      }
      else
      {
        if ( bTracingEnabled )
        {
          v13 = *(_QWORD *)(v11 + 4580);
          v14 = *(_QWORD *)(v11 + 280);
          v15 = *DXGADAPTER::GetAdapterType((DXGADAPTER *)v11, &v43);
          v16 = *(_QWORD *)(v11 + 2920);
          if ( v16 )
            v17 = *(_DWORD *)(v16 + 96);
          else
            LOBYTE(v17) = 0;
          v18 = *(_DWORD *)(v11 + 2268);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            v33 = v18 >> 14;
            LOBYTE(v33) = v33 & 7;
            McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
              v33,
              &EventCreateAdapter,
              v18 >> 31,
              (__int64)DeviceObject,
              v11,
              v17,
              *(_QWORD *)(v11 + 2216),
              *(_DWORD *)(v11 + 2224),
              *(_QWORD *)(v11 + 2232),
              *(_DWORD *)(v11 + 2240),
              *(_DWORD *)(v11 + 2244),
              *(_DWORD *)(v11 + 2252),
              *(_DWORD *)(v11 + 2256),
              *(_DWORD *)(v11 + 2260),
              *(_DWORD *)(v11 + 2272),
              *(_DWORD *)(v11 + 2248),
              *(_DWORD *)(v11 + 2264),
              v18,
              (v18 >> 10) & 0xF,
              v33,
              (v18 >> 17) & 7,
              (v18 & 0x80000000) != 0,
              *(_DWORD *)(v11 + 2276),
              *(_DWORD *)(v11 + 2280),
              v38,
              *(_DWORD *)(v11 + 2288),
              *(_DWORD *)(v11 + 2292),
              v39,
              *(_DWORD *)(v11 + 3168),
              v15,
              v14,
              v13);
          }
          v8 = a4;
        }
        DpiReportAdapter(DeviceObject, v11);
        v19 = (ADAPTER_RENDER **)(v11 + 2928);
        if ( *(_QWORD *)(v11 + 2928) )
          DXGADAPTER::ReportNodeMetadata((DXGADAPTER *)v11);
        DXGADAPTER::AdapterTelemetry(v11, 0LL, a6);
        v21 = v11 + 216;
        v12 = 0;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 3912LL) = v11;
        if ( *v19 && (v12 = ADAPTER_RENDER::FinalizeInitialization(*v19), v12 < 0) )
        {
          WdLogSingleEntry2(3LL, -1073741801LL, 2486LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 64LL) + 3912LL) = 0LL;
        }
        else
        {
          v43 = 0LL;
          *(_BYTE *)(v11 + 213) = 1;
          v42 = 0;
          IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v20, &v42, &v43);
          v23 = v43;
          LOBYTE(v23) = IsAdapterSessionized;
          LOBYTE(v24) = *(_QWORD *)(v11 + 2920) != 0LL;
          v40[0] = IsAdapterSessionized;
          LOBYTE(v25) = *v19 != 0LL;
          v26 = DxgkDetermineAffectedSession(v23, v25, v24, 0, v43);
          if ( DxgkStartPnPTransition(v8, v26) )
          {
            if ( *v19 && (*(_DWORD *)(v11 + 436) & 0x4000) == 0 )
            {
              v45 = v11;
              v46 = 0;
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
              if ( *(_DWORD *)(v11 + 200) == 1 )
              {
                if ( *((_DWORD *)this + 76114) != 10 || (*((_DWORD *)this + 76117) & 1) != 0 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v19 + 92) + 8LL) + 952LL))(
                    *((_QWORD *)*v19 + 93),
                    *((_DWORD *)this + 76117) & 1);
                if ( *(_QWORD *)((char *)this + 304460) != 0x1E00000032LL )
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)*v19 + 95) + 8LL) + 1152LL))(
                    *((_QWORD *)*v19 + 96),
                    *((unsigned int *)this + 76115),
                    *((unsigned int *)this + 76116));
              }
              if ( v46 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
            }
            DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
            DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 720));
            v27 = (__int64 *)((char *)this + 768);
            v28 = (DXGGLOBAL **)*((_QWORD *)this + 96);
            if ( v28[1] != (DXGGLOBAL *)((char *)this + 768) )
              __fastfail(3u);
            *(_QWORD *)v11 = v28;
            *(_QWORD *)(v11 + 8) = v27;
            v28[1] = (DXGGLOBAL *)v11;
            *v27 = v11;
            if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v28, (struct DXGADAPTER *)v11) )
            {
              if ( ++*((_DWORD *)this + 76206) == 2 )
              {
                Global = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::RecordFeatureUsage(Global, 6LL, 1LL);
              }
              if ( *(_BYTE *)(v11 + 2764) )
              {
                ++*((_DWORD *)this + 76202);
              }
              else if ( *(_BYTE *)(v11 + 2759) )
              {
                ++*((_DWORD *)this + 76203);
              }
              if ( *((_DWORD *)this + 76203) && *((_DWORD *)this + 76202) )
              {
                v35 = DXGGLOBAL::GetGlobal();
                DXGGLOBAL::RecordFeatureUsage(v35, 9LL, 1LL);
              }
            }
            DXGFASTMUTEX::Release((struct _KTHREAD **)this + 90);
            DXGFASTMUTEX::Release((struct _KTHREAD **)this + 84);
            if ( *(_BYTE *)(v11 + 209) )
            {
              if ( !*((_QWORD *)this + 120) && (*(_DWORD *)(v11 + 2792) & 8) == 0 )
              {
                DXGGLOBAL::SetVirtualRenderAdapter(this, (struct DXGADAPTER *)v11);
                v30 = *(unsigned __int8 *)(v11 + 211);
                goto LABEL_29;
              }
            }
            else
            {
              v29 = *(_QWORD *)(*(_QWORD *)v21 + 64LL);
              if ( *(_BYTE *)(v29 + 5680) )
              {
                v36 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v29 + 5664), 1u);
                if ( v36 < 0 )
                  WdLogSingleEntry1(2LL, v36);
              }
            }
            v30 = v41;
LABEL_29:
            *(_BYTE *)(v11 + 4616) = 1;
            if ( v40[0] )
              updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v42, 0, 0);
            else
              updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
            if ( updated < 0 )
            {
              v37 = updated;
              WdLogSingleEntry2(2LL, v11, updated);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to send Start WNF for Adapter=0x%I64x with Status=0x%I64x",
                v11,
                v37,
                0LL,
                0LL,
                0LL);
            }
            if ( v30 )
              DXGVAILOBJECT::NotifyVailAdapter(1);
            if ( (*(_BYTE *)(v11 + 2891) & 1) != 0 )
            {
              v40[0] = 0;
              DxgkCheckAndUpdatePairingForNewAdapter((struct DXGADAPTER *)v11, v40);
              *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v40[0] << 6)) & 0x40;
            }
            *a3 = (struct DXGADAPTER *)v11;
            return (unsigned int)v12;
          }
          WdLogSingleEntry2(2LL, -1073741801LL, 2507LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to start PnP transition on the affected sessions, returning 0x%I64x",
            -1073741801LL,
            2507LL,
            0LL,
            0LL,
            0LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 64LL) + 3912LL) = 0LL;
        }
        DXGADAPTER::Destroy((DXGADAPTER *)v11);
      }
      DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)v11);
      return (unsigned int)v12;
    }
  }
  WdLogSingleEntry1(3LL, -1073741801LL);
  return 3221225495LL;
}
