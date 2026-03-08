/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0071810
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0071780 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0022AD8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C003C370 (DrvGetDeviceFromName.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00723C0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00AFB64 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00CD648 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DE898 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DE8A8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DE8C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // r14d
  __int64 DeviceFromName; // r13
  int v9; // esi
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // r15
  NSInstrumentation::CLeakTrackingAllocator *v19; // rsi
  __int64 v20; // rdi
  int v21; // eax
  unsigned __int64 Pool2; // rdi
  struct _UNICODE_STRING *v23; // r12
  _OWORD *v24; // r9
  wchar_t *v25; // rcx
  const wchar_t *v26; // r8
  ULONG v27; // eax
  int PruneFlag; // eax
  int v29; // edx
  unsigned int v30; // edx
  struct _UNICODE_STRING *v31; // rsi
  char v32; // r8
  void *v33; // r14
  NTSTATUS v34; // eax
  unsigned int v35; // r8d
  __int64 v36; // rsi
  unsigned __int64 v37; // r14
  int v38; // esi
  void *v39; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  int (__fastcall *v43)(char *, _QWORD, PVOID *, ULONG *, _QWORD); // rdi
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  void *v46; // rsi
  NTSTATUS DeviceProperty; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  ULONG v50; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  bool v59; // zf
  int v60; // eax
  _QWORD *v61; // rax
  unsigned int v62; // edx
  __int64 v63; // r10
  char v64; // r14
  PULONG ResultLength; // [rsp+20h] [rbp-2B8h]
  ULONG BufferLength[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v67; // [rsp+40h] [rbp-298h]
  unsigned __int64 v68; // [rsp+48h] [rbp-290h] BYREF
  unsigned int v69; // [rsp+50h] [rbp-288h]
  struct _UNICODE_STRING *v70; // [rsp+58h] [rbp-280h]
  void *v71; // [rsp+60h] [rbp-278h]
  PVOID v72; // [rsp+68h] [rbp-270h] BYREF
  unsigned int v73; // [rsp+70h] [rbp-268h] BYREF
  int v74; // [rsp+78h] [rbp-260h]
  int v75; // [rsp+7Ch] [rbp-25Ch]
  PVOID Object[2]; // [rsp+80h] [rbp-258h] BYREF
  PVOID v77[2]; // [rsp+90h] [rbp-248h] BYREF
  volatile void *Address; // [rsp+A0h] [rbp-238h] BYREF
  unsigned int v79; // [rsp+A8h] [rbp-230h]
  __int64 v80; // [rsp+B0h] [rbp-228h] BYREF
  _BYTE v81[8]; // [rsp+B8h] [rbp-220h] BYREF
  unsigned int v82; // [rsp+C0h] [rbp-218h]
  PVOID P; // [rsp+C8h] [rbp-210h]
  PVOID BackTrace[20]; // [rsp+D0h] [rbp-208h] BYREF
  __int128 v85; // [rsp+170h] [rbp-168h] BYREF
  int v86; // [rsp+180h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+190h] [rbp-148h] BYREF

  v71 = a4;
  v6 = a3;
  v79 = a3;
  v70 = a1;
  Address = a4;
  DeviceFromName = 0LL;
  memset(BufferLength, 0, sizeof(BufferLength));
  v9 = 0;
  v74 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v72);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(Object);
  v67 = 0;
  v75 = 0;
  v69 = a5;
  ResultLength = (PULONG)a5;
  WdLogSingleEntry4(4LL, a1, v10, v11);
  v13 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  if ( a1 )
  {
    if ( a6 == 1 )
    {
      v77[0] = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)v77) >= 0 )
        DeviceFromName = DrvGetDeviceFromName((PCUNICODE_STRING)v77[0]);
      if ( v77[0] )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v77[0]);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( DeviceFromName )
    {
      v82 = 0;
      P = 0LL;
      EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
        (EnsureMonitorDevices *)v81,
        (struct tagGRAPHICS_DEVICE *)DeviceFromName);
      if ( v6 < v82 )
      {
        v85 = 0LL;
        v86 = 0;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v81, v6, (struct tagVIDEO_MONITOR_DEVICE *)&v85);
        v43 = *(int (__fastcall **)(char *, _QWORD, PVOID *, ULONG *, _QWORD))(DxDdGetDxgkWin32kInterface(v42, v41) + 456);
        if ( v72 )
          ObfDereferenceObject(v72);
        v72 = 0LL;
        if ( v43((char *)&v85 + 8, DWORD1(v85), &v72, &BufferLength[2], a5) >= 0 )
        {
          v75 = v85 & 0xFFFFFFF;
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
LABEL_71:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v72);
    return 3221225473LL;
  }
  DeviceFromName = *(_QWORD *)(v13 + 1264);
  if ( !DeviceFromName )
    goto LABEL_70;
  v14 = BufferLength[0];
  do
  {
    if ( a6
      && ((v15 = *(_DWORD *)(DeviceFromName + 160), (v15 & 0x2000000) != 0)
       || gProtocolType && *(_WORD *)(DeviceFromName + 216) != gProtocolType && (v15 & 0x4000008) == 0) )
    {
      LODWORD(v14) = v14 - 1;
      BufferLength[0] = v14;
    }
    else if ( (_DWORD)v14 == v6 )
    {
      break;
    }
    DeviceFromName = *(_QWORD *)(DeviceFromName + 128);
    v14 = (unsigned int)(v14 + 1);
    BufferLength[0] = v14;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_70:
    WdLogSingleEntry0(5LL);
    goto LABEL_71;
  }
  if ( *(_DWORD *)(v13 + 3080) )
  {
    v53 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
      || !*(_QWORD *)(v53 + 3096)
      || (PVOID)PsGetCurrentProcess((unsigned __int16)(gProtocolType - 1) <= 0xFFFDu, v53, 65533LL, v54) == gpepCSRSS
      || (v59 = !UserIsCurrentProcessDwm(v56, v55, v57, v58), v60 = 1, !v59) )
    {
      v60 = 0;
    }
    if ( v60 )
    {
      if ( (*(_BYTE *)(DeviceFromName + 160) & 8) == 0 )
        v9 = 1;
      v74 = v9;
    }
  }
  v16 = *(_QWORD *)(DeviceFromName + 144);
  if ( v16 && *(_QWORD *)(DeviceFromName + 224) )
    goto LABEL_13;
  if ( v9 )
  {
    v16 = *(_QWORD *)(v13 + 3096);
LABEL_13:
    *(_QWORD *)&BufferLength[2] = v16;
    goto LABEL_14;
  }
  v52 = *(struct _DEVICE_OBJECT **)(DeviceFromName + 136);
  if ( v52 )
  {
    v77[0] = 0LL;
    if ( (int)DrvForceChildDeviceReenumeration(v52, (struct _DEVICE_RELATIONS **)v77) >= 0 )
    {
      *(_QWORD *)&BufferLength[2] = *((_QWORD *)v77[0] + 1);
      ExFreePoolWithTag(v77[0], 0);
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
      Object[0] = *(PVOID *)&BufferLength[2];
    }
  }
  else
  {
    WdLogSingleEntry0(5LL);
  }
