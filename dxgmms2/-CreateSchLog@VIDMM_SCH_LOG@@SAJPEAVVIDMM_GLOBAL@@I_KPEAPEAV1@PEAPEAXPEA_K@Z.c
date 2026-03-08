/*
 * XREFs of ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C004CECC
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0045370 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004CE98 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z @ 0x1C004D63C (-RegisterSchLog@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_SCH_LOG@@@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0095578 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C009EC00 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00A6558 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C00AE384 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 */

__int64 __fastcall VIDMM_SCH_LOG::CreateSchLog(
        struct VIDMM_GLOBAL *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_SCH_LOG **a4,
        void **a5,
        unsigned __int64 *a6)
{
  struct VIDMM_SCH_LOG **v6; // r13
  __int64 v7; // r12
  SIZE_T v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // eax
  struct _MDL *Mdl; // rax
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  CVirtualAddressAllocator *VirtualAddressAllocator; // r12
  unsigned __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v25; // [rsp+70h] [rbp-B8h] BYREF
  SIZE_T v26; // [rsp+78h] [rbp-B0h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v28[19]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+130h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+138h] [rbp+10h]
  SIZE_T v31; // [rsp+140h] [rbp+18h] BYREF
  struct VIDMM_SCH_LOG **v32; // [rsp+148h] [rbp+20h]

  v32 = a4;
  v30 = a2;
  v6 = a4;
  v7 = a2;
  v9 = (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v25 = 0LL;
  memset(v28, 0, 0x58uLL);
  v10 = 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27,
    (struct DXGPUSHLOCKFAST *)(*(_QWORD *)this + 32LL));
  if ( *(_DWORD *)(*(_QWORD *)this + 24LL) == 1 )
  {
    v12 = *((_QWORD *)this + 5028) + 1616 * v7;
    if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() && *(char *)(v12 + 444) < 0 )
    {
      LODWORD(v11) = -1073741637;
LABEL_6:
      v6 = v32;
      goto LABEL_31;
    }
    v13 = operator new(96LL, 0x65356956u, 256LL);
    v10 = v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      *(_OWORD *)(v13 + 8) = 0LL;
      *(_DWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_QWORD *)(v13 + 56) = 0LL;
      *(_QWORD *)(v13 + 64) = 0LL;
      *(_QWORD *)(v13 + 72) = 0LL;
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_BYTE *)(v13 + 88) = 0;
    }
    else
    {
      v10 = 0LL;
    }
    v29 = v10;
    if ( !v10 )
    {
LABEL_11:
      LODWORD(v11) = -1073741801;
      goto LABEL_6;
    }
    *(_QWORD *)v10 = this;
    *(_DWORD *)(v10 + 24) = v7;
    *(_QWORD *)(v10 + 32) = v9;
    v31 = v9;
    v14 = MmCreateSection(v10 + 40, 0LL, 0LL, &v31, 4, 0x8000000, 0LL, 0LL);
    v11 = v14;
    if ( v14 < 0 )
    {
      _InterlockedIncrement(&dword_1C00768F8);
      WdLogSingleEntry1(6LL, v14);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to create section for VidMm scheduler log, Status=0x%.8x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_6;
    }
    v26 = v9;
    LODWORD(v11) = MmMapViewInSystemSpaceEx(*(_QWORD *)(v10 + 40), v10 + 48, &v26, &v25, 0LL);
    if ( (int)v11 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076894);
      WdLogSingleEntry1(6LL, 140LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to map view of section for VidMm scheduler log",
        140LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_6;
    }
    Mdl = VidMmiAllocateMdl(*(PVOID *)(v10 + 48), v9);
    *(_QWORD *)(v10 + 72) = Mdl;
    if ( !Mdl )
    {
      _InterlockedIncrement(&dword_1C00768FC);
      WdLogSingleEntry1(6LL, 149LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate Mdl for VidMm scheduler log",
        149LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_11;
    }
    MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
    *(_BYTE *)(v10 + 88) = 1;
    if ( (*(_BYTE *)(v12 + 444) & 4) == 0 )
    {
      v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))DxgCoreInterface[88])(
              *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
              *(_QWORD *)(v10 + 32),
              v10,
              v10 + 80);
      LODWORD(v11) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(3LL, v16);
        goto LABEL_6;
      }
    }
    v17 = VIDMM_GLOBAL::AdapterId(this);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v17, v7);
    if ( VirtualAddressAllocator )
    {
      v29 = 0LL;
      LODWORD(v11) = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
                       VirtualAddressAllocator,
                       v9,
                       v18,
                       *((_QWORD *)this + 5118),
                       *((_QWORD *)this + 5119),
                       0x1000u,
                       &v29);
      if ( (int)v11 < 0 )
        goto LABEL_29;
      v20 = v29;
      *(_QWORD *)(v10 + 56) = v29;
      v21 = v30;
      v22 = CVirtualAddressAllocator::MapVirtualAddressRange(
              VirtualAddressAllocator,
              v10,
              0LL,
              7LL,
              v9,
              v20,
              0LL,
              0LL,
              4096,
              17LL,
              0LL,
              v30,
              0LL,
              0,
              v25);
      if ( !v22 )
      {
        WdLogSingleEntry0(3LL);
        LODWORD(v11) = -1073741823;
        goto LABEL_6;
      }
      *(_QWORD *)(v10 + 64) = v22;
      LODWORD(v28[0]) = 113;
      v28[6] = v22;
      v28[5] = VirtualAddressAllocator;
      HIDWORD(v28[0]) = v21;
      v23 = ((__int64 (__fastcall *)(_QWORD))DxgCoreInterface[90])(*(_QWORD *)(v10 + 80));
      VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)&v28[7], *(struct _MDL **)(v10 + 72), v23);
      LODWORD(v11) = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v28, 1);
      if ( (int)v11 < 0 )
      {
LABEL_29:
        WdLogSingleEntry0(3LL);
        goto LABEL_6;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 193LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get VA allocator for the system process",
        193LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27);
    LODWORD(v11) = VIDMM_GLOBAL::RegisterSchLog(this, (struct VIDMM_SCH_LOG *)v10);
    if ( (int)v11 >= 0 )
    {
      VIDMM_PROCESS::OpenAdapter(g_pVidMmSystemProcess, this);
      *v32 = (struct VIDMM_SCH_LOG *)v10;
      *a5 = *(void **)(v10 + 48);
      *a6 = *(_QWORD *)(v10 + 56);
      goto LABEL_34;
    }
    goto LABEL_29;
  }
  LODWORD(v11) = -1073741801;
LABEL_31:
  if ( v10 )
    VIDMM_SCH_LOG::`scalar deleting destructor'((VIDMM_SCH_LOG *)v10);
  *v6 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
LABEL_34:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27);
  return (unsigned int)v11;
}
