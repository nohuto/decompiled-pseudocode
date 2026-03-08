/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018F534 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 * Callees:
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C002C178 (DrvGetDisplayDriverParameters.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00CBCDC (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     ?AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z @ 0x1C00D3204 (-AreEquivalentDevModes@@YA_NQEBU_devicemodeW@@0@Z.c)
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
  __int64 v46; // rcx
  _DWORD *v47; // r10
  int v48; // eax
  struct _devicemodeW *ClosestMode; // rcx
  int v50; // r8d
  unsigned int v51; // r12d
  unsigned int v52; // r11d
  int v53; // r9d
  int v54; // esi
  DWORD v55; // eax
  int *v56; // rdx
  int v57; // r8d
  DWORD v58; // edx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r15
  WORD dmLogPixels; // ax
  __int64 v64; // rcx
  struct _devicemodeW *v65; // rdx
  int v67; // eax
  WORD v68; // cx
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD dmDisplayFrequency; // eax
  DWORD v73; // eax
  DWORD dmDisplayFlags; // eax
  DWORD *p_dmPanningHeight; // r8
  unsigned int dmDisplayOrientation; // eax
  DWORD v77; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  char v79; // r10
  unsigned int v80; // r11d
  char v81; // r12
  char *v82; // rdx
  __int64 v83; // rcx
  unsigned int v84; // r12d
  DWORD *v85; // rsi
  struct _devicemodeW *v86; // rcx
  _OWORD *v87; // rcx
  int v88; // ecx
  __int64 DxgkWin32kInterface; // rax
  int v90; // ecx
  unsigned int v91; // [rsp+28h] [rbp-E0h]
  int v92; // [rsp+28h] [rbp-E0h]
  int v93; // [rsp+2Ch] [rbp-DCh]
  int v94; // [rsp+30h] [rbp-D8h]
  int v95; // [rsp+34h] [rbp-D4h]
  DWORD v96; // [rsp+38h] [rbp-D0h]
  LONG x; // [rsp+3Ch] [rbp-CCh]
  LONG v98; // [rsp+40h] [rbp-C8h]
  DWORD dmPanningWidth; // [rsp+44h] [rbp-C4h]
  DWORD dmPanningHeight; // [rsp+48h] [rbp-C0h]
  BOOL v101; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v102[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v103; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v104; // [rsp+70h] [rbp-98h] BYREF
  __int64 v105; // [rsp+78h] [rbp-90h]
  struct _devicemodeW *v106; // [rsp+80h] [rbp-88h]
  __int64 v107; // [rsp+88h] [rbp-80h] BYREF
  void *v108; // [rsp+90h] [rbp-78h]
  PVOID BackTrace[28]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int Size; // [rsp+198h] [rbp+90h]
  unsigned int Srca; // [rsp+1A8h] [rbp+A0h]

  v12 = -1073741823;
  v96 = 0;
  v13 = 0LL;
  dmPanningWidth = 0;
  v14 = 0LL;
  dmPanningHeight = 0;
  v101 = 0;
  v106 = 0LL;
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
      v106 = v14;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v91 = dmSize;
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
    v13->dmSize = v91;
    if ( dmFields )
      v26 = a8;
    v93 = v26;
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
    v108 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0xDCuLL, 0x76656447u);
    v27 = v108;
    if ( !v108 )
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
      v73 = v16->dmDisplayFrequency;
      v16->dmDisplayFrequency = 0;
      v96 = v73;
      if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
        goto LABEL_22;
      v30 = Srca;
      if ( Srca + v91 != 244 )
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
          if ( v91 < 0xDC )
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
        v105 = 1LL;
        if ( !v21 )
        {
          v77 = v13->dmFields;
          v105 = 1LL;
          if ( (v77 & 0x20400000) == 0x400000 )
          {
            v13->dmDisplayFixedOutput = 0;
            v13->dmFields = v77 | 0x20000000;
            v105 = 0LL;
          }
        }
        v35 = 2;
        if ( (v13->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v13->dmDisplayFixedOutput;
          v16->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            v94 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v32 = 1;
          }
          else
          {
            v94 = 3;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
            *p_dmFields |= 0x20000000u;
        }
        else
        {
          v36 = 0;
          if ( (*p_dmFields & 0x20000000) != 0 )
            v36 = 2;
          v94 = v36;
        }
        if ( v106 )
          v101 = v16->dmDisplayFixedOutput == 0;
        if ( (v13->dmFields & 0x20) != 0 )
        {
          x = v13->dmPosition.x;
          y = v13->dmPosition.y;
          v95 = 1;
        }
        else
        {
          v95 = *p_dmFields & 0x20;
          x = v16->dmPosition.x;
          y = v16->dmPosition.y;
        }
        v98 = y;
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
        v104 = v40;
        LODWORD(v103) = 1986356295;
        v107 = 260LL;
        v41 = *(_DWORD *)gpLeakTrackingAllocator;
        if ( *(_DWORD *)gpLeakTrackingAllocator )
        {
          if ( v41 != 1 )
          {
            if ( v41 != v35 )
              goto LABEL_98;
            v102[0] = v29;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, v102) )
            {
              v102[0] = (unsigned __int64)&v107;
              v102[1] = (unsigned __int64)&v103;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                 v39,
                                                                                                 v102,
                                                                                                 &v104);
              goto LABEL_51;
            }
            v81 = v79;
            if ( v40 < 0x1000 || (v40 & 0xFFF) != 0 )
            {
              v40 += 16LL;
              v81 = 1;
              v104 = v40;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               v40,
                                                                                               v80);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_98;
            _InterlockedAdd64((volatile signed __int64 *)v39 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v81
              && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v39,
                                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                      v102[0],
                                      BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                goto LABEL_51;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v39,
                                         UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                         v102[0],
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
                                                                                             v107 & 0xFFFFFFFFFFFFFFFDuLL,
                                                                                             v40 + 16,
                                                                                             (unsigned int)v103);
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
          v92 = 0;
          v45 = 0LL;
          DrvBuildDevmodeList(a1, 0LL, 0);
          v47 = (_DWORD *)*((_QWORD *)a1 + 22);
          v102[0] = (unsigned __int64)v47;
          if ( v16->dmBitsPerPel || v16->dmPelsWidth || v16->dmPelsHeight || v16->dmDisplayOrientation )
          {
            v48 = *((_DWORD *)a1 + 40);
            if ( (v48 & 8) != 0 && !*((_DWORD *)a1 + 46) )
            {
              v45 = v16;
              goto LABEL_63;
            }
            if ( a9
              && (v48 & 0x800000) != 0
              && v16->dmDriverExtra + v16->dmSize == 244
              && v13->dmBitsPerPel != 4
              && v16->dmDisplayFrequency )
            {
              v45 = v16;
              if ( *((_DWORD *)a1 + 47) )
              {
                v87 = *(_OWORD **)(*((_QWORD *)a1 + 24) + 8LL);
                if ( v87 )
                {
                  *(_OWORD *)v16->dmDeviceName = *v87;
                  *(_OWORD *)&v16->dmDeviceName[8] = v87[1];
                  *(_OWORD *)&v16->dmDeviceName[16] = v87[2];
                  *(_OWORD *)&v16->dmDeviceName[24] = v87[3];
                }
              }
              v92 = 1;
              v50 = 2;
              v53 = 2;
              v54 = 2;
LABEL_88:
              if ( v54 != 2 && a8 && v45->dmDisplayFrequency == v16->dmDisplayFrequency )
                v54 = 2;
              if ( (*((_DWORD *)v44 + 40) & 0x800000) != 0 )
              {
                if ( v50 == 2 && v53 == 2 && (v94 & 0xFFFFFFFD) == 0 )
                  v54 = 2;
                v88 = v45->dmSize;
                if ( v88 + Size != 244 || v16->dmDisplayFrequency || v96 == v47[46] )
                {
                  if ( !Size && v54 && v88 + v45->dmDriverExtra == 244 )
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
              v60 = SGDGetSessionState(v59);
              v61 = 0LL;
              v62 = *(_QWORD *)(v60 + 24);
              if ( !*(_WORD *)(v62 + 1248) )
              {
                v68 = 0;
                a8 = 0;
                if ( qword_1C02D6E38 )
                {
                  qword_1C02D6E38(1LL, &a8);
                  v68 = a8;
                }
                v16->dmLogPixels = v68;
                *(_WORD *)(v62 + 1248) = v68;
              }
              dmLogPixels = v16->dmLogPixels;
              v64 = *(_DWORD *)(v43 + 72) | 0x18220000u;
              *(_DWORD *)(v43 + 72) = v64;
              *(_WORD *)(v43 + 166) = dmLogPixels;
              if ( (*((_DWORD *)v44 + 40) & 0x4000000) != 0 )
              {
                v12 = 0;
                if ( !v95 )
                {
LABEL_94:
                  *(_DWORD *)(v43 + 212) = dmPanningWidth;
                  *(_DWORD *)(v43 + 216) = dmPanningHeight;
                  if ( (*((_DWORD *)v44 + 40) & 0x800000) != 0 && Size + *(unsigned __int16 *)(v43 + 68) == 244 )
                  {
                    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v64, v61);
                    (*(void (__fastcall **)(__int64, __int64))(DxgkWin32kInterface + 232))(v43, v43);
                  }
                  v65 = v106;
                  if ( v106 )
                  {
                    if ( *(_DWORD *)&v106[1].dmDeviceName[6] )
                    {
                      v90 = *(_DWORD *)(v43 + 72) | 0x2000000;
                      *(_DWORD *)(v43 + 72) = v90;
                      *(_DWORD *)(v43 + 196) = *(_DWORD *)&v65[1].dmDeviceName[6];
                      if ( v101 )
                      {
                        *(_DWORD *)(v43 + 72) = v90 | 0x4000000;
                        *(_DWORD *)(v43 + 88) = *(_DWORD *)&v65[1].dmDeviceName[8];
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
                  if ( !v92 && v54 != 2 )
                    v12 = v16->dmDisplayFrequency != 0 ? -1073741811 : 1073741839;
                  goto LABEL_98;
                }
                v64 = (unsigned int)v64 | 0x20;
                *(_DWORD *)(v43 + 72) = v64;
              }
              else
              {
                *(_DWORD *)(v43 + 72) = v64 | (v95 != 0 ? 0x20 : 0);
                v12 = 0;
              }
              *(_DWORD *)(v43 + 76) = x;
              *(_DWORD *)(v43 + 80) = v98;
              goto LABEL_94;
            }
            if ( !v93 )
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
            v67 = *((_DWORD *)a1 + 40);
            if ( (v67 & 0x6000000) != 0 )
            {
              if ( v47 )
              {
                v16->dmBitsPerPel = v47[42];
                v16->dmPelsWidth = *(_DWORD *)(*((_QWORD *)a1 + 22) + 172LL);
                v16->dmPelsHeight = *(_DWORD *)(*((_QWORD *)a1 + 22) + 176LL);
                v16->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)a1 + 22) + 184LL);
                v16->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)a1 + 22) + 84LL);
                v16->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)a1 + 22) + 88LL);
                v16->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)a1 + 22) + 180LL);
              }
              goto LABEL_63;
            }
            if ( (v67 & 8) != 0 )
            {
              v12 = *((_DWORD *)a1 + 46) != 0 ? -1073741823 : -1073741776;
              goto LABEL_63;
            }
            v21 = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v46) + 24) + 1232LL) == 0;
            v16->dmBitsPerPel = 0;
            v83 = 8LL * !v21;
            v84 = !v21;
            if ( v93 )
            {
              v85 = (DWORD *)((char *)&unk_1C02A2A20 + v83 + 4);
              while ( 1 )
              {
                v16->dmPelsWidth = *(v85 - 1);
                v16->dmPelsHeight = *v85;
                v86 = GetClosestMode(a1, v16, a7, 1);
                if ( (v86 || (v86 = GetClosestMode(a1, v16, a7, 0)) != 0LL) && v86->dmBitsPerPel > 0x10 )
                  break;
                ++v84;
                v85 += 2;
                if ( v84 >= 3 )
                {
                  if ( !v86 )
                    goto LABEL_197;
                  break;
                }
              }
              v16->dmBitsPerPel = v86->dmBitsPerPel;
              v16->dmPelsWidth = v86->dmPelsWidth;
              v16->dmPelsHeight = v86->dmPelsHeight;
              v16->dmDisplayFrequency = v86->dmDisplayFrequency;
              v16->dmDisplayOrientation = v86->dmDisplayOrientation;
              v16->dmDisplayFixedOutput = v86->dmDisplayFixedOutput;
              v16->dmDisplayFlags = v86->dmDisplayFlags;
            }
            else
            {
              v16->dmPelsWidth = *(_DWORD *)((char *)&unk_1C02A2A20 + v83);
              v16->dmPelsHeight = *(_DWORD *)((char *)&unk_1C02A2A20 + v83 + 4);
            }
