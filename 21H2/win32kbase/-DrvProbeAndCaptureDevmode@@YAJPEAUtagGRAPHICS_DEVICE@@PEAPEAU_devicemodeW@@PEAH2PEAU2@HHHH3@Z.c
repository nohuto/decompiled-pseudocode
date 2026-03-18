/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C007AAA0 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C0078748 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C007A2E4 (DrvGetDisplayDriverParameters.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00C03C0 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        struct _devicemodeW *a10)
{
  unsigned int v12; // esi
  struct _devicemodeW *v13; // r13
  struct _devicemodeW *v15; // rbx
  struct _devicemodeW *v16; // rbp
  unsigned int dmSize; // ecx
  unsigned int dmDriverExtra; // eax
  unsigned int v19; // r13d
  struct _devicemodeW *v20; // rax
  const struct _devicemodeW *v21; // rdi
  DWORD dmFields; // ecx
  unsigned int v23; // r12d
  int v24; // eax
  int DisplayDriverParameters; // eax
  __int64 v26; // r9
  DWORD v27; // eax
  DWORD dmBitsPerPel; // ecx
  DWORD dmPelsWidth; // ecx
  DWORD dmPelsHeight; // ecx
  DWORD v31; // eax
  int v32; // edx
  DWORD dmDisplayFlags; // eax
  DWORD v34; // ecx
  char v35; // r8
  unsigned int dmDisplayOrientation; // eax
  DWORD v37; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  LONG y; // eax
  struct _devicemodeW *v40; // r15
  unsigned int v41; // r13d
  PVOID v42; // rbp
  unsigned __int64 v43; // rdx
  struct _devicemodeW *Pool2; // rdi
  char *v45; // rdx
  struct _devicemodeW *v46; // r13
  struct tagGRAPHICS_DEVICE *v47; // r10
  _DWORD *v48; // r12
  int v49; // eax
  struct tagGRAPHICS_DEVICE *v50; // rax
  unsigned int v51; // r11d
  int v52; // r9d
  int v53; // ebp
  int v54; // r10d
  int v55; // r14d
  unsigned int v56; // r15d
  __int64 v57; // rcx
  DWORD v58; // eax
  int v59; // r8d
  DWORD v60; // edx
  unsigned int v61; // edx
  WORD dmLogPixels; // ax
  int v63; // ecx
  int v65; // r8d
  struct _devicemodeW *ClosestMode; // rcx
  int v67; // eax
  unsigned __int16 v68; // cx
  DWORD dmDisplayFrequency; // eax
  __int64 v70; // rax
  char v71; // r14
  bool v72; // zf
  unsigned int v73; // r15d
  __int64 v74; // rax
  DWORD *v75; // r14
  _OWORD *v76; // rcx
  int v77; // ecx
  int v78; // [rsp+20h] [rbp-138h]
  DWORD dmPanningHeight; // [rsp+24h] [rbp-134h]
  const struct _devicemodeW *v80; // [rsp+28h] [rbp-130h]
  DWORD v81; // [rsp+30h] [rbp-128h]
  LONG x; // [rsp+34h] [rbp-124h]
  LONG v83; // [rsp+38h] [rbp-120h]
  DWORD dmPanningWidth; // [rsp+3Ch] [rbp-11Ch]
  BOOL v85; // [rsp+40h] [rbp-118h]
  unsigned int v86; // [rsp+44h] [rbp-114h]
  int v87; // [rsp+48h] [rbp-110h]
  __int64 v88; // [rsp+50h] [rbp-108h]
  struct _devicemodeW *v89; // [rsp+58h] [rbp-100h]
  struct _devicemodeW *v90; // [rsp+60h] [rbp-F8h]
  PVOID BackTrace[29]; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v94; // [rsp+170h] [rbp+18h]
  unsigned int Srca; // [rsp+180h] [rbp+28h]
  int Srcb; // [rsp+180h] [rbp+28h]

  v81 = 0;
  dmPanningWidth = 0;
  v12 = -1073741823;
  dmPanningHeight = 0;
  v13 = 0LL;
  v85 = 0;
  v89 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v15 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                 (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                 260LL,
                                 0x100DBuLL,
                                 1986356295);
  if ( v15 )
  {
    v16 = a10;
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v13 = a10;
      v89 = v13;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v86 = dmSize;
    Srca = dmDriverExtra;
    if ( dmSize < 0xBC || (v19 = dmDriverExtra + dmSize) == 0 )
    {
      v40 = 0LL;
      goto LABEL_125;
    }
    v20 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                   260LL,
                                   v19,
                                   1986356295);
    v21 = v20;
    if ( !v20 )
      goto LABEL_172;
    memmove(v20, Src, v19);
    dmFields = v21->dmFields;
    v23 = Srca;
    v21->dmSize = v86;
    v24 = 1;
    v21->dmDriverExtra = Srca;
    if ( dmFields )
      v24 = a8;
    v87 = v24;
    if ( (dmFields & 0x80020) == 0x80020 && !v21->dmPelsWidth && (dmFields & 0x100000) != 0 && !v21->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
      goto LABEL_172;
    }
    v90 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                   260LL,
                                   0xDCuLL,
                                   1986356295);
    if ( !v90 )
    {
LABEL_172:
      v40 = (struct _devicemodeW *)v21;
      goto LABEL_125;
    }
    memset(v15, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&v15->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v15, 1LL, v16);
      v26 = 0LL;
    }
    else
    {
      DisplayDriverParameters = DrvGetDisplayDriverParameters(a1, v15, 0LL, v16);
      v26 = 0LL;
      if ( DisplayDriverParameters < 0 )
        *(_DWORD *)&v15->dmSize = 220;
      *(_OWORD *)v90->dmDeviceName = *(_OWORD *)v15->dmDeviceName;
      *(_OWORD *)&v90->dmDeviceName[8] = *(_OWORD *)&v15->dmDeviceName[8];
      *(_OWORD *)&v90->dmDeviceName[16] = *(_OWORD *)&v15->dmDeviceName[16];
      *(_OWORD *)&v90->dmDeviceName[24] = *(_OWORD *)&v15->dmDeviceName[24];
      *(_OWORD *)&v90->dmSpecVersion = *(_OWORD *)&v15->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v90->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v15->76 + 4);
      *(_OWORD *)&v90->dmYResolution = *(_OWORD *)&v15->dmYResolution;
      *(_OWORD *)&v90->dmFormName[5] = *(_OWORD *)&v15->dmFormName[5];
      *(_OWORD *)&v90->dmFormName[13] = *(_OWORD *)&v15->dmFormName[13];
      *(_OWORD *)&v90->dmFormName[21] = *(_OWORD *)&v15->dmFormName[21];
      *(_OWORD *)&v90->dmFormName[29] = *(_OWORD *)&v15->dmFormName[29];
      *(_OWORD *)&v90->dmPelsHeight = *(_OWORD *)&v15->dmPelsHeight;
      *(_OWORD *)&v90->dmICMIntent = *(_OWORD *)&v15->dmICMIntent;
      *(_QWORD *)&v90->dmReserved2 = *(_QWORD *)&v15->dmReserved2;
      v90->dmPanningHeight = v15->dmPanningHeight;
      v27 = v21->dmFields;
      if ( (v27 & 0x40000) != 0 )
      {
        dmBitsPerPel = v21->dmBitsPerPel;
        if ( dmBitsPerPel )
        {
          v15->dmBitsPerPel = dmBitsPerPel;
          v27 = v21->dmFields;
        }
      }
      if ( (v27 & 0x80000) != 0 )
      {
        dmPelsWidth = v21->dmPelsWidth;
        if ( dmPelsWidth )
        {
          v15->dmPelsWidth = dmPelsWidth;
          v27 = v21->dmFields;
        }
      }
      if ( (v27 & 0x100000) != 0 )
      {
        dmPelsHeight = v21->dmPelsHeight;
        if ( dmPelsHeight )
        {
          v15->dmPelsHeight = dmPelsHeight;
          v27 = v21->dmFields;
        }
      }
      if ( (v27 & 0x400000) != 0 && (v31 = v21->dmDisplayFrequency) != 0 )
      {
        v15->dmDisplayFrequency = v31;
      }
      else if ( v21->dmPelsWidth || v21->dmPelsHeight )
      {
        dmDisplayFrequency = v15->dmDisplayFrequency;
        v15->dmDisplayFrequency = 0;
        v81 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v19 == 244 )
        {
          WdLogSingleEntry0(3LL);
          v26 = 0LL;
        }
      }
    }
    v32 = 0;
    if ( _bittest((const signed __int32 *)&v21->dmFields, 0x15u) )
    {
      dmDisplayFlags = v21->dmDisplayFlags;
      v15->dmDisplayFlags = dmDisplayFlags;
      LOBYTE(v32) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( _bittest((const signed __int32 *)&v15->dmFields, 0x15u) )
    {
      v15->dmDisplayFlags &= 6u;
    }
    v34 = v21->dmFields;
    if ( (v34 & 0x18000000) == 0x18000000 )
    {
      if ( v86 < 0xDC )
      {
        v34 &= 0xE7FFFFFF;
        v21->dmFields = v34;
      }
      else
      {
        dmPanningWidth = v21->dmPanningWidth;
        if ( dmPanningWidth > v15->dmPelsWidth
          || (dmPanningHeight = v21->dmPanningHeight, dmPanningHeight > v15->dmPelsHeight) )
        {
          v32 = 1;
          dmPanningHeight = v21->dmPanningHeight;
        }
      }
      v35 = v34;
    }
    else
    {
      v35 = v34;
      if ( (v15->dmFields & 0x18000000) == 0x18000000 )
      {
        if ( v15->dmPanningHeight < v15->dmPelsHeight && v15->dmPanningWidth < v15->dmPelsWidth )
        {
          dmPanningWidth = v15->dmPanningWidth;
          dmPanningHeight = v15->dmPanningHeight;
        }
        v26 = 0LL;
      }
    }
    if ( v35 < 0 )
    {
      dmDisplayOrientation = v21->dmDisplayOrientation;
      v15->dmDisplayOrientation = dmDisplayOrientation;
      if ( dmDisplayOrientation > 3 )
        v32 = 1;
    }
    v88 = 1LL;
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
    {
      v37 = v21->dmFields;
      v88 = 1LL;
      if ( (v37 & 0x20400000) == 0x400000 )
      {
        v21->dmDisplayFixedOutput = 0;
        v21->dmFields = v37 | 0x20000000;
        v88 = 0LL;
      }
    }
    if ( (v21->dmFields & 0x20000000) != 0 )
    {
      dmDisplayFixedOutput = v21->dmDisplayFixedOutput;
      v15->dmDisplayFixedOutput = dmDisplayFixedOutput;
      if ( dmDisplayFixedOutput )
      {
        Srcb = 1;
        if ( dmDisplayFixedOutput > 2 )
          v32 = 1;
      }
      else
      {
        Srcb = 3;
      }
      if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        v15->dmFields |= 0x20000000u;
    }
    else
    {
      v65 = 0;
      if ( (v15->dmFields & 0x20000000) != 0 )
        v65 = 2;
      Srcb = v65;
    }
    if ( v89 )
      v85 = v15->dmDisplayFixedOutput == 0;
    if ( (v21->dmFields & 0x20) != 0 )
    {
      x = v21->dmPosition.x;
      y = v21->dmPosition.y;
      v78 = 1;
    }
    else
    {
      v78 = v15->dmFields & 0x20;
      x = v15->dmPosition.x;
      y = v15->dmPosition.y;
    }
    v83 = y;
    v40 = (struct _devicemodeW *)v21;
    if ( v32 == 1 )
      goto LABEL_124;
    v94 = v23;
    v41 = v23;
    if ( !v23
      && ((*((_DWORD *)a1 + 40) & 0x800000) == 0
       || !v21->dmPelsWidth && !v21->dmPelsHeight
       || AreEquivalentDevModes(v21, v90)) )
    {
      v41 = v15->dmDriverExtra;
      v94 = v41;
    }
    v42 = gpLeakTrackingAllocator;
    v43 = v41 + 220;
    v80 = v21;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656447) == 0x76656447 )
    {
      v70 = v26;
      v80 = v21;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        v80 = v21;
        while ( *((_DWORD *)gpLeakTrackingAllocator + v70) != 1986356295 )
        {
          if ( ++v70 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_60;
        }
        v71 = v26;
        if ( v43 < 0x1000 || (((_WORD)v41 + 220) & 0xFFF) != 0 )
        {
          v71 = 1;
          v43 += 16LL;
        }
        Pool2 = (struct _devicemodeW *)ExAllocatePool2(260LL, v43);
        if ( !Pool2 )
          goto LABEL_124;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v71 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v42,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 = (struct _devicemodeW *)((char *)Pool2 + 16);
LABEL_61:
            if ( !Pool2 )
              goto LABEL_124;
LABEL_62:
            if ( v41 )
            {
              if ( v23 )
              {
                v45 = (char *)v40 + v86;
                goto LABEL_66;
              }
              if ( v15->dmDriverExtra )
              {
                v45 = (char *)v15 + v15->dmSize;
LABEL_66:
                memmove(&Pool2[1], v45, v41);
              }
            }
            v46 = 0LL;
            DrvBuildDevmodeList(a1);
            v47 = a1;
            v48 = (_DWORD *)*((_QWORD *)a1 + 22);
            if ( !v15->dmBitsPerPel && !v15->dmPelsWidth && !v15->dmPelsHeight && !v15->dmDisplayOrientation )
            {
              v67 = *((_DWORD *)a1 + 40);
              if ( (v67 & 0x6000000) != 0 )
              {
                if ( v48 )
                {
                  v15->dmBitsPerPel = v48[42];
                  v15->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
                  v15->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
                  v15->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
                  v15->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
                  v15->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
                  v15->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
                }
LABEL_72:
                v50 = a1;
                v51 = 0;
                v52 = 0;
                v53 = 0;
                v54 = 0;
                v55 = 0;
                v56 = *((_DWORD *)a1 + 47);
                if ( !v56 )
                  goto LABEL_99;
                while ( 1 )
                {
                  v57 = *((_QWORD *)v50 + 24);
                  if ( a7 && *(_DWORD *)(v57 + 16LL * v51) )
                    goto LABEL_78;
                  v58 = v15->dmBitsPerPel;
                  v48 = *(_DWORD **)(v57 + 16LL * v51 + 8);
                  if ( v58 )
                  {
                    if ( v58 != v48[42] )
                      goto LABEL_78;
                  }
                  if ( v15->dmPelsWidth != v48[43]
                    || v15->dmPelsHeight != v48[44]
                    || v15->dmDisplayOrientation != v48[21]
                    || v88 && v15->dmDisplayFixedOutput != v48[22] && (Srcb == 1 || v52 == 2 && v54 == 2) )
                  {
                    goto LABEL_78;
                  }
                  if ( !v46 )
                    v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                  if ( v54 )
                  {
                    if ( v52 == 2 )
                      goto LABEL_90;
                  }
                  else
                  {
                    v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                    v52 = 0;
                    v53 = 0;
                    v54 = 2;
                  }
                  if ( v15->dmDisplayFixedOutput == v48[22] || !v88 )
                  {
                    v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                    v52 = 2;
                    v53 = 0;
                    goto LABEL_91;
                  }
LABEL_90:
                  if ( v53 )
                  {
                    if ( v53 == 2 )
                      goto LABEL_78;
                    goto LABEL_94;
                  }
LABEL_91:
                  if ( v48[46] == 60 && v48[45] == v15->dmDisplayFlags )
                  {
                    v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                    v53 = 1;
                  }
LABEL_94:
                  v59 = v48[46];
                  if ( v59 == 1 && v15->dmDisplayFrequency == 64 && v48[45] == v15->dmDisplayFlags )
                  {
                    v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                    v53 = 2;
                  }
                  else
                  {
                    v60 = v15->dmDisplayFrequency;
                    if ( (v59 == v60
                       || (*((_DWORD *)a1 + 40) & 0x800000) != 0
                       && v15->dmSize + v15->dmDriverExtra == 244
                       && !v60
                       && v81 == v59)
                      && v48[45] == v15->dmDisplayFlags )
                    {
                      v53 = 2;
                      v46 = *(struct _devicemodeW **)(v57 + 16LL * v51 + 8);
                      if ( v52 == 2 || !v15->dmDisplayFixedOutput && (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
                      {
                        v55 = 1;
                        goto LABEL_99;
                      }
                    }
                  }
LABEL_78:
                  if ( ++v51 >= v56 )
                  {
                    v55 = 0;
LABEL_99:
                    if ( v46 )
                    {
                      v40 = (struct _devicemodeW *)v80;
                      goto LABEL_101;
                    }
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      Pool2);
                    v40 = (struct _devicemodeW *)v80;
LABEL_124:
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      v90);
LABEL_125:
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      v15);
                    if ( v40 )
                      NSInstrumentation::CLeakTrackingAllocator::Free(
                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                        v40);
                    return v12;
                  }
                  v50 = a1;
                }
              }
              if ( (v67 & 8) != 0 )
              {
                v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
                goto LABEL_72;
              }
              v72 = gbBaseVideo == 0;
              v15->dmBitsPerPel = 0;
              v73 = !v72;
              v74 = 8LL * !v72;
              v75 = (DWORD *)((char *)&unk_1C0268E78 + v74 + 4);
              if ( !v87 )
              {
                v15->dmPelsWidth = *(_DWORD *)((char *)&unk_1C0268E78 + v74);
                v15->dmPelsHeight = *v75;
                goto LABEL_72;
              }
              while ( 1 )
              {
                v15->dmPelsWidth = *(v75 - 1);
                v15->dmPelsHeight = *v75;
                ClosestMode = GetClosestMode(v47, v15, a7, 1);
                if ( (ClosestMode || (ClosestMode = GetClosestMode(a1, v15, a7, 0)) != 0LL)
                  && ClosestMode->dmBitsPerPel > 0x10 )
                {
                  goto LABEL_148;
                }
                ++v73;
                v75 += 2;
                if ( v73 >= 3 )
                  break;
                v47 = a1;
              }
              if ( !ClosestMode )
                goto LABEL_72;
LABEL_148:
              v15->dmBitsPerPel = ClosestMode->dmBitsPerPel;
              v15->dmPelsWidth = ClosestMode->dmPelsWidth;
              v15->dmPelsHeight = ClosestMode->dmPelsHeight;
              v15->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
              v15->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
              v15->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
              v15->dmDisplayFlags = ClosestMode->dmDisplayFlags;
              goto LABEL_72;
            }
            v49 = *((_DWORD *)a1 + 40);
            if ( (v49 & 8) != 0 && !*((_DWORD *)a1 + 46) )
            {
              v46 = v15;
              goto LABEL_72;
            }
            if ( !a9
              || (v49 & 0x800000) == 0
              || v15->dmSize + v15->dmDriverExtra != 244
              || v40->dmBitsPerPel == 4
              || !v15->dmDisplayFrequency )
            {
              if ( !v87
                || (ClosestMode = GetClosestMode(a1, v15, a7, 1)) == 0LL
                && (ClosestMode = GetClosestMode(a1, v15, a7, 0)) == 0LL )
              {
                v46 = 0LL;
                goto LABEL_72;
              }
              goto LABEL_148;
            }
            v46 = v15;
            if ( *((_DWORD *)a1 + 47) )
            {
              v76 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
              if ( v76 )
              {
                *(_OWORD *)v15->dmDeviceName = *v76;
                *(_OWORD *)&v15->dmDeviceName[8] = v76[1];
                *(_OWORD *)&v15->dmDeviceName[16] = v76[2];
                *(_OWORD *)&v15->dmDeviceName[24] = v76[3];
              }
            }
            v54 = 2;
            v52 = 2;
            v53 = 2;
            v55 = 1;
LABEL_101:
            if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
            {
              v61 = v94;
              if ( v94 + v46->dmSize == 244 && !v15->dmDisplayFrequency )
              {
                if ( v81 != v48[46] )
                  v61 = 0;
                v94 = v61;
              }
            }
            if ( a8 && v53 != 2 && v46->dmDisplayFrequency == v15->dmDisplayFrequency )
              v53 = 2;
            if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v54 == 2 && v52 == 2 && (Srcb & 0xFFFFFFFD) == 0 )
              v53 = 2;
            memmove(Pool2, v46, v46->dmSize);
            Pool2->dmDriverExtra = v94;
            if ( !gdmLogPixels )
            {
              v68 = 0;
              a8 = 0;
              if ( qword_1C029C5F0 )
              {
                qword_1C029C5F0(1LL, &a8);
                v68 = a8;
              }
              v15->dmLogPixels = v68;
              gdmLogPixels = v68;
            }
            dmLogPixels = v15->dmLogPixels;
            v63 = Pool2->dmFields | 0x18220000;
            Pool2->dmFields = v63;
            Pool2->dmLogPixels = dmLogPixels;
            if ( (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
            {
              if ( !v78 )
              {
LABEL_114:
                Pool2->dmPanningWidth = dmPanningWidth;
                Pool2->dmPanningHeight = dmPanningHeight;
                if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v94 + Pool2->dmSize == 244 )
                  ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C0296748)(Pool2, Pool2);
                if ( v89 )
                {
                  if ( *(_DWORD *)&v89[1].dmDeviceName[6] )
                  {
                    v77 = Pool2->dmFields | 0x2000000;
                    Pool2->dmFields = v77;
                    Pool2->dmMediaType = *(_DWORD *)&v89[1].dmDeviceName[6];
                    if ( v85 )
                    {
                      Pool2->dmFields = v77 | 0x4000000;
                      Pool2->dmDisplayFixedOutput = *(_DWORD *)&v89[1].dmDeviceName[8];
                    }
                  }
                }
                if ( a4 && v46->dmSize + v46->dmDriverExtra == 244 && (*(_DWORD *)&v46[1].dmDeviceName[10] & 0x20) != 0 )
                  *a4 = 1;
                *a2 = Pool2;
                if ( v55 || v53 == 2 )
                  v12 = 0;
                else
                  v12 = v15->dmDisplayFrequency != 0 ? -1073741811 : 1073741839;
                goto LABEL_124;
              }
              Pool2->dmFields = v63 | 0x20;
            }
            else
            {
              Pool2->dmFields = v63 | (v78 != 0 ? 0x20 : 0);
            }
            Pool2->dmPosition.x = x;
            Pool2->dmPosition.y = v83;
            goto LABEL_114;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v42,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_62;
        }
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_124;
      }
    }
LABEL_60:
    Pool2 = (struct _devicemodeW *)ExAllocatePool2(260LL, v43);
    goto LABEL_61;
  }
  return v12;
}
