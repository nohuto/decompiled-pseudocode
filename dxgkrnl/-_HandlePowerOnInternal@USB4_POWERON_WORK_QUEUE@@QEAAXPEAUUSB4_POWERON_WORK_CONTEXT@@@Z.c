/*
 * XREFs of ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550
 * Callers:
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03C64B0 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001D748 (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C0049A48 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af___ @ 0x1C006BB34 (DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af___.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676B0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C01DBD60 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1C0394D00 (DpiPollDisplayChildren.c)
 *     _lambda_d7f36fd7568915a231f5d0e0139551af_::operator() @ 0x1C03C5718 (_lambda_d7f36fd7568915a231f5d0e0139551af_--operator().c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5ABC (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRef@DxgMonitor@@QEAAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z @ 0x1C03C5B84 (-AddUsb4HRPowerRefFromContext@Usb4HostRouterPoFxRef@DxgMonitor@@SAJPEAUUSB4_POFXREF_CONTEXT@@@Z.c)
 *     ?_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1C03C6E94 (-_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(
        USB4_POWERON_WORK_QUEUE *this,
        struct USB4_POWERON_WORK_CONTEXT *a2)
{
  const struct _LUID *v2; // r8
  struct DXGADAPTER *v3; // rbx
  struct DXGADAPTER *v4; // rsi
  unsigned int i; // r15d
  __int64 v6; // r8
  __int64 v7; // rbx
  _BYTE *v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int j; // r15d
  __int64 v13; // rbx
  DxgMonitor::MonitorUsb4State *v14; // rcx
  void *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h]
  struct USB4_POWERON_WORK_CONTEXT *v25; // [rsp+60h] [rbp-A0h] BYREF
  DxgkCompositionObject *v26; // [rsp+68h] [rbp-98h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v29[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v33[40]; // [rsp+B8h] [rbp-48h] BYREF
  char v34[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v35[3]; // [rsp+E8h] [rbp-18h] BYREF
  char v36; // [rsp+100h] [rbp+0h]
  _BYTE v37[144]; // [rsp+110h] [rbp+10h] BYREF

  v25 = a2;
  v23 = 0;
  *(_QWORD *)&v27 = &v23;
  v21 = 0;
  *((_QWORD *)&v27 + 1) = &v25;
  v26 = 0LL;
  v28 = &v21;
  v24 = -1;
  DXGKCALLONEXIT__lambda_d7f36fd7568915a231f5d0e0139551af_((__int64)v35, &v27);
  v29[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v29, v2 + 10) )
  {
    v3 = v29[0];
    *((struct DXGADAPTER **)&v27 + 1) = v29[0];
    LOBYTE(v28) = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
    if ( *((_DWORD *)v3 + 50) == 1 )
    {
      v4 = v29[0];
      for ( i = 0; i < *((_DWORD *)v25 + 22); ++i )
      {
        memset(v33, 0, sizeof(v33));
        MONITOR_MGR::AcquireMonitorExclusive(&v30, (__int64)v4, *(_DWORD *)(*((_QWORD *)v25 + 12) + 4LL * i), 0);
        v7 = v30;
        if ( v30 )
        {
          v8 = *(_BYTE **)(v30 + 264);
          if ( v8[8] )
          {
            DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRef(
              (DxgMonitor::Usb4HostRouterPoFxRef *)(v8 + 64),
              (struct USB4_POFXREF_CONTEXT *)v33,
              v6);
            v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 16LL))(*(_QWORD *)v8);
            v10 = *(_QWORD *)v8;
            *(_DWORD *)&v33[24] = v9;
            *(_QWORD *)&v33[28] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 8LL))(
                                               v10,
                                               v34);
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * i), v4 != 0LL, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
            *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * i),
            v4 != 0LL,
            v21,
            0LL,
            0LL);
          if ( !v23 )
          {
            v24 = *(_DWORD *)(*((_QWORD *)v25 + 12) + 4LL * i);
            v23 = 5;
          }
        }
        if ( v7 )
        {
          ExReleaseResourceLite((PERESOURCE)(v7 + 24));
          KeLeaveCriticalRegion();
        }
        if ( *(_QWORD *)v33 )
        {
          v11 = DxgMonitor::Usb4HostRouterPoFxRef::AddUsb4HRPowerRefFromContext((struct USB4_POFXREF_CONTEXT *)v33);
          v21 = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * i), v4 != 0LL, v11);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to power on USB4 host adapter target 0x%I64 for adapter 0x%I64, status 0x%I64",
              *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * i),
              v4 != 0LL,
              v21,
              0LL,
              0LL);
            if ( !v23 )
            {
              v24 = *(_DWORD *)(*((_QWORD *)v25 + 12) + 4LL * i);
              v23 = 15;
            }
          }
        }
      }
      for ( j = 0; j < *((_DWORD *)v25 + 22); ++j )
      {
        MONITOR_MGR::AcquireMonitorExclusive(&v31, (__int64)v4, *(_DWORD *)(*((_QWORD *)v25 + 12) + 4LL * j), 0);
        v13 = v31;
        if ( v31 )
        {
          v14 = *(DxgMonitor::MonitorUsb4State **)(v31 + 264);
          if ( *((_BYTE *)v14 + 8) )
            DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(v14);
        }
        else
        {
          WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * j), v4 != 0LL, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
            *(unsigned int *)(*((_QWORD *)v25 + 12) + 4LL * j),
            v4 != 0LL,
            v21,
            0LL,
            0LL);
          if ( !v23 )
          {
            v24 = *(_DWORD *)(*((_QWORD *)v25 + 12) + 4LL * j);
            v23 = 12;
          }
        }
        if ( v13 )
        {
          ExReleaseResourceLite((PERESOURCE)(v13 + 24));
          KeLeaveCriticalRegion();
        }
      }
      Interval.QuadPart = -4000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v15 = (void *)*((_QWORD *)v4 + 27);
      ObfReferenceObject(v15);
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        &v26,
        (DxgkCompositionObject *)v15);
      if ( (_BYTE)v28 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
      v16 = DpiPollDisplayChildren((__int64)v26, 0xCu, 0LL);
      v21 = v16;
      if ( v16 >= 0 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v4, 0LL);
        v17 = COREADAPTERACCESS::AcquireExclusive((__int64)v37, 1LL);
        v21 = v17;
        if ( v17 >= 0 )
        {
          v22[0] = 0;
          v18 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v4, 0, (struct _DMM_SET_TIMING_RESULT *)v22);
          v21 = v18;
          if ( v18 >= 0 )
          {
            DmmHandleSetTimingsResult(
              (ADAPTER_DISPLAY **)v4,
              (struct _DMM_SET_TIMING_RESULT *)v22,
              (struct USB4_POWERON_WORK_CONTEXT *)((char *)v25 + 8));
            v19 = v23;
            if ( !v23 )
              v19 = 1;
            v23 = v19;
          }
          else
          {
            WdLogSingleEntry2(2LL, 1LL, v18);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed for adapter 0x%I64 after processing, status 0x%I64",
              1LL,
              v21,
              0LL,
              0LL,
              0LL);
            if ( !v23 )
              v23 = 7;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, 1LL, v17);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
            1LL,
            v21,
            0LL,
            0LL,
            0LL);
          if ( !v23 )
            v23 = 20;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      }
      else
      {
        WdLogSingleEntry2(2LL, 1LL, v16);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
          1LL,
          v21,
          0LL,
          0LL,
          0LL);
        if ( !v23 )
          v23 = 19;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *((int *)v25 + 21), *((unsigned int *)v25 + 20));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter with luid 0x%08I64x%08I64x is not active",
        *((int *)v25 + 21),
        *((unsigned int *)v25 + 20),
        0LL,
        0LL,
        0LL);
      v20 = v23;
      if ( !v23 )
        v20 = 13;
      v23 = v20;
      if ( (_BYTE)v28 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v27);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *((int *)v25 + 21), *((unsigned int *)v25 + 20));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not find adapter with luid 0x%08I64x%08I64x",
      *((int *)v25 + 21),
      *((unsigned int *)v25 + 20),
      0LL,
      0LL,
      0LL);
    if ( !v23 )
      v23 = 2;
  }
  DXGADAPTER_REFERENCE::Assign(v29, 0LL);
  if ( v36 )
    lambda_d7f36fd7568915a231f5d0e0139551af_::operator()(v35);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(&v26);
}