LABEL_197:
            v44 = a1;
          }
          v47 = (_DWORD *)v102[0];
LABEL_63:
          v50 = 0;
          v51 = *((_DWORD *)v44 + 47);
          v52 = 0;
          v53 = 0;
          v54 = 0;
          while ( v52 < v51 )
          {
            if ( a7 && *(_DWORD *)(*((_QWORD *)a1 + 24) + 16LL * v52) )
              goto LABEL_231;
            v47 = *(_DWORD **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
            v55 = v16->dmBitsPerPel;
            if ( v55 )
            {
              if ( v55 != v47[42] )
                goto LABEL_231;
            }
            if ( v16->dmPelsWidth != v47[43]
              || v16->dmPelsHeight != v47[44]
              || v16->dmDisplayOrientation != v47[21]
              || v105 && v16->dmDisplayFixedOutput != v47[22] && (v94 == 1 || v53 == 2 && v50 == 2) )
            {
              goto LABEL_231;
            }
            if ( !v45 )
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
            if ( v50 )
            {
              if ( v53 == 2 )
                goto LABEL_114;
            }
            else
            {
              v53 = 0;
              v54 = 0;
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
              v50 = 2;
            }
            if ( v16->dmDisplayFixedOutput == v47[22] || !v105 )
            {
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
              v53 = 2;
              v54 = 0;
LABEL_78:
              v56 = v47 + 46;
              if ( v47[46] == 60 && v47[45] == v16->dmDisplayFlags )
              {
                v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
                v54 = 1;
              }
              goto LABEL_81;
            }
LABEL_114:
            if ( !v54 )
              goto LABEL_78;
            v56 = v47 + 46;
            if ( v54 == 2 )
              goto LABEL_231;
LABEL_81:
            v57 = *v56;
            if ( *v56 == 1 && v16->dmDisplayFrequency == 64 && v47[45] == v16->dmDisplayFlags )
            {
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
              v54 = 2;
LABEL_221:
              v50 = 2;
              goto LABEL_231;
            }
            v58 = v16->dmDisplayFrequency;
            if ( v57 != v58 )
            {
              if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
                goto LABEL_221;
              if ( v16->dmDriverExtra + v16->dmSize != 244 || v58 || v96 != v57 )
              {
                v50 = 2;
                goto LABEL_231;
              }
            }
            v50 = 2;
            if ( v47[45] == v16->dmDisplayFlags )
            {
              v54 = 2;
              v45 = *(struct _devicemodeW **)(*((_QWORD *)a1 + 24) + 16LL * v52 + 8);
              if ( v53 == 2 || !v16->dmDisplayFixedOutput && (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
              {
                v92 = 1;
                break;
              }
            }
LABEL_231:
            ++v52;
          }
          if ( v45 )
          {
            v44 = a1;
            goto LABEL_88;
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v43);
LABEL_98:
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v108);
          goto LABEL_99;
        }
        if ( Srca )
        {
          v82 = (char *)v13 + v91;
        }
        else
        {
          if ( !v16->dmDriverExtra )
            goto LABEL_55;
          v82 = (char *)v16 + v16->dmSize;
        }
        memmove(
          (void *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 220),
          v82,
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