LABEL_14:
  v68 = 0LL;
  if ( a6 != 1 )
  {
    LODWORD(v18) = 840;
    if ( *(_DWORD *)v71 < 0x348u )
      LODWORD(v18) = *(_DWORD *)v71;
    BufferLength[1] = v18;
    Pool2 = (unsigned __int64)v71;
    v68 = (unsigned __int64)v71;
    memset(v71, 0, (unsigned int)v18);
    goto LABEL_25;
  }
  v17 = (unsigned int *)v71;
  if ( (unsigned __int64)v71 >= MmUserProbeAddress )
    v17 = (unsigned int *)MmUserProbeAddress;
  v18 = *v17;
  if ( (unsigned int)v18 > 0x348 )
    v18 = 840LL;
  BufferLength[1] = v18;
  if ( (_DWORD)v18 )
  {
    v73 = 1936876615;
    v80 = 260LL;
    v19 = gpLeakTrackingAllocator;
    v20 = (unsigned int)v18;
    Address = (volatile void *)(unsigned int)v18;
    v21 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, (unsigned int)v18, 1936876615LL);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL);
        LODWORD(v18) = BufferLength[1];
      }
      goto LABEL_23;
    }
    if ( v21 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
        && v18 + 16 > (unsigned __int64)(unsigned int)v18 )
      {
        v61 = (_QWORD *)ExAllocatePool2(v80 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v73);
        Pool2 = (unsigned __int64)v61;
        if ( !v61
          || (_InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL),
              LODWORD(v18) = BufferLength[1],
              *v61 = 1936876615LL,
              Pool2 = (unsigned __int64)(v61 + 2),
              v61 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v19 + 1),
            (const void *)0x73726447);
        }
        goto LABEL_23;
      }
      goto LABEL_156;
    }
    if ( v21 == 2 )
    {
      v68 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v68) )
      {
        v77[0] = &v80;
        v77[1] = &v73;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v19,
                  v77,
                  &Address);
