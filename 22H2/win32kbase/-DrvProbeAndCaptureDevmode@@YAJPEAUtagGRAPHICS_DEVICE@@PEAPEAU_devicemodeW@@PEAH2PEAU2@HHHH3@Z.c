/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00179AC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01627AC (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     DrvBuildDevmodeList @ 0x1C00169E4 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00188E0 (DrvGetDisplayDriverParameters.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00BCAE4 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00C3CEC (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
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
  unsigned int v12; // r15d
  struct _devicemodeW *v13; // rdi
  struct _devicemodeW *v14; // r13
  struct _devicemodeW *v16; // rbx
  int v17; // eax
  struct _devicemodeW *v18; // r14
  unsigned int dmSize; // ecx
  unsigned int dmDriverExtra; // eax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // r13d
  struct _devicemodeW *v24; // rax
  DWORD dmFields; // ecx
  int v26; // eax
  _OWORD *v27; // r12
  int DisplayDriverParameters; // eax
  unsigned __int64 v29; // r10
  unsigned int v30; // r11d
  const signed __int32 *p_dmFields; // r9
  int v32; // edx
  DWORD v33; // ecx
  char v34; // r8
  int v35; // r8d
  int v36; // ecx
  LONG y; // eax
  unsigned int v38; // r13d
  NSInstrumentation::CLeakTrackingAllocator *v39; // r14
  unsigned __int64 v40; // rsi
  int v41; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rsi
  __int64 v43; // r14
  struct tagGRAPHICS_DEVICE *v44; // r12
  struct _devicemodeW *v45; // r13
  _DWORD *v46; // r10
  int v47; // eax
  struct _devicemodeW *ClosestMode; // rcx
  int v49; // r8d
  unsigned int v50; // r12d
  unsigned int v51; // r11d
  int v52; // r9d
  int v53; // esi
  DWORD v54; // eax
  int *v55; // rdx
  int v56; // r8d
  DWORD v57; // edx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r15
  WORD dmLogPixels; // ax
  __int64 v62; // rcx
  struct _devicemodeW *v63; // rdx
  int v65; // eax
  WORD v66; // cx
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD dmDisplayFrequency; // eax
  DWORD v71; // eax
  DWORD dmDisplayFlags; // eax
  DWORD *p_dmPanningHeight; // r8
  unsigned int dmDisplayOrientation; // eax
  DWORD v75; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  char v77; // r10
  unsigned int v78; // r11d
  char v79; // r12
  char *v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // r12d
  DWORD *v83; // rsi
  struct _devicemodeW *v84; // rcx
  _OWORD *v85; // rcx
  int v86; // ecx
  __int64 DxgkWin32kInterface; // rax
  int v88; // ecx
  unsigned int v89; // [rsp+28h] [rbp-E0h]
  int v90; // [rsp+28h] [rbp-E0h]
  int v91; // [rsp+2Ch] [rbp-DCh]
  int v92; // [rsp+30h] [rbp-D8h]
  int v93; // [rsp+34h] [rbp-D4h]
  DWORD v94; // [rsp+38h] [rbp-D0h]
  LONG x; // [rsp+3Ch] [rbp-CCh]
  LONG v96; // [rsp+40h] [rbp-C8h]
  DWORD dmPanningWidth; // [rsp+44h] [rbp-C4h]
  DWORD dmPanningHeight; // [rsp+48h] [rbp-C0h]
  BOOL v99; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v100[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v101; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v102; // [rsp+70h] [rbp-98h] BYREF
  __int64 v103; // [rsp+78h] [rbp-90h]
  struct _devicemodeW *v104; // [rsp+80h] [rbp-88h]
  __int64 v105; // [rsp+88h] [rbp-80h] BYREF
  void *v106; // [rsp+90h] [rbp-78h]
  PVOID BackTrace[28]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int Size; // [rsp+198h] [rbp+90h]
  unsigned int Srca; // [rsp+1A8h] [rbp+A0h]

  v12 = -1073741823;
  v94 = 0;
  v13 = 0LL;
  dmPanningWidth = 0;
  v14 = 0LL;
  dmPanningHeight = 0;
  v99 = 0;
  v104 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v16 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                 gpLeakTrackingAllocator,
                                 0x104uLL,
                                 0x100DBuLL,
                                 0x76656447u);
  if ( v16 )
  {
    v17 = *((_DWORD *)a1 + 40);
    v18 = a10;
    if ( (v17 & 0x800000) != 0 && a10 )
    {
      if ( a10->dmSize + a10->dmDriverExtra == 244 )
        v14 = a10;
      v104 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v89 = dmSize;
    Srca = dmDriverExtra;
    if ( dmSize < 0xBC )
      goto LABEL_99;
    v21 = dmSize + dmDriverExtra == 0;
    v22 = dmSize + dmDriverExtra;
    v23 = v22;
    if ( v21 )
      goto LABEL_99;
    v24 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                   gpLeakTrackingAllocator,
                                   0x104uLL,
                                   v22,
                                   0x76656447u);
    v13 = v24;
    if ( !v24 )
      goto LABEL_99;
    memmove(v24, Src, v23);
    dmFields = v13->dmFields;
    v13->dmDriverExtra = Srca;
    v26 = 1;
    v13->dmSize = v89;
    if ( dmFields )
      v26 = a8;
    v91 = v26;
    if ( (dmFields & 0x80020) == 0x80020 && !v13->dmPelsWidth && (dmFields & 0x100000) != 0 && !v13->dmPelsHeight )
    {
      *a3 = 1;
      v12 = 0;
LABEL_99:
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
      if ( v13 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v13);
      return v12;
    }
    v106 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0xDCuLL, 0x76656447u);
    v27 = v106;
    if ( !v106 )
      goto LABEL_99;
    memset(v16, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&v16->dmSize = -8739;
    if ( a6 )
    {
      DrvGetDisplayDriverParameters(a1, v16, 1LL, v18);
    }
    else
    {
      DisplayDriverParameters = DrvGetDisplayDriverParameters(a1, v16, 0LL, v18);
      v29 = 0LL;
      if ( DisplayDriverParameters < 0 )
        *(_DWORD *)&v16->dmSize = 220;
      *v27 = *(_OWORD *)v16->dmDeviceName;
      v27[1] = *(_OWORD *)&v16->dmDeviceName[8];
      v27[2] = *(_OWORD *)&v16->dmDeviceName[16];
      v27[3] = *(_OWORD *)&v16->dmDeviceName[24];
      v27[4] = *(_OWORD *)&v16->dmSpecVersion;
      v27[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v16->76 + 4);
      v27[6] = *(_OWORD *)&v16->dmYResolution;
      v27[7] = *(_OWORD *)&v16->dmFormName[5];
      v27[8] = *(_OWORD *)&v16->dmFormName[13];
      v27[9] = *(_OWORD *)&v16->dmFormName[21];
      v27[10] = *(_OWORD *)&v16->dmFormName[29];
      v27[11] = *(_OWORD *)&v16->dmPelsHeight;
      v27[12] = *(_OWORD *)&v16->dmICMIntent;
      *((_QWORD *)v27 + 26) = *(_QWORD *)&v16->dmReserved2;
      *((_DWORD *)v27 + 54) = v16->dmPanningHeight;
      if ( (v13->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v13->dmBitsPerPel;
        if ( dmBitsPerPel )
          v16->dmBitsPerPel = dmBitsPerPel;
      }
      if ( (v13->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v13->dmPelsWidth;
        if ( dmPelsWidth )
          v16->dmPelsWidth = dmPelsWidth;
      }
      if ( (v13->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v13->dmPelsHeight;
        if ( dmPelsHeight )
          v16->dmPelsHeight = dmPelsHeight;
      }
      if ( (v13->dmFields & 0x400000) != 0 )
      {
        dmDisplayFrequency = v13->dmDisplayFrequency;
        if ( dmDisplayFrequency )
        {
          v16->dmDisplayFrequency = dmDisplayFrequency;
LABEL_22:
          v30 = Srca;
          goto LABEL_23;
        }
      }
      if ( !v13->dmPelsWidth && !v13->dmPelsHeight )
        goto LABEL_22;
      v71 = v16->dmDisplayFrequency;
      v16->dmDisplayFrequency = 0;
      v94 = v71;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
        goto LABEL_22;
      v30 = Srca;
      if ( Srca + v89 != 244 )
      {
LABEL_23:
        p_dmFields = (const signed __int32 *)&v16->dmFields;
        v32 = 0;
        if ( _bittest((const signed __int32 *)&v13->dmFields, 0x15u) )
        {
          dmDisplayFlags = v13->dmDisplayFlags;
          v16->dmDisplayFlags = dmDisplayFlags;
          LOBYTE(v32) = (dmDisplayFlags & 0xFFFFFFF9) != 0;
          a8 = 0;
        }
        else if ( _bittest(p_dmFields, 0x15u) )
        {
          v16->dmDisplayFlags &= 6u;
        }
        v33 = v13->dmFields;
        if ( (v33 & 0x18000000) == 0x18000000 )
        {
          if ( v89 < 0xDC )
          {
            v33 &= 0xE7FFFFFF;
            v13->dmFields = v33;
          }
          else
          {
            p_dmPanningHeight = &v13->dmPanningHeight;
            dmPanningWidth = v13->dmPanningWidth;
            if ( dmPanningWidth > v16->dmPelsWidth || *p_dmPanningHeight > v16->dmPelsHeight )
              v32 = 1;
            dmPanningHeight = *p_dmPanningHeight;
          }
          v34 = v33;
        }
        else
        {
          v34 = v33;
          if ( (*p_dmFields & 0x18000000) == 0x18000000 )
          {
            if ( v16->dmPanningHeight < v16->dmPelsHeight && v16->dmPanningWidth < v16->dmPelsWidth )
            {
              dmPanningWidth = v16->dmPanningWidth;
              dmPanningHeight = v16->dmPanningHeight;
            }
            v29 = 0LL;
          }
        }
        if ( v34 < 0 )
        {
          dmDisplayOrientation = v13->dmDisplayOrientation;
          v16->dmDisplayOrientation = dmDisplayOrientation;
          if ( dmDisplayOrientation > 3 )
            v32 = 1;
        }
        v21 = (*((_DWORD *)a1 + 40) & 0x800000) == 0;
        v103 = 1LL;
        if ( !v21 )
        {
          v75 = v13->dmFields;
          v103 = 1LL;
          if ( (v75 & 0x20400000) == 0x400000 )
          {
            v13->dmDisplayFixedOutput = 0;
            v13->dmFields = v75 | 0x20000000;
            v103 = 0LL;
          }
        }
        v35 = 2;
        if ( (v13->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
          v16->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            v92 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v32 = 1;
          }
          else
          {
            v92 = 3;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
            *p_dmFields |= 0x20000000u;
        }
        else
        {
          v36 = 0;
          if ( (*p_dmFields & 0x20000000) != 0 )
            v36 = 2;
          v92 = v36;
        }
        if ( v104 )
          v99 = v16->dmDisplayFixedOutput == 0;
        if ( (v13->dmFields & 0x20) != 0 )
        {
          x = v13->dmPosition.x;
          y = v13->dmPosition.y;
          v93 = 1;
        }
        else
        {
          v93 = *p_dmFields & 0x20;
          x = v16->dmPosition.x;
          y = v16->dmPosition.y;
        }
        v96 = y;
        if ( v32 == 1 )
          goto LABEL_98;
        Size = v30;
        v38 = v30;
        if ( !v30 )
        {
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
          {
            v38 = 24;
          }
          else if ( !v13->dmPelsWidth && !v13->dmPelsHeight
                 || AreEquivalentDevModes(v13, (const struct _devicemodeW *const)v27) )
          {
            Size = v16->dmDriverExtra;
            v38 = Size;
          }
        }
        v39 = gpLeakTrackingAllocator;
        v40 = v38 + 220;
        v102 = v40;
        LODWORD(v101) = 1986356295;
        v105 = 260LL;
        v41 = *(_DWORD *)gpLeakTrackingAllocator;
        if ( *(_DWORD *)gpLeakTrackingAllocator )
        {
          if ( v41 != 1 )
          {
            if ( v41 != v35 )
              goto LABEL_98;
            v100[0] = v29;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, v100) )
            {
              v100[0] = (unsigned __int64)&v105;
              v100[1] = (unsigned __int64)&v101;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                 v39,
                                                                                                 v100,
                                                                                                 &v102);
              goto LABEL_51;
            }
            v79 = v77;
            if ( v40 < 0x1000 || (v40 & 0xFFF) != 0 )
            {
              v40 += 16LL;
              v79 = 1;
              v102 = v40;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               v40,
                                                                                               v78);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_98;
            _InterlockedAdd64((volatile signed __int64 *)v39 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v79
              && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v39,
                                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                      v100[0],
                                      BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                goto LABEL_51;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v39,
                                         UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                         v100[0],
                                         BackTrace) )
            {
              v43 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              goto LABEL_52;
            }
            _InterlockedAdd64((volatile signed __int64 *)v39 + 17, 1uLL);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            goto LABEL_98;
          }
          if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u)
            || v40 + 16 < v40 )
          {
            goto LABEL_98;
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             v105 & 0xFFFFFFFFFFFFFFFDuLL,
                                                                                             v40 + 16,
                                                                                             (unsigned int)v101);
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
            || (_InterlockedAdd64((volatile signed __int64 *)v39 + 14, 1uLL),
                *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 1986356295LL,
                (UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL) == 0) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v39 + 1),
              (const void *)0x76656447);
          }
        }
        else
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             260LL,
                                                                                             (unsigned int)v40,
                                                                                             1986356295LL);
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            _InterlockedAdd64((volatile signed __int64 *)v39 + 14, 1uLL);
        }
