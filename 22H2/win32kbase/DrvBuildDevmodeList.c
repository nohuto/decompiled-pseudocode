/*
 * XREFs of DrvBuildDevmodeList @ 0x1C00182C0
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0017868 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0020E50 (DrvEnumDisplaySettings.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x1C00156C0 (DrvGetDisplayDriverNames.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00166C4 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0091528 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00B7694 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C00C72FC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0114434 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

int __fastcall DrvBuildDevmodeList(struct tagGRAPHICS_DEVICE *a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v9; // rdi
  unsigned int v10; // esi
  unsigned int DriverModes; // eax
  void *v12; // r15
  size_t v13; // r12
  char *v14; // rax
  char *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edi
  unsigned int i; // r9d
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // esi
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r11
  int v29; // r14d
  __int64 v30; // r8
  unsigned int v31; // r10d
  __int64 v32; // r9
  __int64 v34; // [rsp+70h] [rbp+40h] BYREF
  void *Src; // [rsp+88h] [rbp+58h] BYREF

  LODWORD(v3) = *((_DWORD *)a1 + 40);
  Src = 0LL;
  if ( (v3 & 0x4000000) != 0 && !gRemoteSessionUseWddm )
    goto LABEL_13;
  if ( (v3 & 0x800000) != 0 && *((_DWORD *)a1 + 46) && *((_QWORD *)a1 + 22) )
  {
    if ( a3 && !a2 )
      goto LABEL_17;
    v5 = *((unsigned int *)a1 + 64);
    v34 = 0LL;
    LODWORD(v3) = ((__int64 (__fastcall *)(char *, __int64, __int64 *))qword_1C02509E8)((char *)a1 + 248, v5, &v34);
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = v34;
      if ( *((_QWORD *)a1 + 21) == v34 )
        goto LABEL_17;
      *((_QWORD *)a1 + 21) = v34;
      goto LABEL_13;
    }
    a2 = 1;
  }
  if ( !a2 )
    goto LABEL_17;
LABEL_13:
  if ( *((_DWORD *)a1 + 46) )
  {
    v6 = *((_QWORD *)a1 + 22);
    if ( v6 )
    {
      LODWORD(v3) = Win32FreePool(v6);
      v7 = *((_QWORD *)a1 + 24);
      *((_QWORD *)a1 + 22) = 0LL;
      *((_DWORD *)a1 + 46) = 0;
      if ( v7 )
      {
        LODWORD(v3) = Win32FreePool(v7);
        *((_QWORD *)a1 + 24) = 0LL;
      }
    }
LABEL_17:
    if ( *((_DWORD *)a1 + 46) )
      return v3;
  }
  if ( *((_QWORD *)a1 + 22) )
    return v3;
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
        v12 = Src;
        v13 = DriverModes;
        if ( DriverModes )
        {
          v14 = (char *)PALLOCMEM2(DriverModes + *((_DWORD *)a1 + 46));
          v15 = v14;
          if ( v14 )
          {
            v16 = *((unsigned int *)a1 + 46);
            if ( (_DWORD)v16 )
            {
              memmove(v14, *((const void **)a1 + 22), (unsigned int)v16);
              Win32FreePool(*((_QWORD *)a1 + 22));
              v16 = *((unsigned int *)a1 + 46);
            }
            memmove(&v15[v16], v12, v13);
            *((_DWORD *)a1 + 46) += v13;
            *((_QWORD *)a1 + 22) = v15;
          }
        }
        if ( v12 )
          Win32FreePool(v12);
        ++v10;
      }
      while ( v10 < *v9 );
    }
    Win32FreePool(v9);
  }
  v17 = *((_DWORD *)a1 + 46);
  if ( !v17 && !*((_QWORD *)a1 + 22) )
    goto LABEL_68;
  v18 = 0;
  for ( i = 0;
        i < v17;
        i += *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 70LL)
           + *(unsigned __int16 *)(i + *((_QWORD *)a1 + 22) + 68LL) )
  {
    ++v18;
  }
  v3 = PALLOCMEM2(16 * v18);
  *((_QWORD *)a1 + 24) = v3;
  if ( !v3 )
  {
    v20 = *((_QWORD *)a1 + 22);
    *((_DWORD *)a1 + 46) = 0;
    Win32FreePool(v20);
    *((_QWORD *)a1 + 22) = 0LL;
    goto LABEL_68;
  }
  v21 = 0;
  *((_DWORD *)a1 + 47) = v18;
  v22 = 0;
  if ( !*((_DWORD *)a1 + 46) )
    goto LABEL_47;
  do
  {
    v23 = *((_QWORD *)a1 + 22) + v22;
    v24 = *(_DWORD *)(v23 + 72);
    if ( (v24 & 0x80u) != 0 )
    {
      v25 = *(_DWORD *)(v23 + 72);
      if ( *(_DWORD *)(v23 + 84) <= 3u )
        goto LABEL_41;
    }
    else
    {
      v24 |= 0x80u;
      *(_DWORD *)(v23 + 72) = v24;
      v25 = v24;
    }
    *(_DWORD *)(v23 + 84) = 0;
LABEL_41:
    if ( (v25 & 0x20000000) != 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v23 + 88) - 1) <= 1 )
        goto LABEL_45;
      *(_DWORD *)(v23 + 72) = v24 & 0xDFFFFFFF;
    }
    *(_DWORD *)(v23 + 88) = 0;
LABEL_45:
    v26 = v21++;
    v26 *= 2LL;
    *(_DWORD *)(*((_QWORD *)a1 + 24) + 8 * v26) = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 24) + 8 * v26 + 8) = v23;
    LODWORD(v3) = *(unsigned __int16 *)(v23 + 68);
    v22 += *(unsigned __int16 *)(v23 + 70) + (_DWORD)v3;
  }
  while ( v22 < *((_DWORD *)a1 + 46) );
  v18 = *((_DWORD *)a1 + 47);
LABEL_47:
  v27 = 1LL;
  if ( v18 )
  {
    do
    {
      v28 = *((_QWORD *)a1 + 24);
      v29 = v27 - 1;
      LODWORD(v3) = v18;
      v30 = *(_QWORD *)(v28 + 16LL * (unsigned int)(v27 - 1) + 8);
      if ( *(_DWORD *)(v30 + 184) == 1 )
      {
        v31 = 1;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( v31 != (_DWORD)v27 )
            {
              v32 = *(_QWORD *)(v28 + 16LL * (v31 - 1) + 8);
              if ( *(_DWORD *)(v30 + 168) == *(_DWORD *)(v32 + 168)
                && *(_DWORD *)(v30 + 172) == *(_DWORD *)(v32 + 172)
                && *(_DWORD *)(v30 + 176) == *(_DWORD *)(v32 + 176)
                && ((*(_BYTE *)(v30 + 180) ^ *(_BYTE *)(v32 + 180)) & 4) == 0
                && *(_DWORD *)(v30 + 84) == *(_DWORD *)(v32 + 84)
                && *(_DWORD *)(v30 + 88) == *(_DWORD *)(v32 + 88) )
              {
                break;
              }
            }
            LODWORD(v3) = *((_DWORD *)a1 + 47);
            ++v31;
            v18 = v3;
            if ( v31 > (unsigned int)v3 )
              goto LABEL_62;
          }
          if ( v18 > (unsigned int)v27 )
          {
            memmove(
              (void *)(v28 + 16LL * (unsigned int)(v27 - 1)),
              (const void *)(v28 + 16 * v27),
              16LL * (v18 - (unsigned int)v27));
            v18 = *((_DWORD *)a1 + 47);
          }
          LODWORD(v3) = v18 - 1;
          LODWORD(v27) = v29;
          *((_DWORD *)a1 + 47) = v18 - 1;
        }
      }
LABEL_62:
      v27 = (unsigned int)(v27 + 1);
      v18 = v3;
    }
    while ( (unsigned int)v27 <= (unsigned int)v3 );
  }
  if ( (Feature_RemoveGdiModePruning__private_featureState & 0x10) == 0 )
  {
    v34 = Feature_RemoveGdiModePruning__private_featureState | 1u;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_RemoveGdiModePruning__private_descriptor, v34, 3LL);
    LODWORD(v3) = wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                    v34,
                    3LL,
                    &Feature_RemoveGdiModePruning__private_descriptor);
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000008) == 0 )
  {
    LODWORD(v3) = PruneModesByDisplayDeviceCaps(a1, *((_DWORD *)a1 + 47), *((struct tagDEVMODEMARK **)a1 + 24));
    v22 = v3;
  }
  if ( !v22 )
LABEL_68:
    LODWORD(v3) = DrvLogDisplayDriverEvent(2LL);
  return v3;
}
