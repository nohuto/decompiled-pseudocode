/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009B30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C00477C4 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C0047864 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C01B77BC (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01DCC7C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C031E10C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C038202C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *Pool2; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r15
  DXGCONTEXT *v17; // rax
  __int64 v18; // r11
  __int64 v19; // r10
  char v20; // di
  unsigned int v21; // r8d
  ADAPTER_RENDER **v22; // r9
  ADAPTER_RENDER *v23; // rcx
  __int64 v24; // rdx
  char v25; // al
  int v26; // eax
  struct _LOOKASIDE_LIST_EX *v27; // rax
  NTSTATUS v28; // eax
  __int64 Value; // r8
  __int64 v30; // rax
  char v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // al
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  int v38; // edx
  unsigned int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  SIZE_T *v44; // r14
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // r14d
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v50; // rax
  int v51; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v55; // rax
  struct DXGGLOBAL *v56; // rax
  __int64 v57; // r14
  unsigned __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rbx
  __int64 result; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD *v64; // rdx
  _QWORD *v65; // r8
  _QWORD *v66; // rax
  int v67; // eax
  enum _D3DKMT_CLIENTHINT v68; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v69; // ebx
  unsigned int v70; // esi
  unsigned int v71; // r14d
  __int64 v72; // rcx
  unsigned int v73; // edi
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v76; // rbx
  const wchar_t *v77; // r9
  __int64 v78; // r14
  unsigned __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rbx
  unsigned int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  bool v87; // al
  __m128i v88; // xmm1
  __m128i v89; // xmm1
  __m128i v90; // xmm1
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  int v94; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v95; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-188h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-188h]
  __int64 Flagsb; // [rsp+20h] [rbp-188h]
  SIZE_T Size; // [rsp+28h] [rbp-180h]
  SIZE_T Sizea; // [rsp+28h] [rbp-180h]
  ULONG Tag[2]; // [rsp+30h] [rbp-178h]
  ULONG Taga[2]; // [rsp+30h] [rbp-178h]
  USHORT Depth[4]; // [rsp+38h] [rbp-170h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-170h]
  void *v108; // [rsp+40h] [rbp-168h]
  void *v109; // [rsp+40h] [rbp-168h]
  __int64 v110; // [rsp+80h] [rbp-128h]
  unsigned int v111; // [rsp+80h] [rbp-128h]
  __int64 v112; // [rsp+80h] [rbp-128h]
  _OWORD v115[3]; // [rsp+C0h] [rbp-E8h] BYREF
  _DXGKARG_CREATECONTEXT v116; // [rsp+F0h] [rbp-B8h] BYREF
  __m256i v117; // [rsp+140h] [rbp-68h] BYREF

  v5 = (_QWORD *)((char *)this + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v110 = v6;
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 98));
  if ( *(int *)(v6 + 2552) >= 9472 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1265072196LL);
    *((_QWORD *)this + 60) = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry1(6LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"DXGCONTEXT (0x%p) failed to allocate m_pDxgkrnlContextHandle",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *Pool2 = this;
  }
  if ( *((_BYTE *)this + 441) && !*((_BYTE *)this + 438) )
  {
    WdLogSingleEntry1(2LL, 911LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The physical adapter requres GpuVaIoMmu but a non-virtual context is created",
      911LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v117, Current);
  v10 = HMGRTABLE::AllocHandle((unsigned int *)(*(_QWORD *)(*v5 + 40LL) + 280LL), (__int64)this, 7, 0, 0);
  v11 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v117);
    return 3221225495LL;
  }
  v12 = *(_QWORD *)(*v5 + 40LL);
  v13 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *(_DWORD *)(v12 + 296) )
  {
    v14 = *(_QWORD *)(v12 + 280);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( (unsigned int)v11 >> 30 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
      *(_DWORD *)(v14 + 16 * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v117);
  if ( *(_BYTE *)(v6 + 209) )
  {
    *((_BYTE *)this + 442) = 1;
    v68 = *((_DWORD *)this + 36);
    v69.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 101);
    v70 = *((_DWORD *)this + 99);
    v71 = *((_DWORD *)this + 98);
    v72 = *((_QWORD *)this + 2);
    v73 = *(_DWORD *)(v72 + 472);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v72 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v110 + 4472),
                       HostProcess,
                       v73,
                       v71,
                       v70,
                       v69,
                       v68,
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v78 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v79 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v78 + 248));
      v80 = ((unsigned int)v79 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v80 < *(_DWORD *)(v78 + 296) )
      {
        v81 = *(_QWORD *)(v78 + 280);
        if ( (((unsigned int)v79 >> 25) & 0x60) == (*(_BYTE *)(v81 + 16 * v80 + 8) & 0x60)
          && (*(_DWORD *)(v81 + 16 * v80 + 8) & 0x1F) != 0 )
        {
          v82 = 2 * ((v79 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v81 + 8 * v82 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 217LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              217LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v78 + 280) + 8 * v82 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v78 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v78 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v83 = *((_DWORD *)this + 6);
        v117 = *(__m256i *)((char *)this + 200);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v109) = v117.m256i_i32[2];
          *(_DWORD *)Deptha = v117.m256i_i32[1];
          Taga[0] = v117.m256i_i32[0];
          LODWORD(Sizea) = *((_DWORD *)this + 99);
          Flagsa[0] = *((_DWORD *)this + 98);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            HIDWORD(v117.m256i_i64[0]),
            &EventCreateContext,
            v117.m256i_i64[0],
            *((_QWORD *)this + 2),
            *(_QWORD *)Flagsa,
            Sizea,
            *(_QWORD *)Taga,
            *(_QWORD *)Deptha,
            v109,
            v117.m256i_i32[3],
            v117.m256i_i32[4],
            0,
            this,
            v83,
            0LL);
        }
      }
      return 0LL;
    }
    v76 = 955LL;
    WdLogSingleEntry1(2LL, 955LL);
    v77 = L"Failed to create context on the host";
    goto LABEL_122;
  }
  LODWORD(v16) = 0;
  memset(&v116, 0, sizeof(v116));
  if ( *(int *)(v6 + 2552) < 9472 )
    v17 = this;
  else
    v17 = (DXGCONTEXT *)*((_QWORD *)this + 60);
  *((_QWORD *)this + 24) = v17;
  v116.hContext = v17;
  v18 = *((unsigned int *)this + 98);
  v116.NodeOrdinal = *((_DWORD *)this + 98);
  v116.EngineAffinity = *((_DWORD *)this + 99);
  v116.pPrivateDriverData = a2;
  v116.PrivateDriverDataSize = a3;
  v19 = *v5;
  if ( (*(_BYTE *)(*v5 + 1901LL) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v116.Flags.Value |= 2u;
  v20 = *((_BYTE *)this + 438);
  v116.Flags.Value ^= (*(_BYTE *)&v116.Flags.0 ^ (unsigned __int8)(4 * v20)) & 4;
  v21 = *((_DWORD *)this + 101);
  v22 = (ADAPTER_RENDER **)(v19 + 16);
  if ( (v21 & 8) != 0 )
  {
    v21 &= ~0x10u;
    *((_DWORD *)this + 101) = v21;
    goto LABEL_21;
  }
  v23 = *v22;
  if ( (v21 & 0x10) == 0 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 2808LL) + 344LL * *((unsigned int *)this + 100) + 32);
    if ( v24 )
      v25 = *(_BYTE *)(74 * v18 + v24 + 68) & 1;
    else
      v25 = 0;
    if ( !v25 )
      goto LABEL_21;
    v76 = 1054LL;
    WdLogSingleEntry1(2LL, 1054LL);
    v77 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
LABEL_122:
    Flagsb = v76;
    goto LABEL_125;
  }
  v84 = *((_QWORD *)v23 + 2);
  if ( *(int *)(v84 + 2820) < 2500 )
  {
    WdLogSingleEntry1(2LL, 1024LL);
    Flagsb = 1024LL;
    v77 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
    goto LABEL_125;
  }
  v112 = 344LL * *((unsigned int *)this + 100);
  v85 = *(_QWORD *)(v112 + *(_QWORD *)(v84 + 2808) + 32);
  if ( !v85 || (*(_BYTE *)(74 * v18 + v85 + 68) & 1) == 0 )
  {
    v76 = 1030LL;
    WdLogSingleEntry1(2LL, 1030LL);
    v77 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
    goto LABEL_122;
  }
  if ( !v20 )
  {
    v76 = 1036LL;
    WdLogSingleEntry1(2LL, 1036LL);
    v77 = L"Only virtual contexts can use HwQueueSupported flag";
    goto LABEL_122;
  }
  if ( v21 >= 0x40 )
  {
    v76 = 1042LL;
    WdLogSingleEntry1(2LL, 1042LL);
    v77 = L"Context is setting non-zero Reserved flags at the creation time.";
    goto LABEL_122;
  }
  v116.Flags.Value |= 0x10u;
  v86 = *(_QWORD *)(v112 + *(_QWORD *)(*((_QWORD *)*v22 + 2) + 2808LL) + 32);
  if ( v86 )
    v87 = (*(_BYTE *)(v86 + 74 * v18 + 68) & 2) != 0;
  else
    v87 = 0;
  *((_BYTE *)this + 296) = v87;
