/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C006C130
 * Callers:
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C003AB18 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0169140 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C002C178 (DrvGetDisplayDriverParameters.c)
 *     DrvGetDeviceFromName @ 0x1C003C370 (DrvGetDeviceFromName.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     PALLOCMEM @ 0x1C009218C (PALLOCMEM.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AF590 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00AFB64 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     Feature_Vail__private_ReportDeviceUsage @ 0x1C00DE93C (Feature_Vail__private_ReportDeviceUsage.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C018E234 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 DrvEnumDisplaySettings(struct _UNICODE_STRING *a1, __int64 a2, unsigned int a3, struct _devicemodeW *a4, ...)
{
  unsigned int v5; // r12d
  __int64 DeviceFromName; // rsi
  PCUNICODE_STRING v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int PreferredMode; // r14d
  NSInstrumentation::CLeakTrackingAllocator *v15; // r14
  int v16; // eax
  __int64 Pool2; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r10
  int DevModeForLddmPath; // eax
  unsigned __int16 v21; // ax
  WCHAR *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int16 v28; // ax
  __int64 v29; // rcx
  char v30; // cl
  __int64 v31; // rcx
  __int64 *i; // rax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  struct _devicemodeW *v35; // rax
  struct _devicemodeW *v36; // rbx
  _DWORD *v37; // r8
  __int64 v38; // r13
  unsigned int v39; // r10d
  unsigned int v40; // r9d
  int v41; // r11d
  int v42; // ecx
  __int64 v43; // rdx
  unsigned __int16 v44; // ax
  unsigned int v45; // ebx
  size_t v46; // r14
  void *v47; // rcx
  void *v48; // rcx
  WORD dmDriverExtra; // [rsp+30h] [rbp-138h]
  unsigned int dmDisplayOrientation; // [rsp+38h] [rbp-130h] BYREF
  int v51; // [rsp+40h] [rbp-128h]
  _BYTE v52[4]; // [rsp+44h] [rbp-124h] BYREF
  PCUNICODE_STRING String1; // [rsp+48h] [rbp-120h] BYREF
  __int64 v54; // [rsp+50h] [rbp-118h]
  __int64 v55; // [rsp+58h] [rbp-110h] BYREF
  unsigned __int64 v56; // [rsp+60h] [rbp-108h] BYREF
  _DWORD *v57; // [rsp+68h] [rbp-100h]
  __int64 v58; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-F0h]
  WORD *p_dmDriverExtra; // [rsp+80h] [rbp-E8h]
  _QWORD v61[2]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v63; // [rsp+180h] [rbp+18h] BYREF
  struct _devicemodeW *v64; // [rsp+188h] [rbp+20h]
  __int64 v65; // [rsp+190h] [rbp+28h] BYREF
  va_list va; // [rsp+190h] [rbp+28h]
  va_list va1; // [rsp+198h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v65 = va_arg(va1, _QWORD);
  v64 = a4;
  v63 = a3;
  v5 = a3;
  v51 = -1073741585;
  DeviceFromName = 0LL;
  v54 = 0LL;
  v59 = a3;
  WdLogSingleEntry4(4LL, a1, a2, a3);
  if ( ((unsigned __int8)a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  p_dmDriverExtra = &a4->dmDriverExtra;
  dmDriverExtra = a4->dmDriverExtra;
  ProbeForWrite(a4, dmDriverExtra + 220LL, 2u);
  if ( a4->dmSize != 220 )
  {
    WdLogSingleEntry0(5LL);
    return 3221225507LL;
  }
  if ( a1 )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
    {
      DeviceFromName = DrvGetDeviceFromName(String1);
      v54 = DeviceFromName;
    }
    if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) )
    {
      v10 = DeviceFromName & -(__int64)((*(_DWORD *)(DeviceFromName + 160) & 0x6000008) != 0);
      DeviceFromName = v10;
      v54 = v10;
    }
    v9 = String1;
    if ( String1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)String1);
  }
  else if ( a2 )
  {
    DeviceFromName = *(_QWORD *)(a2 + 2552);
    v54 = DeviceFromName;
  }
  if ( !DeviceFromName )
  {
    PreferredMode = v51;
    goto LABEL_119;
  }
  if ( v5 != -3 )
  {
    if ( v5 == -2 )
    {
      dmDisplayOrientation = 1986356295;
      v55 = 260LL;
      v15 = gpLeakTrackingAllocator;
      v58 = 65755LL;
      v16 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, 65755LL, 1986356295LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
        goto LABEL_35;
      }
      if ( v16 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u) )
        {
          v18 = (_QWORD *)ExAllocatePool2(v55 & 0xFFFFFFFFFFFFFFFDuLL, 65771LL, dmDisplayOrientation);
          Pool2 = (__int64)v18;
          if ( !v18
            || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
                *v18 = 1986356295LL,
                Pool2 = (__int64)(v18 + 2),
                v18 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v15 + 1),
              (const void *)0x76656447);
          }
          goto LABEL_35;
        }
      }
      else if ( v16 == 2 )
      {
        v56 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, &v56) )
        {
          v61[0] = &v55;
          v61[1] = &dmDisplayOrientation;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    v15,
                    v61,
                    &v58);
          goto LABEL_35;
        }
        Pool2 = ExAllocatePool2(v19, 65771LL, 1986356295LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v15,
                                    Pool2,
                                    v56,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_35:
              String1 = (PCUNICODE_STRING)Pool2;
              if ( Pool2 )
              {
                if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
                {
                  DevModeForLddmPath = DrvGetDevModeForLddmPath(
                                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                                         0xFFFFFFFE,
                                         (struct _devicemodeW *)Pool2,
                                         0LL);
                }
                else
                {
                  *(_DWORD *)(Pool2 + 68) = -8739;
                  DevModeForLddmPath = DrvGetDisplayDriverParameters(
                                         DeviceFromName,
                                         (struct _devicemodeW *)Pool2,
                                         0,
                                         0LL);
                }
                PreferredMode = DevModeForLddmPath;
                if ( DevModeForLddmPath >= 0 )
                {
                  v21 = *(_WORD *)(Pool2 + 70);
                  if ( dmDriverExtra < v21 )
                    v21 = dmDriverExtra;
                  dmDriverExtra = v21;
                  memmove(&a4[1], (const void *)(Pool2 + 220), v21);
                  *(_OWORD *)a4->dmDeviceName = *(_OWORD *)Pool2;
                  *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(Pool2 + 16);
                  *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(Pool2 + 32);
                  *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(Pool2 + 48);
                  *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(Pool2 + 64);
                  *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(Pool2 + 80);
                  *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(Pool2 + 96);
                  v22 = &a4->dmFormName[13];
                  *((_OWORD *)v22 - 1) = *(_OWORD *)(Pool2 + 112);
                  *(_OWORD *)v22 = *(_OWORD *)(Pool2 + 128);
                  *((_OWORD *)v22 + 1) = *(_OWORD *)(Pool2 + 144);
                  *((_OWORD *)v22 + 2) = *(_OWORD *)(Pool2 + 160);
                  *((_OWORD *)v22 + 3) = *(_OWORD *)(Pool2 + 176);
                  *((_OWORD *)v22 + 4) = *(_OWORD *)(Pool2 + 192);
                  *((_QWORD *)v22 + 10) = *(_QWORD *)(Pool2 + 208);
                  *((_DWORD *)v22 + 22) = *(_DWORD *)(Pool2 + 216);
                }
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
              }
              else
              {
                PreferredMode = -1073741801;
              }
              goto LABEL_119;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v15,
                                       Pool2,
                                       v56,
                                       BackTrace) )
          {
            goto LABEL_35;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
      goto LABEL_35;
    }
    if ( v5 == -1 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v52);
      v23 = hdevEnumerate<1>(0LL);
      PreferredMode = v51;
      while ( 1 )
      {
        v55 = v23;
        v24 = v23;
        if ( !v23 )
          break;
        v25 = *(_QWORD *)(v23 + 2552);
        if ( v25 == DeviceFromName && *(_DWORD *)(v23 + 12) )
        {
          LOBYTE(v65) = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v23 + 2568) + 184LL) == 1 && (*(_DWORD *)(v25 + 160) & 0x800000) != 0 )
          {
            v26 = DrvGetDevModeForLddmPath((struct tagGRAPHICS_DEVICE *)DeviceFromName, 0xFFFFFFFF, 0LL, (bool *)va);
            if ( v26 < 0 )
              WdLogSingleEntry1(5LL, v26);
          }
          if ( (*(_DWORD *)(DeviceFromName + 160) & 0x4000000) != 0 && (*(_DWORD *)(DeviceFromName + 164) & 4) != 0 )
          {
            Feature_Vail__private_ReportDeviceUsage(v25);
            LOBYTE(v65) = 1;
          }
          v27 = *(_QWORD *)(v24 + 2568);
          v28 = *(_WORD *)(v27 + 70);
          if ( dmDriverExtra < v28 )
            v28 = dmDriverExtra;
          dmDriverExtra = v28;
          memmove(&a4[1], (const void *)(v27 + 220), v28);
          v29 = *(_QWORD *)(v24 + 2568);
          *(_OWORD *)a4->dmDeviceName = *(_OWORD *)v29;
          *(_OWORD *)&a4->dmDeviceName[8] = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&a4->dmDeviceName[16] = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&a4->dmDeviceName[24] = *(_OWORD *)(v29 + 48);
          *(_OWORD *)&a4->dmSpecVersion = *(_OWORD *)(v29 + 64);
          *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a4->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)(v29 + 80);
          *(_OWORD *)&a4->dmYResolution = *(_OWORD *)(v29 + 96);
          *(_OWORD *)&a4->dmFormName[5] = *(_OWORD *)(v29 + 112);
          v29 += 128LL;
          *(_OWORD *)&a4->dmFormName[13] = *(_OWORD *)v29;
          *(_OWORD *)&a4->dmFormName[21] = *(_OWORD *)(v29 + 16);
          *(_OWORD *)&a4->dmFormName[29] = *(_OWORD *)(v29 + 32);
          *(_OWORD *)&a4->dmPelsHeight = *(_OWORD *)(v29 + 48);
          *(_OWORD *)&a4->dmICMIntent = *(_OWORD *)(v29 + 64);
          *(_QWORD *)&a4->dmReserved2 = *(_QWORD *)(v29 + 80);
          a4->dmPanningHeight = *(_DWORD *)(v29 + 88);
          if ( (_BYTE)v65 )
            a4->dmDisplayFrequency = 64;
          a4->dmFields &= 0xF9FFFFFF;
          PreferredMode = 0;
          v51 = 0;
        }
        v23 = hdevEnumerate<1>(v24);
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v52);
      goto LABEL_119;
    }
    if ( !IS_USERCRIT_OWNED_EXCLUSIVE(v10, (__int64)v9, v11, v12) )
      WdLogSingleEntry0(1LL);
    DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)DeviceFromName, v5 == 0, 1);
    dmDisplayOrientation = 0;
    v30 = v65;
    LODWORD(String1) = v65 & 4;
    if ( (v65 & 4) == 0 )
    {
      if ( gProtocolType )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v63);
        for ( i = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(v31) + 24) + 6080LL); i; i = (__int64 *)*i )
        {
          if ( i[319] == DeviceFromName && *((_DWORD *)i + 3) )
          {
            v33 = i[321];
            if ( (*(_DWORD *)(v33 + 72) & 0x80u) != 0 )
            {
              v34 = *(_DWORD *)(v33 + 84);
              goto LABEL_78;
            }
            break;
          }
        }
        v34 = dmDisplayOrientation;