LABEL_23:
        v9 = v74;
        v6 = v79;
        goto LABEL_24;
      }
      v64 = 0;
      if ( (unsigned int)v18 < 0x1000uLL || (v18 & 0xFFF) != 0 )
      {
        v64 = 1;
        v20 = (unsigned int)v18 + 16LL;
        Address = (volatile void *)v20;
      }
      Pool2 = ExAllocatePool2(v63, v20, v62);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        LODWORD(v18) = BufferLength[1];
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v64 && (Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v19,
                                  Pool2,
                                  v68,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_23;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v19,
                                     Pool2,
                                     v68,
                                     BackTrace) )
        {
          goto LABEL_23;
        }
        _InterlockedAdd64((volatile signed __int64 *)v19 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        LODWORD(v18) = BufferLength[1];
      }
    }
LABEL_156:
    Pool2 = 0LL;
    goto LABEL_23;
  }
  Pool2 = 0LL;
LABEL_24:
  v68 = Pool2;
  if ( !Pool2 )
  {
    v38 = -1073741823;
    goto LABEL_62;
  }
LABEL_25:
  if ( (unsigned int)v18 >= 4 )
    *(_DWORD *)Pool2 = 4;
  v23 = v70;
  if ( (unsigned int)v18 >= 0x44 )
  {
    *(_DWORD *)Pool2 = 68;
    v24 = (_OWORD *)(DeviceFromName + 64);
    v25 = (wchar_t *)(Pool2 + 4);
    if ( v23 )
    {
      LODWORD(ResultLength) = v6;
      swprintf_s(v25, 0x20uLL, L"%ws\\Monitor%d", v24, ResultLength);
    }
    else
    {
      *(_OWORD *)v25 = *v24;
      *(_OWORD *)(Pool2 + 20) = *(_OWORD *)(DeviceFromName + 80);
      *(_OWORD *)(Pool2 + 36) = *(_OWORD *)(DeviceFromName + 96);
      *(_OWORD *)(Pool2 + 52) = *(_OWORD *)(DeviceFromName + 112);
    }
    *(_WORD *)(Pool2 + 66) = 0;
  }
  if ( (unsigned int)v18 >= 0x144 )
  {
    *(_DWORD *)Pool2 = 324;
    *(_WORD *)(Pool2 + 68) = 0;
    if ( v23 || v9 )
    {
      if ( *(_QWORD *)&BufferLength[2] )
      {
        v45 = 256LL;
        for ( BufferLength[0] = 256; ; v45 = BufferLength[0] )
        {
          if ( (_DWORD)v45 )
          {
            v46 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                            gpLeakTrackingAllocator,
                            260LL,
                            v45,
                            0x64646547u);
            LODWORD(v45) = BufferLength[0];
          }
          else
          {
            v46 = 0LL;
          }
          if ( !v46 )
          {
            v67 = -1073741670;
            goto LABEL_36;
          }
          DeviceProperty = IoGetDeviceProperty(
                             *(PDEVICE_OBJECT *)&BufferLength[2],
                             DevicePropertyDeviceDescription,
                             v45,
                             v46,
                             BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v46);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)(Pool2 + 68), 0x80uLL, (const wchar_t *)v46, 0x7FuLL);
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v46);
      }
    }
    else
    {
      v26 = *(const wchar_t **)(DeviceFromName + 208);
      if ( v26 )
        wcsncpy_s((wchar_t *)(Pool2 + 68), 0x80uLL, v26, 0x7FuLL);
    }
LABEL_36:
    *(_WORD *)(Pool2 + 322) = 0;
  }
  v27 = 256;
  if ( (unsigned int)v18 < 0x148 )
  {
    v31 = v70;
    v32 = v69;
  }
  else
  {
    *(_DWORD *)Pool2 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v29 = *(_DWORD *)(DeviceFromName + 160);
    if ( PruneFlag )
      v30 = v29 & 0xFFF7FFFF;
    else
      v30 = v29 | 0x80000;
    *(_DWORD *)(DeviceFromName + 160) = v30;
    v31 = v70;
    v32 = v69;
    if ( v70 )
      *(_DWORD *)(Pool2 + 324) = v75;
    else
      *(_DWORD *)(Pool2 + 324) = v30 & ((v69 & 2) != 0 ? 0xFFFFFFF : 254803967);
    v27 = 256;
  }
  if ( (unsigned int)v18 < 0x248 )
  {
    v36 = -1LL;
    goto LABEL_57;
  }
  *(_DWORD *)Pool2 = 584;
  *(_WORD *)(Pool2 + 328) = 0;
  if ( (v32 & 1) != 0 )
  {
    if ( *(_QWORD *)&BufferLength[2] )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(*(PDEVICE_OBJECT *)&BufferLength[2]);
      v38 = DeviceInterfaceName;
      v67 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        WdLogSingleEntry1(5LL, DeviceInterfaceName);
        goto LABEL_62;
      }
    }