LABEL_21:
  if ( (*(_DWORD *)(*((_QWORD *)*v22 + 2) + 2280LL) & 1) == 0 )
  {
    v116.hContext = *(HANDLE *)(v19 + 616);
    v88 = *(__m128i *)(v19 + 624);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 640);
    v116.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v88);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 640);
    v116.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v19 + 624));
    v89 = *(__m128i *)(v19 + 624);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 640);
    v116.ContextInfo.AllocationListSize = _mm_srli_si128(v89, 8).m128i_u32[1];
    *(_OWORD *)v117.m256i_i8 = *(_OWORD *)(v19 + 624);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 640);
    v116.ContextInfo.PatchLocationListSize = v117.m256i_u32[4];
    v90 = *(__m128i *)(v19 + 624);
    v117.m256i_i64[2] = *(_QWORD *)(v19 + 640);
    v116.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(v90, 8));
    *((_DWORD *)this + 10) &= ~1u;
    goto LABEL_27;
  }
  if ( (v21 & 0x20) == 0 )
  {
    if ( (v21 & 8) != 0 )
    {
      v116.hContext = 0LL;
    }
    else
    {
      v26 = ADAPTER_RENDER::DdiCreateContext(*v22, *(void **)(v19 + 616), &v116);
      v16 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(2LL, v26);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateContext() failed with status 0x%I64x",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
        v5 = (_QWORD *)((char *)this + 16);
      }
    }
    goto LABEL_26;
  }
  result = CheckNoKmdAccessPrivateData(a3, a2, 0xFF000003);
  LODWORD(v16) = result;
  if ( (int)result >= 0 )
  {
    v116.hContext = 0LL;
    v116.ContextInfo.DmaBufferPrivateDataSize = 264;
    v116.ContextInfo.AllocationListSize = 128;
    v116.ContextInfo.PatchLocationListSize = 128;
    v116.ContextInfo.DmaBufferSize = 1024;
LABEL_26:
    *((_DWORD *)this + 10) |= 1u;
LABEL_27:
    if ( (int)v16 < 0 )
      return (unsigned int)v16;
    if ( (*(_DWORD *)(*v5 + 464LL) == 2 || *((_DWORD *)this + 36) == 2) && v116.ContextInfo.AllocationListSize != 256 )
    {
      WdLogSingleEntry2(3LL, 256LL, v116.ContextInfo.AllocationListSize);
      v116.ContextInfo.AllocationListSize = 256;
    }
    *((_QWORD *)this + 23) = v116.hContext;
    *(DXGK_CONTEXTINFO *)((char *)this + 200) = v116.ContextInfo;
    if ( !*((_DWORD *)this + 52) )
      goto LABEL_33;
    v27 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x64507844u, 64LL);
    *((_QWORD *)this + 62) = v27;
    if ( v27 )
    {
      v28 = ExInitializeLookasideListEx(
              v27,
              0LL,
              0LL,
              (POOL_TYPE)512,
              0,
              (unsigned int)(*((_DWORD *)this + 52) + 16),
              0x64507844u,
              0);
      v16 = v28;
      if ( v28 >= 0 )
      {
LABEL_33:
        Value = v116.ContextInfo.Caps.Value;
        if ( (*(_BYTE *)&v116.ContextInfo.Caps.0 & 2) != 0 )
        {
          v30 = *v5;
          *(_BYTE *)(v30 + 1903) = 1;
          *(_BYTE *)(*(_QWORD *)(v30 + 40) + 337LL) = 1;
          Value = v116.ContextInfo.Caps.Value;
        }
        v31 = *((_BYTE *)this + 438);
        if ( v31 )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 16LL) + 2808LL)
                          + 344LL * *((unsigned int *)this + 100)
                          + 32);
          v33 = *((unsigned int *)this + 98);
          if ( v32 )
            LOBYTE(v22) = *(_BYTE *)(74 * v33 + v32 + 73);
          else
            LOBYTE(v22) = 0;
          if ( v32 )
            v34 = *(_BYTE *)(74 * v33 + v32 + 72) != 0;
          else
            v34 = 0;
          if ( *((_BYTE *)this + 441) )
          {
            if ( (Value & 4) != 0 )
            {
              WdLogSingleEntry1(3LL, 1175LL);
              return 3221225473LL;
            }
          }
          else if ( (Value & 4) != 0 || (_BYTE)v22 && !v34 )
          {
            if ( !(_BYTE)v22 )
            {
              WdLogSingleEntry1(3LL, 1184LL);
              return 3221225473LL;
            }
            *((_BYTE *)this + 439) = 1;
          }
          else
          {
            *((_BYTE *)this + 440) = 1;
          }
        }
        if ( !v31 && !*((_DWORD *)this + 50) )
        {
          WdLogSingleEntry1(1LL, 1195LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_bUseGpuVa || m_ContextInfo.DmaBufferSize",
            1195LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !*((_BYTE *)this + 438) )
        {
          if ( !*((_DWORD *)this + 53) )
          {
            WdLogSingleEntry1(1LL, 1196LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_bUseGpuVa || m_ContextInfo.AllocationListSize",
              1196LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( !*((_BYTE *)this + 438) && !*((_DWORD *)this + 54) )
          {
            WdLogSingleEntry1(1LL, 1197LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_bUseGpuVa || m_ContextInfo.PatchLocationListSize",
              1197LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        if ( bTracingEnabled )
        {
          v35 = *((unsigned int *)this + 6);
          v117 = *(__m256i *)((char *)this + 200);
          v22 = (ADAPTER_RENDER **)*((unsigned int *)this + 98);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v108) = v117.m256i_i32[2];
            *(_DWORD *)Depth = v117.m256i_i32[1];
            Tag[0] = v117.m256i_i32[0];
            LODWORD(Size) = *((_DWORD *)this + 99);
            Flags[0] = *((_DWORD *)this + 98);
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              HIDWORD(v117.m256i_i64[0]),
              &EventCreateContext,
              v117.m256i_i64[0],
              *v5,
              *(_QWORD *)Flags,
              Size,
              *(_QWORD *)Tag,
              *(_QWORD *)Depth,
              v108,
              v117.m256i_i32[3],
              v117.m256i_i32[4],
              0,
              this,
              v35,
              0LL);
          }
        }
        v36 = *v5;
        if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
        {
          v117.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v117.m256i_i64[1] + 4) = 0LL;
          v117.m256i_i32[6] = 0;
          v117.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v36 + 40) + 432LL);
          v117.m256i_i32[1] = *((_DWORD *)this + 98);
          v117.m256i_i32[2] = *((_DWORD *)this + 100);
          v117.m256i_i32[0] = 2
                            * (*((_DWORD *)this + 101) & 1 | (4
                                                            * (*((_DWORD *)this + 101) & 4 | (16
                                                                                            * (*((_DWORD *)this + 101) & 0x28 | 0x11)))));
          v92 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, ADAPTER_RENDER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 736LL) + 8LL)
                                                                                               + 224LL))(
                  this,
                  &v117,
                  Value,
                  v22);
          *((_QWORD *)this + 35) = v92;
          if ( v92 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              McTemplateK0pppp_EtwWriteTransfer(
                v92,
                v91,
                v93,
                this,
                v92,
                *((_QWORD *)this + 23),
                *((_QWORD *)this + 24));
            memset(v115, 0, sizeof(v115));
            v94 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 736LL)
                                                                                          + 8LL)
                                                                              + 232LL))(
                    0LL,
                    *((_QWORD *)this + 35),
                    v115,
                    (char *)this + 288);
            v111 = v94;
            if ( v94 < 0 )
            {
              WdLogSingleEntry2(3LL, this, v94);
              return v111;
            }