LABEL_51:
        v43 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_98;
LABEL_52:
        if ( !Size )
        {
          if ( v38 )
            memset(
              (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 220),
              0,
              v38);
LABEL_55:
          v44 = a1;
          v90 = 0;
          v45 = 0LL;
          DrvBuildDevmodeList(a1, 0LL, 0);
          v46 = (_DWORD *)*((_QWORD *)a1 + 22);
          v100[0] = (unsigned __int64)v46;
          if ( v16->dmBitsPerPel || v16->dmPelsWidth || v16->dmPelsHeight || v16->dmDisplayOrientation )
          {
            v47 = *((_DWORD *)a1 + 40);
            if ( (v47 & 8) != 0 && !*((_DWORD *)a1 + 46) )
            {
              v45 = v16;
              goto LABEL_63;
            }
            if ( a9
              && (v47 & 0x800000) != 0
              && v16->dmDriverExtra + v16->dmSize == 244
              && v13->dmBitsPerPel != 4
              && v16->dmDisplayFrequency )
            {
              v45 = v16;
              if ( *((_DWORD *)a1 + 47) )
              {
                v85 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
                if ( v85 )
                {
                  *(_OWORD *)v16->dmDeviceName = *v85;
                  *(_OWORD *)&v16->dmDeviceName[8] = v85[1];
                  *(_OWORD *)&v16->dmDeviceName[16] = v85[2];
                  *(_OWORD *)&v16->dmDeviceName[24] = v85[3];
                }
              }
              v90 = 1;
              v49 = 2;
              v52 = 2;
              v53 = 2;
LABEL_88:
              if ( v53 != 2 && a8 && v45->dmDisplayFrequency == v16->dmDisplayFrequency )
                v53 = 2;
              if ( (*((_DWORD *)v44 + 40) & 0x800000) != 0 )
              {
                if ( v49 == 2 && v52 == 2 && (v92 & 0xFFFFFFFD) == 0 )
                  v53 = 2;
                v86 = v45->dmSize;
                if ( v86 + Size != 244 || v16->dmDisplayFrequency || v94 == v46[46] )
                {
                  if ( !Size && v53 && v86 + v45->dmDriverExtra == 244 )
                  {
                    *(_QWORD *)(v43 + 220) = *(_QWORD *)v45[1].dmDeviceName;
                    Size = v45->dmDriverExtra;
                  }
                }
                else
                {
                  Size = 0;
                }
              }
              memmove((void *)v43, v45, v45->dmSize);
              *(_WORD *)(v43 + 70) = Size;
              v58 = SGDGetSessionState();
              v59 = 0LL;
              v60 = *(_QWORD *)(v58 + 24);
              if ( !*(_WORD *)(v60 + 1248) )
              {
                v66 = 0;
                a8 = 0;
                if ( qword_1C0295CC0 )
                {
                  qword_1C0295CC0(1LL, &a8);
                  v66 = a8;
                }
                v16->dmLogPixels = v66;
                *(_WORD *)(v60 + 1248) = v66;
              }
              dmLogPixels = v16->dmLogPixels;
              v62 = *(_DWORD *)(v43 + 72) | 0x18220000u;
              *(_DWORD *)(v43 + 72) = v62;
              *(_WORD *)(v43 + 166) = dmLogPixels;
              if ( (*((_DWORD *)v44 + 40) & 0x4000000) != 0 )
              {
                v12 = 0;
                if ( !v93 )
                {
LABEL_94:
                  *(_DWORD *)(v43 + 212) = dmPanningWidth;
                  *(_DWORD *)(v43 + 216) = dmPanningHeight;
                  if ( (*((_DWORD *)v44 + 40) & 0x800000) != 0 && Size + *(unsigned __int16 *)(v43 + 68) == 244 )
                  {
                    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v62, v59);
                    (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 232))(v43, v43);
                  }
                  v63 = v104;
                  if ( v104 )
                  {
                    if ( *(_DWORD *)&v104[1].dmDeviceName[6] )
                    {
                      v88 = *(_DWORD *)(v43 + 72) | 0x2000000;
                      *(_DWORD *)(v43 + 72) = v88;
                      *(_DWORD *)(v43 + 196) = *(_DWORD *)&v63[1].dmDeviceName[6];
                      if ( v99 )
                      {
                        *(_DWORD *)(v43 + 72) = v88 | 0x4000000;
                        *(_DWORD *)(v43 + 88) = *(_DWORD *)&v63[1].dmDeviceName[8];
                      }
                    }
                  }
                  if ( a4
                    && v45->dmSize + v45->dmDriverExtra == 244
                    && (*(_DWORD *)&v45[1].dmDeviceName[10] & 0x20) != 0 )
                  {
                    *a4 = 1;
                  }
                  *a2 = (struct _devicemodeW *)v43;
                  if ( !v90 && v53 != 2 )
                    v12 = v16->dmDisplayFrequency != 0 ? -1073741811 : 1073741839;
                  goto LABEL_98;
                }
                v62 = (unsigned int)v62 | 0x20;
                *(_DWORD *)(v43 + 72) = v62;
              }
              else
              {
                *(_DWORD *)(v43 + 72) = v62 | (v93 != 0 ? 0x20 : 0);
                v12 = 0;
              }
              *(_DWORD *)(v43 + 76) = x;
              *(_DWORD *)(v43 + 80) = v96;
              goto LABEL_94;
            }
            if ( !v91 )
              goto LABEL_63;
            ClosestMode = GetClosestMode(a1, v16, a7, 1);
            if ( ClosestMode || (ClosestMode = GetClosestMode(a1, v16, a7, 0)) != 0LL )
            {
              v16->dmBitsPerPel = ClosestMode->dmBitsPerPel;
              v16->dmPelsWidth = ClosestMode->dmPelsWidth;
              v16->dmPelsHeight = ClosestMode->dmPelsHeight;
              v16->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
              v16->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
              v16->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
              v16->dmDisplayFlags = ClosestMode->dmDisplayFlags;
            }
          }
          else
          {
            v65 = *((_DWORD *)a1 + 40);
            if ( (v65 & 0x6000000) != 0 )
            {
              if ( v46 )
              {
                v16->dmBitsPerPel = v46[42];
                v16->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
                v16->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
                v16->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
                v16->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
                v16->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
                v16->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
              }
              goto LABEL_63;
            }
            if ( (v65 & 8) != 0 )
            {
              v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
              goto LABEL_63;
            }
            v21 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1232LL) == 0;
            v16->dmBitsPerPel = 0;
            v81 = 8LL * !v21;
            v82 = !v21;
            if ( v91 )
            {
              v83 = (DWORD *)((char *)&unk_1C0264028 + v81 + 4);
              while ( 1 )
              {
                v16->dmPelsWidth = *(v83 - 1);
                v16->dmPelsHeight = *v83;
                v84 = GetClosestMode(a1, v16, a7, 1);
                if ( (v84 || (v84 = GetClosestMode(a1, v16, a7, 0)) != 0LL) && v84->dmBitsPerPel > 0x10 )
                  break;
                ++v82;
                v83 += 2;
                if ( v82 >= 3 )
                {
                  if ( !v84 )
                    goto LABEL_197;
                  break;
                }
              }
              v16->dmBitsPerPel = v84->dmBitsPerPel;
              v16->dmPelsWidth = v84->dmPelsWidth;
              v16->dmPelsHeight = v84->dmPelsHeight;
              v16->dmDisplayFrequency = v84->dmDisplayFrequency;
              v16->dmDisplayOrientation = v84->dmDisplayOrientation;
              v16->dmDisplayFixedOutput = v84->dmDisplayFixedOutput;
              v16->dmDisplayFlags = v84->dmDisplayFlags;
            }
            else
            {
              v16->dmPelsWidth = *(_DWORD *)((char *)&unk_1C0264028 + v81);
              v16->dmPelsHeight = *(_DWORD *)((char *)&unk_1C0264028 + v81 + 4);
            }
