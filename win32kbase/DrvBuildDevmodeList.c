/*
 * XREFs of DrvBuildDevmodeList @ 0x1C0028AF8
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C006C130 (DrvEnumDisplaySettings.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C000EFA0 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0024700 (DrvGetDisplayDriverNames.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0028890 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00DC94C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0155054 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PruneModesByDisplayDeviceCaps @ 0x1C0190E0C (PruneModesByDisplayDeviceCaps.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 DxgkWin32kInterface; // rax
  void *v6; // rdx
  void *v7; // rdx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // esi
  unsigned int DriverModes; // eax
  size_t v12; // r14
  unsigned int v13; // eax
  char *v14; // r15
  unsigned int v15; // eax
  void *v16; // rdx
  unsigned int v17; // edx
  int v18; // r15d
  unsigned int i; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v20; // rsi
  unsigned __int64 v21; // rdi
  int v22; // eax
  __int64 Pool2; // rdi
  _QWORD *v24; // rax
  __int64 v25; // r10
  char v26; // r14
  void *v27; // rdx
  unsigned int v28; // r8d
  unsigned int j; // edi
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // r9d
  __int64 v35; // rsi
  unsigned int v36; // r14d
  unsigned int v37; // eax
  __int64 v38; // r8
  int v39; // r11d
  __int64 v40; // r10
  unsigned __int64 v41[2]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v42; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-81h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  void *Src; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v46; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v47; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = *((_DWORD *)a1 + 40);
  Src = 0LL;
  if ( (v3 & 0x4000000) == 0 || gRemoteSessionUseWddm )
  {
    if ( (v3 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
    {
      if ( a3 && !(_DWORD)a2 )
        goto LABEL_16;
      v47 = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
      if ( (*(int (__fastcall **)(char *, _QWORD, __int64 *))(DxgkWin32kInterface + 344))(
             (char *)a1 + 240,
             *((unsigned int *)a1 + 62),
             &v47) >= 0 )
      {
        if ( *((_QWORD *)a1 + 21) == v47 )
          goto LABEL_16;
        *((_QWORD *)a1 + 21) = v47;
      }
    }
    else if ( !(_DWORD)a2 )
    {
      goto LABEL_16;
    }
  }
  if ( *((_DWORD *)a1 + 46) )
  {
    v6 = (void *)*((_QWORD *)a1 + 22);
    if ( v6 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
      v7 = (void *)*((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v7 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
        *((_QWORD *)a1 + 24) = 0LL;
      }
    }
LABEL_16:
    if ( *((_DWORD *)a1 + 46) )
      return;
  }
  if ( *((_QWORD *)a1 + 22) )
    return;
  *((_DWORD *)a1 + 47) = 0;
  DisplayDriverNames = DrvGetDisplayDriverNames((__int64)a1);
  v9 = DisplayDriverNames;
  if ( DisplayDriverNames )
  {
    v10 = 0;
    if ( *DisplayDriverNames )
    {
      do
      {
        DriverModes = ldevGetDriverModes(
                        a1,
                        *(const unsigned __int16 **)&v9[4 * v10 + 4],
                        *(void **)&v9[4 * v10 + 2],
                        (struct _devicemodeW **)&Src);
        v12 = DriverModes;
        if ( DriverModes )
        {
          v13 = DriverModes + *((_DWORD *)a1 + 46);
          if ( v13 )
          {
            v14 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                            gpLeakTrackingAllocator,
                            0x104uLL,
                            v13,
                            0x73726447u);
            v15 = *((_DWORD *)a1 + 46);
            if ( v14 )
            {
              if ( v15 )
              {
                memmove(v14, *((const void **)a1 + 22), v15);
                v16 = (void *)*((_QWORD *)a1 + 22);
                if ( v16 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
              }
              memmove(&v14[*((unsigned int *)a1 + 46)], Src, v12);
              *((_DWORD *)a1 + 46) += v12;
              *((_QWORD *)a1 + 22) = v14;
            }
          }
        }
        if ( Src )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Src);
        ++v10;
      }
      while ( v10 < *v9 );
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
  }
  v17 = *((_DWORD *)a1 + 46);
  if ( !v17 && !*((_QWORD *)a1 + 22) )
    goto LABEL_91;
  v18 = 0;
  for ( i = 0;
        i < v17;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v18;
  }
  if ( !(16 * v18) )
    goto LABEL_58;
  v20 = gpLeakTrackingAllocator;
  v21 = (unsigned int)(16 * v18);
  v46 = 1936876615;
  v42 = 260LL;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  v43 = v21;
  if ( !v22 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v21, 1936876615LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v20 + 14);
    goto LABEL_59;
  }
  if ( v22 != 1 )
  {
    if ( v22 == 2 )
    {
      v41[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, v41) )
      {
        v41[0] = (unsigned __int64)&v42;
        v41[1] = (unsigned __int64)&v46;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v20,
                  v41,
                  &v43);
        goto LABEL_59;
      }
      v26 = 0;
      if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
      {
        v21 += 16LL;
        v26 = 1;
        v43 = v21;
      }
      Pool2 = ExAllocatePool2(v25, v21, 1936876615LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v26 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v20,
                                  Pool2,
                                  v41[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_59;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v20,
                                     Pool2,
                                     v41[0],
                                     BackTrace) )
        {
          goto LABEL_59;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v20 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_58;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
    || v21 + 16 < v21 )
  {
LABEL_58:
    Pool2 = 0LL;
    goto LABEL_59;
  }
  v24 = (_QWORD *)ExAllocatePool2(v42 & 0xFFFFFFFFFFFFFFFDuLL, v21 + 16, v46);
  Pool2 = (__int64)v24;
  if ( !v24
    || (_InterlockedIncrement64((volatile signed __int64 *)v20 + 14),
        *v24 = 1936876615LL,
        Pool2 = (__int64)(v24 + 2),
        v24 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v20 + 1),
      (const void *)0x73726447);
  }
LABEL_59:
  *((_QWORD *)a1 + 24) = Pool2;
  if ( !Pool2 )
  {
    v27 = (void *)*((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    if ( v27 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v27);
    *((_QWORD *)a1 + 22) = 0LL;
LABEL_91:
    DrvLogDisplayDriverEvent(2);
    return;
  }
  v28 = 0;
  *((_DWORD *)a1 + 47) = v18;
  for ( j = 0; j < *((_DWORD *)a1 + 46); j += *(unsigned __int16 *)(v30 + 70) + *(unsigned __int16 *)(v30 + 68) )
  {
    v30 = *((_QWORD *)a1 + 22) + j;
    v31 = *(_DWORD *)(v30 + 72);
    if ( (v31 & 0x80u) != 0 )
    {
      if ( *(_DWORD *)(v30 + 84) <= 3u )
        goto LABEL_68;
    }
    else
    {
      v31 |= 0x80u;
      *(_DWORD *)(v30 + 72) = v31;
    }
    *(_DWORD *)(v30 + 84) = 0;
LABEL_68:
    if ( (v31 & 0x20000000) == 0 )
      goto LABEL_71;
    if ( (unsigned int)(*(_DWORD *)(v30 + 88) - 1) > 1 )
    {
      *(_DWORD *)(v30 + 72) = v31 & 0xDFFFFFFF;
LABEL_71:
      *(_DWORD *)(v30 + 88) = 0;
    }
    v32 = v28++;
    v32 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v32) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v32 + 8) = v30;
  }
  v33 = *((_DWORD *)a1 + 47);
  v34 = 1;
  if ( v33 )
  {
    do
    {
      v35 = *((_QWORD *)a1 + 24);
      v36 = v34 - 1;
      v37 = v33;
      v38 = *(_QWORD *)(v35 + 16LL * (v34 - 1) + 8);
      if ( *(_DWORD *)(v38 + 184) == 1 )
      {
        v39 = 1;
        if ( v33 )
        {
          while ( 1 )
          {
            if ( v39 != v34 )
            {
              v40 = *(_QWORD *)(v35 + 16LL * (unsigned int)(v39 - 1) + 8);
              if ( *(_DWORD *)(v38 + 168) == *(_DWORD *)(v40 + 168)
                && *(_DWORD *)(v38 + 172) == *(_DWORD *)(v40 + 172)
                && *(_DWORD *)(v38 + 176) == *(_DWORD *)(v40 + 176)
                && ((*(_BYTE *)(v38 + 180) ^ *(_BYTE *)(v40 + 180)) & 4) == 0
                && *(_DWORD *)(v38 + 84) == *(_DWORD *)(v40 + 84)
                && *(_DWORD *)(v38 + 88) == *(_DWORD *)(v40 + 88) )
              {
                break;
              }
            }
            if ( ++v39 > v33 )
            {
              v37 = v33;
              goto LABEL_85;
            }
          }
          if ( v33 > v34 )
            memmove((void *)(v35 + 16LL * (v34 - 1)), (const void *)(v35 + 16LL * v34), 16LL * (v33 - v34));
          --*((_DWORD *)a1 + 47);
          v34 = v36;
          v37 = *((_DWORD *)a1 + 47);
        }
      }
LABEL_85:
      ++v34;
      v33 = v37;
    }
    while ( v34 <= v37 );
  }
  Src = (void *)(unsigned int)Feature_RemoveGdiModePruning__private_featureState;
  if ( (Feature_RemoveGdiModePruning__private_featureState & 0x10) == 0 )
  {
    LODWORD(Src) = Feature_RemoveGdiModePruning__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_RemoveGdiModePruning__private_descriptor, Src, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      Src,
      3LL,
      &Feature_RemoveGdiModePruning__private_descriptor);
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
    j = PruneModesByDisplayDeviceCaps(a1);
  if ( !j )
    goto LABEL_91;
}