LABEL_58:
            if ( !*((_BYTE *)this + 438) || *(_DWORD *)(*v5 + 464LL) == 2 || *((_DWORD *)this + 36) == 2 )
            {
              v67 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
              v49 = v67;
              if ( v67 < 0 )
              {
                v46 = v67;
LABEL_176:
                WdLogSingleEntry2(3LL, this, v46);
                return v49;
              }
            }
            v44 = (SIZE_T *)((char *)this + 48);
            *((_QWORD *)this + 6) = *((unsigned int *)this + 50);
            *((_DWORD *)this + 18) = *((_DWORD *)this + 53);
            *((_DWORD *)this + 26) = *((_DWORD *)this + 54);
            if ( *((_BYTE *)this + 438) )
            {
              if ( *((_QWORD *)this + 44) )
              {
                WdLogSingleEntry1(1LL, 1338LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL == m_pCommandDmaBuffer",
                  1338LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 16LL) + 436LL) & 0x10) != 0 && a2 && a3 == 16 )
              {
                VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
                v51 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
                        -1LL,
                        (char *)this + 56,
                        0LL,
                        (char *)this + 48,
                        12288,
                        4);
                v111 = v51;
                if ( v51 < 0 )
                  goto LABEL_174;
                v64 = (_QWORD *)a2[1];
                v65 = (_QWORD *)*a2;
                v66 = v64;
                if ( (unsigned __int64)v64 >= MmUserProbeAddress )
                  v66 = (_QWORD *)MmUserProbeAddress;
                if ( !v64 || *v66 < 8uLL || !v65 )
                {
                  WdLogSingleEntry2(3LL, this, -1073741811LL);
                  return 3221225485LL;
                }
                if ( (unsigned __int64)v65 >= MmUserProbeAddress )
                  v65 = (_QWORD *)MmUserProbeAddress;
                *v65 = *((_QWORD *)this + 7);
                if ( (unsigned __int64)v64 >= MmUserProbeAddress )
                  v64 = (_QWORD *)MmUserProbeAddress;
                *v64 = *v44;
              }
            }
            else
            {
              v95 = DxgkGetVirtualMemoryInterface();
              v51 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v95)(
                      -1LL,
                      (char *)this + 56,
                      0LL,
                      (char *)this + 48,
                      12288,
                      4);
              v111 = v51;
              if ( v51 < 0 )
                goto LABEL_174;
              Global = DXGGLOBAL::GetGlobal();
              if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                     (struct DXGGLOBAL *)((char *)Global + 1684),
                     *(struct DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
              {
                v97 = ExAllocatePool2(256LL, *v44, 1265072196LL);
                *((_QWORD *)this + 8) = v97;
                if ( !v97 )
                {
LABEL_180:
                  WdLogSingleEntry3(3LL, this, *v44, -1073741801LL);
                  return 3221225495LL;
                }
              }
            }
            v45 = *((unsigned int *)this + 18);
            if ( !(_DWORD)v45 )
            {
LABEL_71:
              v52 = *((unsigned int *)this + 26);
              if ( !(_DWORD)v52 )
              {
LABEL_78:
                v57 = *(_QWORD *)(*v5 + 40LL);
                v58 = *((unsigned int *)this + 6);
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v57 + 248));
                v59 = ((unsigned int)v58 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v59 < *(_DWORD *)(v57 + 296) )
                {
                  v60 = *(_QWORD *)(v57 + 280);
                  if ( (((unsigned int)v58 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16 * v59 + 8) & 0x60)
                    && (*(_DWORD *)(v60 + 16 * v59 + 8) & 0x1F) != 0 )
                  {
                    v61 = 2 * ((v58 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v60 + 8 * v61 + 8) & 0x2000) == 0 )
                    {
                      WdLogSingleEntry1(1LL, 217LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                        217LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    *(_DWORD *)(*(_QWORD *)(v57 + 280) + 8 * v61 + 8) &= ~0x2000u;
                  }
                }
                *(_QWORD *)(v57 + 256) = 0LL;
                ExReleasePushLockExclusiveEx(v57 + 248, 0LL);
                KeLeaveCriticalRegion();
                return 0LL;
              }
              v46 = (unsigned int)v52;
              v53 = 24 * v52;
              v54 = 0xFFFFFFFFLL;
              if ( v53 <= 0xFFFFFFFF )
                v54 = (unsigned int)v53;
              v49 = v53 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( v53 > 0xFFFFFFFF )
                goto LABEL_176;
              v44 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = v54;
              v55 = DxgkGetVirtualMemoryInterface();
              v51 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v55)(
                      -1LL,
                      (char *)this + 120,
                      0LL,
                      (char *)this + 112,
                      12288,
                      4);
              v111 = v51;
              if ( v51 >= 0 )
              {
                *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v44, 4u);
                if ( *((_QWORD *)this + 17) )
                {
                  v56 = DXGGLOBAL::GetGlobal();
                  if ( !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)v56 + 1684),
                          *(struct DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
                    goto LABEL_78;
                  v98 = ExAllocatePool2(256LL, *v44, 1265072196LL);
                  *((_QWORD *)this + 16) = v98;
                  if ( v98 )
                    goto LABEL_78;
                  goto LABEL_180;
                }
                goto LABEL_113;
              }
              goto LABEL_174;
            }
            v46 = (unsigned int)v45;
            v47 = 8 * v45;
            v48 = 0xFFFFFFFFLL;
            if ( v47 <= 0xFFFFFFFF )
              v48 = (unsigned int)v47;
            v49 = v47 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v47 > 0xFFFFFFFF )
              goto LABEL_176;
            v44 = (SIZE_T *)((char *)this + 80);
            *((_QWORD *)this + 10) = v48;
            v50 = DxgkGetVirtualMemoryInterface();
            v51 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v50)(
                    -1LL,
                    (char *)this + 88,
                    0LL,
                    (char *)this + 80,
                    12288,
                    4);
            v111 = v51;
            if ( v51 >= 0 )
            {
              *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v44, 4u);
              if ( !*((_QWORD *)this + 12) )
              {
LABEL_113:
                WdLogSingleEntry2(3LL, this, -1073741801LL);
                return 3221225495LL;
              }
              goto LABEL_71;
            }