LABEL_197:
            v44 = a1;
          }
          v46 = (_DWORD *)v100[0];
LABEL_63:
          v49 = 0;
          v50 = *((_DWORD *)v44 + 47);
          v51 = 0;
          v52 = 0;
          v53 = 0;
          while ( v51 < v50 )
          {
            if ( a7 && *(_DWORD *)(*((_QWORD *)a1 + 24) + 16LL * v51) )
              goto LABEL_231;
            v46 = *(_DWORD **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
            v54 = v16->dmBitsPerPel;
            if ( v54 )
            {
              if ( v54 != v46[42] )
                goto LABEL_231;
            }
            if ( v16->dmPelsWidth != v46[43]
              || v16->dmPelsHeight != v46[44]
              || v16->dmDisplayOrientation != v46[21]
              || v103 && v16->dmDisplayFixedOutput != v46[22] && (v92 == 1 || v52 == 2 && v49 == 2) )
            {
              goto LABEL_231;
            }
            if ( !v45 )
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
            if ( v49 )
            {
              if ( v52 == 2 )
                goto LABEL_114;
            }
            else
            {
              v52 = 0;
              v53 = 0;
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
              v49 = 2;
            }
            if ( v16->dmDisplayFixedOutput == v46[22] || !v103 )
            {
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
              v52 = 2;
              v53 = 0;
LABEL_78:
              v55 = v46 + 46;
              if ( v46[46] == 60 && v46[45] == v16->dmDisplayFlags )
              {
                v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
                v53 = 1;
              }
              goto LABEL_81;
            }
LABEL_114:
            if ( !v53 )
              goto LABEL_78;
            v55 = v46 + 46;
            if ( v53 == 2 )
              goto LABEL_231;
LABEL_81:
            v56 = *v55;
            if ( *v55 == 1 && v16->dmDisplayFrequency == 64 && v46[45] == v16->dmDisplayFlags )
            {
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
              v53 = 2;
LABEL_221:
              v49 = 2;
              goto LABEL_231;
            }
            v57 = v16->dmDisplayFrequency;
            if ( v56 != v57 )
            {
              if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
                goto LABEL_221;
              if ( v16->dmDriverExtra + v16->dmSize != 244 || v57 || v94 != v56 )
              {
                v49 = 2;
                goto LABEL_231;
              }
            }
            v49 = 2;
            if ( v46[45] == v16->dmDisplayFlags )
            {
              v53 = 2;
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v51 + 8);
              if ( v52 == 2 || !v16->dmDisplayFixedOutput && (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
              {
                v90 = 1;
                break;
              }
            }
LABEL_231:
            ++v51;
          }
          if ( v45 )
          {
            v44 = a1;
            goto LABEL_88;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v43);
LABEL_98:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v106);
          goto LABEL_99;
        }
        if ( Srca )
        {
          v80 = (char *)v13 + v89;
        }
        else
        {
          if ( !v16->dmDriverExtra )
            goto LABEL_55;
          v80 = (char *)v16 + v16->dmSize;
        }
        memmove(
          (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 220),
          v80,
          Size);
        goto LABEL_55;
      }
      WdLogSingleEntry0(3LL);
    }
    v29 = 0LL;
    goto LABEL_22;
  }
  return v12;
}