LABEL_78:
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v63);
        v30 = v65;
        goto LABEL_86;
      }
      v35 = (struct _devicemodeW *)PALLOCMEM(65755LL, 1986356295LL);
      v36 = v35;
      if ( v35 )
      {
        memset(v35, 0, sizeof(struct _devicemodeW));
        v36->dmSize = -8739;
        if ( (int)DrvGetDisplayDriverParameters(DeviceFromName, v36, 0, 0LL) >= 0 && (v36->dmFields & 0x80u) != 0 )
          dmDisplayOrientation = v36->dmDisplayOrientation;
        Win32FreePool(v36);
      }
      v30 = v65;
      v5 = v63;
    }
    v34 = dmDisplayOrientation;
LABEL_86:
    v37 = (_DWORD *)(DeviceFromName + 184);
    v57 = (_DWORD *)(DeviceFromName + 184);
    if ( *(_DWORD *)(DeviceFromName + 184) && *(_QWORD *)(DeviceFromName + 176) )
    {
      v38 = 0LL;
      PreferredMode = -1073741584;
      v51 = -1073741584;
      v39 = *(_DWORD *)(DeviceFromName + 188);
      if ( v5 < v39 )
      {
        if ( (v30 & 6) == 6 )
        {
          _mm_lfence();
          v38 = *(_QWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16 * v59 + 8);
          PreferredMode = v51;
        }
        else
        {
          v40 = 0;
          v41 = 0;
          if ( v39 )
          {
            v42 = v30 & 2;
            LODWORD(v65) = v42;
            do
            {
              if ( v42 || !*(_DWORD *)(*(_QWORD *)(DeviceFromName + 192) + 16LL * v40) )
              {
                v43 = 16LL * v40;
                if ( (_DWORD)String1
                  || *(_DWORD *)(*(_QWORD *)(v43 + *(_QWORD *)(DeviceFromName + 192) + 8) + 84LL) == v34 )
                {
                  if ( v41 == v5 )
                  {
                    v38 = *(_QWORD *)(v43 + *(_QWORD *)(DeviceFromName + 192) + 8);
                    break;
                  }
                  ++v41;
                }
              }
              ++v40;
              v42 = v65;
            }
            while ( v40 < v39 );
          }
        }
      }
      if ( v38 )
      {
        v44 = *(_WORD *)(v38 + 70);
        if ( dmDriverExtra < v44 )
          v44 = dmDriverExtra;
        v45 = v44;
        dmDriverExtra = v44;
        v46 = 220LL;
        memset(a4, 0, sizeof(struct _devicemodeW));
        memmove(&a4[1], (const void *)(v38 + *(unsigned __int16 *)(v38 + 68)), v45);
        if ( *(_WORD *)(v38 + 68) <= 0xDCu )
          v46 = *(unsigned __int16 *)(v38 + 68);
        memmove(a4, (const void *)v38, v46);
        if ( (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 && *(_DWORD *)(v38 + 184) == 1 )
          a4->dmDisplayFrequency = 64;
        PreferredMode = 0;
        v51 = 0;
        v37 = v57;
      }
    }
    else
    {
      WdLogSingleEntry0(5LL);
      PreferredMode = -1073741823;
      v37 = v57;
    }
    if ( PreferredMode == -1073741584 )
    {
      *v37 = 0;
      v47 = *(void **)(DeviceFromName + 176);
      if ( v47 )
      {
        Win32FreePool(v47);
        *(_QWORD *)(DeviceFromName + 176) = 0LL;
      }
      v48 = *(void **)(DeviceFromName + 192);
      if ( v48 )
      {
        Win32FreePool(v48);
        *(_QWORD *)(DeviceFromName + 192) = 0LL;
      }
      *(_DWORD *)(DeviceFromName + 188) = 0;
    }
    goto LABEL_119;
  }
  PreferredMode = DrvGetPreferredMode(a4, (struct tagGRAPHICS_DEVICE *)DeviceFromName);
LABEL_119:
  if ( !PreferredMode )
    *p_dmDriverExtra = dmDriverExtra;
  WdLogSingleEntry1(5LL, PreferredMode);
  return (unsigned int)PreferredMode;
}