LABEL_115:
    v36 = -1LL;
    goto LABEL_56;
  }
  if ( !*(_QWORD *)&BufferLength[2] )
    goto LABEL_115;
  for ( BufferLength[0] = 256; ; v27 = BufferLength[0] )
  {
    if ( v27 )
    {
      v33 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                      gpLeakTrackingAllocator,
                      260LL,
                      v27,
                      0x64646547u);
      v27 = BufferLength[0];
    }
    else
    {
      v33 = 0LL;
    }
    if ( !v33 )
    {
      v67 = -1073741670;
      goto LABEL_171;
    }
    v34 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)&BufferLength[2], DevicePropertyHardwareID, v27, v33, BufferLength);
    if ( v34 != -1073741789 )
      break;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
  }
  if ( v34 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
LABEL_171:
    v36 = -1LL;
    goto LABEL_55;
  }
  v35 = 0;
  if ( v31 )
  {
    v36 = -1LL;
    v48 = -1LL;
    do
      ++v48;
    while ( *((_WORD *)v33 + v48) );
    if ( BufferLength[0] > 2 * (unsigned __int64)(unsigned int)(v48 + 2) )
      v35 = v48 + 1;
  }
  else
  {
    v36 = -1LL;
  }
  wcsncpy_s((wchar_t *)(Pool2 + 328), 0x80uLL, (const wchar_t *)v33 + v35, 0x7FuLL);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
LABEL_55:
  if ( v70 )
  {
    *(_WORD *)(Pool2 + 582) = 0;
    v49 = -1LL;
    do
      ++v49;
    while ( *(_WORD *)(Pool2 + 2 * v49 + 328) );
    v50 = v49 + 1;
    BufferLength[0] = v50;
    if ( v50 < 0x7E )
    {
      *(_WORD *)(Pool2 + 2LL * (v50 - 1) + 328) = 92;
      IoGetDeviceProperty(
        *(PDEVICE_OBJECT *)&BufferLength[2],
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength[0]),
        (PVOID)(Pool2 + 2 * (BufferLength[0] + 164LL)),
        BufferLength);
    }
  }
LABEL_56:
  *(_WORD *)(Pool2 + 582) = 0;
LABEL_57:
  if ( (unsigned int)v18 >= 0x348 )
  {
    *(_DWORD *)Pool2 = 840;
    v37 = Pool2 + 584;
    *(_WORD *)(Pool2 + 584) = 0;
    if ( v70 )
    {
      if ( IoGetDeviceProperty(
             *(PDEVICE_OBJECT *)&BufferLength[2],
             DevicePropertyDriverKeyName,
             0xFEu,
             PropertyBuffer,
             BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)(Pool2 + 584), 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v44 = -1LL;
        do
          ++v44;
        while ( *(_WORD *)(v37 + 2 * v44) );
        BufferLength[0] = v44;
        wcsncpy_s(
          (wchar_t *)(Pool2 + 2 * ((unsigned int)v44 + 292LL)),
          128LL - (unsigned int)v44,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v44));
        do
          ++v36;
        while ( *(_WORD *)(v37 + 2 * v36) );
        BufferLength[0] = v36;
        wcsncpy_s(
          (wchar_t *)(Pool2 + 2 * ((unsigned int)v36 + 292LL)),
          128LL - (unsigned int)v36,
          PropertyBuffer,
          (unsigned int)(127 - v36));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, Pool2 + 584, 128);
    }
    *(_WORD *)(Pool2 + 838) = 0;
  }
  v38 = v67;
LABEL_62:
  v39 = v71;
  if ( (void *)Pool2 != v71 )
  {
    if ( Pool2 )
    {
      ProbeForWrite(v71, (unsigned int)v18, 4u);
      memmove(v39, (const void *)Pool2, (unsigned int)v18);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    }
  }
  WdLogSingleEntry1(5LL, v38);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v72);
  return (unsigned int)v38;
}