LABEL_174:
            WdLogSingleEntry3(3LL, this, *v44, v51);
            return v111;
          }
LABEL_173:
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          return 3221225495LL;
        }
        memset(&v117, 0, 24);
        v117.m256i_i32[3] = 0;
        *(__int64 *)((char *)&v117.m256i_i64[2] + 4) = *(unsigned int *)(*(_QWORD *)(v36 + 40) + 432LL);
        v117.m256i_i32[1] = *((_DWORD *)this + 98);
        v117.m256i_i32[2] = *((_DWORD *)this + 100);
        v37 = 2 * (*((_DWORD *)this + 101) & 1 | ((*((_DWORD *)this + 101) & 0x20) << 6));
        v117.m256i_i32[0] = v37;
        if ( *((_BYTE *)this + 438) )
          v117.m256i_i32[0] = v37 | 0x80;
        if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
        {
LABEL_55:
          v42 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16)
                                                                                           + 736LL)
                                                                               + 8LL)
                                                                   + 216LL))(
                  this,
                  &v117);
          *((_QWORD *)this + 32) = v42;
          if ( v42 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              McTemplateK0pppp_EtwWriteTransfer(
                v42,
                v41,
                v43,
                this,
                v42,
                *((_QWORD *)this + 23),
                *((_QWORD *)this + 24));
            goto LABEL_58;
          }
          goto LABEL_173;
        }
        if ( v39 < 0x40 )
        {
          v117.m256i_i32[0] = v38 & 0xFFFFFBDF | (8 * (v39 & 4 | (16 * (v39 & 8))));
          goto LABEL_55;
        }
        WdLogSingleEntry1(2LL, 1285LL);
        Flagsb = 1285LL;
        v77 = L"Context is setting non-zero Reserved flags at the creation time.";
LABEL_125:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v77, Flagsb, 0LL, 0LL, 0LL, 0LL);
        return 3221225473LL;
      }
      WdLogSingleEntry1(2LL, v28);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to initialize lookaside list for private driver data 0x%x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      operator delete(*((void **)this + 62));
      *((_QWORD *)this + 62) = 0LL;
      return (unsigned int)v16;
    }
    WdLogSingleEntry1(2LL, 1139LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate lookaside list for private driver data",
      1139LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
