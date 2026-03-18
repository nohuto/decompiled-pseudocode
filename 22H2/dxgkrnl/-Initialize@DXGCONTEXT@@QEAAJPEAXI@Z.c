/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C018E504
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C018F760 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0004A80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0004AAC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0004D30 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C0048824 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C00488C4 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C018D43C (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C01E9B5C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0322B4C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0344C50 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C038689C (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *a2, unsigned int a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *Pool2; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 v15; // r15
  DXGCONTEXT *v16; // rax
  __int64 v17; // r11
  __int64 v18; // r10
  char v19; // di
  unsigned int v20; // r8d
  ADAPTER_RENDER **v21; // r9
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rdx
  char v24; // al
  int v25; // eax
  struct _LOOKASIDE_LIST_EX *v26; // rax
  NTSTATUS v27; // eax
  __int64 Value; // r8
  __int64 v29; // rax
  char v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // al
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // edx
  unsigned int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  SIZE_T *v43; // r14
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // r14d
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v49; // rax
  int v50; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v54; // rax
  struct DXGGLOBAL *v55; // rax
  __int64 v56; // r14
  unsigned __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rbx
  __int64 result; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _QWORD *v63; // rdx
  _QWORD *v64; // r8
  _QWORD *v65; // rax
  int v66; // eax
  enum _D3DKMT_CLIENTHINT v67; // r15d
  struct _D3DDDI_CREATECONTEXTFLAGS v68; // ebx
  unsigned int v69; // esi
  unsigned int v70; // r14d
  __int64 v71; // rcx
  unsigned int v72; // edi
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v75; // rbx
  const wchar_t *v76; // r9
  __int64 v77; // r14
  unsigned __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rbx
  unsigned int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rcx
  bool v86; // al
  __m128i v87; // xmm1
  __m128i v88; // xmm1
  __m128i v89; // xmm1
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v94; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-188h]
  ULONG Flagsa[2]; // [rsp+20h] [rbp-188h]
  __int64 Flagsb; // [rsp+20h] [rbp-188h]
  SIZE_T Size; // [rsp+28h] [rbp-180h]
  SIZE_T Sizea; // [rsp+28h] [rbp-180h]
  ULONG Tag[2]; // [rsp+30h] [rbp-178h]
  ULONG Taga[2]; // [rsp+30h] [rbp-178h]
  USHORT Depth[4]; // [rsp+38h] [rbp-170h]
  USHORT Deptha[4]; // [rsp+38h] [rbp-170h]
  void *v107; // [rsp+40h] [rbp-168h]
  void *v108; // [rsp+40h] [rbp-168h]
  __int64 v109; // [rsp+80h] [rbp-128h]
  unsigned int v110; // [rsp+80h] [rbp-128h]
  __int64 v111; // [rsp+80h] [rbp-128h]
  _OWORD v114[3]; // [rsp+C0h] [rbp-E8h] BYREF
  _DXGKARG_CREATECONTEXT v115; // [rsp+F0h] [rbp-B8h] BYREF
  __m256i v116; // [rsp+140h] [rbp-68h] BYREF

  v5 = (_QWORD *)((char *)this + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  v109 = v6;
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
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v116, Current);
  v9 = HMGRTABLE::AllocHandle(*(_QWORD *)(*v5 + 40LL) + 280LL, this, 7LL, 0LL, 0);
  v10 = v9;
  *((_DWORD *)this + 6) = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v116);
    return 3221225495LL;
  }
  v11 = *(_QWORD *)(*v5 + 40LL);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 296) )
  {
    v13 = *(_QWORD *)(v11 + 280);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (unsigned int)v10 >> 30 == ((v14 >> 5) & 3) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v116);
  if ( *(_BYTE *)(v6 + 209) )
  {
    *((_BYTE *)this + 442) = 1;
    v67 = *((_DWORD *)this + 36);
    v68.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)this + 101);
    v69 = *((_DWORD *)this + 99);
    v70 = *((_DWORD *)this + 98);
    v71 = *((_QWORD *)this + 2);
    v72 = *(_DWORD *)(v71 + 472);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v71 + 40));
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v109 + 4472),
                       HostProcess,
                       v72,
                       v70,
                       v69,
                       v68,
                       v67,
                       a3,
                       a2);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v77 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v78 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v77 + 248));
      v79 = ((unsigned int)v78 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v79 < *(_DWORD *)(v77 + 296) )
      {
        v80 = *(_QWORD *)(v77 + 280);
        if ( (((unsigned int)v78 >> 25) & 0x60) == (*(_BYTE *)(v80 + 16 * v79 + 8) & 0x60)
          && (*(_DWORD *)(v80 + 16 * v79 + 8) & 0x1F) != 0 )
        {
          v81 = 2 * ((v78 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v80 + 8 * v81 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry1(1LL, 222LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              222LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v77 + 280) + 8 * v81 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v77 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v77 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v82 = *((_DWORD *)this + 6);
        v116 = *(__m256i *)((char *)this + 200);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          LODWORD(v108) = v116.m256i_i32[2];
          *(_DWORD *)Deptha = v116.m256i_i32[1];
          Taga[0] = v116.m256i_i32[0];
          LODWORD(Sizea) = *((_DWORD *)this + 99);
          Flagsa[0] = *((_DWORD *)this + 98);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            HIDWORD(v116.m256i_i64[0]),
            &EventCreateContext,
            v116.m256i_i64[0],
            *((_QWORD *)this + 2),
            *(_QWORD *)Flagsa,
            Sizea,
            *(_QWORD *)Taga,
            *(_QWORD *)Deptha,
            v108,
            v116.m256i_i32[3],
            v116.m256i_i32[4],
            0,
            this,
            v82,
            0LL);
        }
      }
      return 0LL;
    }
    v75 = 955LL;
    WdLogSingleEntry1(2LL, 955LL);
    v76 = L"Failed to create context on the host";
    goto LABEL_122;
  }
  LODWORD(v15) = 0;
  memset(&v115, 0, sizeof(v115));
  if ( *(int *)(v6 + 2552) < 9472 )
    v16 = this;
  else
    v16 = (DXGCONTEXT *)*((_QWORD *)this + 60);
  *((_QWORD *)this + 24) = v16;
  v115.hContext = v16;
  v17 = *((unsigned int *)this + 98);
  v115.NodeOrdinal = *((_DWORD *)this + 98);
  v115.EngineAffinity = *((_DWORD *)this + 99);
  v115.pPrivateDriverData = a2;
  v115.PrivateDriverDataSize = a3;
  v18 = *v5;
  if ( (*(_BYTE *)(*v5 + 1901LL) & 8) != 0 || *((_DWORD *)this + 36) == 2 )
    v115.Flags.Value |= 2u;
  v19 = *((_BYTE *)this + 438);
  v115.Flags.Value ^= (*(_BYTE *)&v115.Flags.0 ^ (unsigned __int8)(4 * v19)) & 4;
  v20 = *((_DWORD *)this + 101);
  v21 = (ADAPTER_RENDER **)(v18 + 16);
  if ( (v20 & 8) != 0 )
  {
    v20 &= ~0x10u;
    *((_DWORD *)this + 101) = v20;
    goto LABEL_21;
  }
  v22 = *v21;
  if ( (v20 & 0x10) == 0 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 2) + 2808LL) + 344LL * *((unsigned int *)this + 100) + 32);
    if ( v23 )
      v24 = *(_BYTE *)(74 * v17 + v23 + 68) & 1;
    else
      v24 = 0;
    if ( !v24 )
      goto LABEL_21;
    v75 = 1054LL;
    WdLogSingleEntry1(2LL, 1054LL);
    v76 = L"Context doesn't pass HwQueueSupported flag, but GPU node requires hardware scheduling";
LABEL_122:
    Flagsb = v75;
    goto LABEL_125;
  }
  v83 = *((_QWORD *)v22 + 2);
  if ( *(int *)(v83 + 2820) < 2500 )
  {
    WdLogSingleEntry1(2LL, 1024LL);
    Flagsb = 1024LL;
    v76 = L"Context passes HwQueueSupported flag set, but the driver WDDM version is < 2.5";
    goto LABEL_125;
  }
  v111 = 344LL * *((unsigned int *)this + 100);
  v84 = *(_QWORD *)(v111 + *(_QWORD *)(v83 + 2808) + 32);
  if ( !v84 || (*(_BYTE *)(74 * v17 + v84 + 68) & 1) == 0 )
  {
    v75 = 1030LL;
    WdLogSingleEntry1(2LL, 1030LL);
    v76 = L"Context passes HwQueueSupported flag set, but GPU node doesn't support context scheduling";
    goto LABEL_122;
  }
  if ( !v19 )
  {
    v75 = 1036LL;
    WdLogSingleEntry1(2LL, 1036LL);
    v76 = L"Only virtual contexts can use HwQueueSupported flag";
    goto LABEL_122;
  }
  if ( v20 >= 0x40 )
  {
    v75 = 1042LL;
    WdLogSingleEntry1(2LL, 1042LL);
    v76 = L"Context is setting non-zero Reserved flags at the creation time.";
    goto LABEL_122;
  }
  v115.Flags.Value |= 0x10u;
  v85 = *(_QWORD *)(v111 + *(_QWORD *)(*((_QWORD *)*v21 + 2) + 2808LL) + 32);
  if ( v85 )
    v86 = (*(_BYTE *)(v85 + 74 * v17 + 68) & 2) != 0;
  else
    v86 = 0;
  *((_BYTE *)this + 296) = v86;
LABEL_21:
  if ( (*(_DWORD *)(*((_QWORD *)*v21 + 2) + 2280LL) & 1) == 0 )
  {
    v115.hContext = *(HANDLE *)(v18 + 616);
    v87 = *(__m128i *)(v18 + 624);
    v116.m256i_i64[2] = *(_QWORD *)(v18 + 640);
    v115.ContextInfo.DmaBufferSize = _mm_cvtsi128_si32(v87);
    v116.m256i_i64[2] = *(_QWORD *)(v18 + 640);
    v115.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v18 + 624));
    v88 = *(__m128i *)(v18 + 624);
    v116.m256i_i64[2] = *(_QWORD *)(v18 + 640);
    v115.ContextInfo.AllocationListSize = _mm_srli_si128(v88, 8).m128i_u32[1];
    *(_OWORD *)v116.m256i_i8 = *(_OWORD *)(v18 + 624);
    v116.m256i_i64[2] = *(_QWORD *)(v18 + 640);
    v115.ContextInfo.PatchLocationListSize = v116.m256i_u32[4];
    v89 = *(__m128i *)(v18 + 624);
    v116.m256i_i64[2] = *(_QWORD *)(v18 + 640);
    v115.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(v89, 8));
    *((_DWORD *)this + 10) &= ~1u;
    goto LABEL_27;
  }
  if ( (v20 & 0x20) == 0 )
  {
    if ( (v20 & 8) != 0 )
    {
      v115.hContext = 0LL;
    }
    else
    {
      v25 = ADAPTER_RENDER::DdiCreateContext(*v21, *(void **)(v18 + 616), &v115);
      v15 = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry1(2LL, v25);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateContext() failed with status 0x%I64x",
          v15,
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
  LODWORD(v15) = result;
  if ( (int)result >= 0 )
  {
    v115.hContext = 0LL;
    v115.ContextInfo.DmaBufferPrivateDataSize = 264;
    v115.ContextInfo.AllocationListSize = 128;
    v115.ContextInfo.PatchLocationListSize = 128;
    v115.ContextInfo.DmaBufferSize = 1024;
LABEL_26:
    *((_DWORD *)this + 10) |= 1u;
LABEL_27:
    if ( (int)v15 < 0 )
      return (unsigned int)v15;
    if ( (*(_DWORD *)(*v5 + 464LL) == 2 || *((_DWORD *)this + 36) == 2) && v115.ContextInfo.AllocationListSize != 256 )
    {
      WdLogSingleEntry2(3LL, 256LL, v115.ContextInfo.AllocationListSize);
      v115.ContextInfo.AllocationListSize = 256;
    }
    *((_QWORD *)this + 23) = v115.hContext;
    *(DXGK_CONTEXTINFO *)((char *)this + 200) = v115.ContextInfo;
    if ( !*((_DWORD *)this + 52) )
      goto LABEL_33;
    v26 = (struct _LOOKASIDE_LIST_EX *)operator new[](0x60uLL, 0x64507844u, 64LL);
    *((_QWORD *)this + 62) = v26;
    if ( v26 )
    {
      v27 = ExInitializeLookasideListEx(
              v26,
              0LL,
              0LL,
              (POOL_TYPE)512,
              0,
              (unsigned int)(*((_DWORD *)this + 52) + 16),
              0x64507844u,
              0);
      v15 = v27;
      if ( v27 >= 0 )
      {
LABEL_33:
        Value = v115.ContextInfo.Caps.Value;
        if ( (*(_BYTE *)&v115.ContextInfo.Caps.0 & 2) != 0 )
        {
          v29 = *v5;
          *(_BYTE *)(v29 + 1903) = 1;
          *(_BYTE *)(*(_QWORD *)(v29 + 40) + 337LL) = 1;
          Value = v115.ContextInfo.Caps.Value;
        }
        v30 = *((_BYTE *)this + 438);
        if ( v30 )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 16LL) + 2808LL)
                          + 344LL * *((unsigned int *)this + 100)
                          + 32);
          v32 = *((unsigned int *)this + 98);
          if ( v31 )
            LOBYTE(v21) = *(_BYTE *)(74 * v32 + v31 + 73);
          else
            LOBYTE(v21) = 0;
          if ( v31 )
            v33 = *(_BYTE *)(74 * v32 + v31 + 72) != 0;
          else
            v33 = 0;
          if ( *((_BYTE *)this + 441) )
          {
            if ( (Value & 4) != 0 )
            {
              WdLogSingleEntry1(3LL, 1175LL);
              return 3221225473LL;
            }
          }
          else if ( (Value & 4) != 0 || (_BYTE)v21 && !v33 )
          {
            if ( !(_BYTE)v21 )
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
        if ( !v30 && !*((_DWORD *)this + 50) )
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
          v34 = *((unsigned int *)this + 6);
          v116 = *(__m256i *)((char *)this + 200);
          v21 = (ADAPTER_RENDER **)*((unsigned int *)this + 98);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            LODWORD(v107) = v116.m256i_i32[2];
            *(_DWORD *)Depth = v116.m256i_i32[1];
            Tag[0] = v116.m256i_i32[0];
            LODWORD(Size) = *((_DWORD *)this + 99);
            Flags[0] = *((_DWORD *)this + 98);
            McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
              HIDWORD(v116.m256i_i64[0]),
              &EventCreateContext,
              v116.m256i_i64[0],
              *v5,
              *(_QWORD *)Flags,
              Size,
              *(_QWORD *)Tag,
              *(_QWORD *)Depth,
              v107,
              v116.m256i_i32[3],
              v116.m256i_i32[4],
              0,
              this,
              v34,
              0LL);
          }
        }
        v35 = *v5;
        if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
        {
          v116.m256i_i32[0] = 0;
          *(__int64 *)((char *)&v116.m256i_i64[1] + 4) = 0LL;
          v116.m256i_i32[6] = 0;
          v116.m256i_i32[5] = *(_DWORD *)(*(_QWORD *)(v35 + 40) + 432LL);
          v116.m256i_i32[1] = *((_DWORD *)this + 98);
          v116.m256i_i32[2] = *((_DWORD *)this + 100);
          v116.m256i_i32[0] = 2
                            * (*((_DWORD *)this + 101) & 1 | (4
                                                            * (*((_DWORD *)this + 101) & 4 | (16
                                                                                            * (*((_DWORD *)this + 101) & 0x28 | 0x11)))));
          v91 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *, __int64, ADAPTER_RENDER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 736LL) + 8LL)
                                                                                               + 224LL))(
                  this,
                  &v116,
                  Value,
                  v21);
          *((_QWORD *)this + 35) = v91;
          if ( v91 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              McTemplateK0pppp_EtwWriteTransfer(
                v91,
                v90,
                v92,
                this,
                v91,
                *((_QWORD *)this + 23),
                *((_QWORD *)this + 24));
            memset(v114, 0, sizeof(v114));
            v93 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v5 + 16LL) + 736LL)
                                                                                          + 8LL)
                                                                              + 232LL))(
                    0LL,
                    *((_QWORD *)this + 35),
                    v114,
                    (char *)this + 288);
            v110 = v93;
            if ( v93 < 0 )
            {
              WdLogSingleEntry2(3LL, this, v93);
              return v110;
            }
LABEL_58:
            if ( !*((_BYTE *)this + 438) || *(_DWORD *)(*v5 + 464LL) == 2 || *((_DWORD *)this + 36) == 2 )
            {
              v66 = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 53), *((_DWORD *)this + 54));
              v48 = v66;
              if ( v66 < 0 )
              {
                v45 = v66;
LABEL_176:
                WdLogSingleEntry2(3LL, this, v45);
                return v48;
              }
            }
            v43 = (SIZE_T *)((char *)this + 48);
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
                v50 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))VirtualMemoryInterface)(
                        -1LL,
                        (char *)this + 56,
                        0LL,
                        (char *)this + 48,
                        12288,
                        4);
                v110 = v50;
                if ( v50 < 0 )
                  goto LABEL_174;
                v63 = (_QWORD *)a2[1];
                v64 = (_QWORD *)*a2;
                v65 = v63;
                if ( (unsigned __int64)v63 >= MmUserProbeAddress )
                  v65 = (_QWORD *)MmUserProbeAddress;
                if ( !v63 || *v65 < 8uLL || !v64 )
                {
                  WdLogSingleEntry2(3LL, this, -1073741811LL);
                  return 3221225485LL;
                }
                if ( (unsigned __int64)v64 >= MmUserProbeAddress )
                  v64 = (_QWORD *)MmUserProbeAddress;
                *v64 = *((_QWORD *)this + 7);
                if ( (unsigned __int64)v63 >= MmUserProbeAddress )
                  v63 = (_QWORD *)MmUserProbeAddress;
                *v63 = *v43;
              }
            }
            else
            {
              v94 = DxgkGetVirtualMemoryInterface();
              v50 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v94)(
                      -1LL,
                      (char *)this + 56,
                      0LL,
                      (char *)this + 48,
                      12288,
                      4);
              v110 = v50;
              if ( v50 < 0 )
                goto LABEL_174;
              Global = DXGGLOBAL::GetGlobal();
              if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                     (struct DXGGLOBAL *)((char *)Global + 1684),
                     *(struct DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
              {
                v96 = ExAllocatePool2(256LL, *v43, 1265072196LL);
                *((_QWORD *)this + 8) = v96;
                if ( !v96 )
                {
LABEL_180:
                  WdLogSingleEntry3(3LL, this, *v43, -1073741801LL);
                  return 3221225495LL;
                }
              }
            }
            v44 = *((unsigned int *)this + 18);
            if ( !(_DWORD)v44 )
            {
LABEL_71:
              v51 = *((unsigned int *)this + 26);
              if ( !(_DWORD)v51 )
              {
LABEL_78:
                v56 = *(_QWORD *)(*v5 + 40LL);
                v57 = *((unsigned int *)this + 6);
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v56 + 248));
                v58 = ((unsigned int)v57 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v58 < *(_DWORD *)(v56 + 296) )
                {
                  v59 = *(_QWORD *)(v56 + 280);
                  if ( (((unsigned int)v57 >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60)
                    && (*(_DWORD *)(v59 + 16 * v58 + 8) & 0x1F) != 0 )
                  {
                    v60 = 2 * ((v57 >> 6) & 0xFFFFFF);
                    if ( (*(_DWORD *)(v59 + 8 * v60 + 8) & 0x2000) == 0 )
                    {
                      WdLogSingleEntry1(1LL, 222LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                        222LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    *(_DWORD *)(*(_QWORD *)(v56 + 280) + 8 * v60 + 8) &= ~0x2000u;
                  }
                }
                *(_QWORD *)(v56 + 256) = 0LL;
                ExReleasePushLockExclusiveEx(v56 + 248, 0LL);
                KeLeaveCriticalRegion();
                return 0LL;
              }
              v45 = (unsigned int)v51;
              v52 = 24 * v51;
              v53 = 0xFFFFFFFFLL;
              if ( v52 <= 0xFFFFFFFF )
                v53 = (unsigned int)v52;
              v48 = v52 > 0xFFFFFFFF ? 0xC0000095 : 0;
              if ( v52 > 0xFFFFFFFF )
                goto LABEL_176;
              v43 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = v53;
              v54 = DxgkGetVirtualMemoryInterface();
              v50 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v54)(
                      -1LL,
                      (char *)this + 120,
                      0LL,
                      (char *)this + 112,
                      12288,
                      4);
              v110 = v50;
              if ( v50 >= 0 )
              {
                *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v43, 4u);
                if ( *((_QWORD *)this + 17) )
                {
                  v55 = DXGGLOBAL::GetGlobal();
                  if ( !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                          (struct DXGGLOBAL *)((char *)v55 + 1684),
                          *(struct DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
                    goto LABEL_78;
                  v97 = ExAllocatePool2(256LL, *v43, 1265072196LL);
                  *((_QWORD *)this + 16) = v97;
                  if ( v97 )
                    goto LABEL_78;
                  goto LABEL_180;
                }
                goto LABEL_113;
              }
              goto LABEL_174;
            }
            v45 = (unsigned int)v44;
            v46 = 8 * v44;
            v47 = 0xFFFFFFFFLL;
            if ( v46 <= 0xFFFFFFFF )
              v47 = (unsigned int)v46;
            v48 = v46 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v46 > 0xFFFFFFFF )
              goto LABEL_176;
            v43 = (SIZE_T *)((char *)this + 80);
            *((_QWORD *)this + 10) = v47;
            v49 = DxgkGetVirtualMemoryInterface();
            v50 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, char *, int, int))v49)(
                    -1LL,
                    (char *)this + 88,
                    0LL,
                    (char *)this + 80,
                    12288,
                    4);
            v110 = v50;
            if ( v50 >= 0 )
            {
              *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v43, 4u);
              if ( !*((_QWORD *)this + 12) )
              {
LABEL_113:
                WdLogSingleEntry2(3LL, this, -1073741801LL);
                return 3221225495LL;
              }
              goto LABEL_71;
            }
LABEL_174:
            WdLogSingleEntry3(3LL, this, *v43, v50);
            return v110;
          }
LABEL_173:
          WdLogSingleEntry2(3LL, this, -1073741801LL);
          return 3221225495LL;
        }
        memset(&v116, 0, 24);
        v116.m256i_i32[3] = 0;
        *(__int64 *)((char *)&v116.m256i_i64[2] + 4) = *(unsigned int *)(*(_QWORD *)(v35 + 40) + 432LL);
        v116.m256i_i32[1] = *((_DWORD *)this + 98);
        v116.m256i_i32[2] = *((_DWORD *)this + 100);
        v36 = 2 * (*((_DWORD *)this + 101) & 1 | ((*((_DWORD *)this + 101) & 0x20) << 6));
        v116.m256i_i32[0] = v36;
        if ( *((_BYTE *)this + 438) )
          v116.m256i_i32[0] = v36 | 0x80;
        if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*v5 + 16LL) + 16LL)) )
        {
LABEL_55:
          v41 = (*(__int64 (__fastcall **)(DXGCONTEXT *, __m256i *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16)
                                                                                           + 736LL)
                                                                               + 8LL)
                                                                   + 216LL))(
                  this,
                  &v116);
          *((_QWORD *)this + 32) = v41;
          if ( v41 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              McTemplateK0pppp_EtwWriteTransfer(
                v41,
                v40,
                v42,
                this,
                v41,
                *((_QWORD *)this + 23),
                *((_QWORD *)this + 24));
            goto LABEL_58;
          }
          goto LABEL_173;
        }
        if ( v38 < 0x40 )
        {
          v116.m256i_i32[0] = v37 & 0xFFFFFBDF | (8 * (v38 & 4 | (16 * (v38 & 8))));
          goto LABEL_55;
        }
        WdLogSingleEntry1(2LL, 1285LL);
        Flagsb = 1285LL;
        v76 = L"Context is setting non-zero Reserved flags at the creation time.";
LABEL_125:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v76, Flagsb, 0LL, 0LL, 0LL, 0LL);
        return 3221225473LL;
      }
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to initialize lookaside list for private driver data 0x%x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      operator delete(*((void **)this + 62));
      *((_QWORD *)this + 62) = 0LL;
      return (unsigned int)v15;
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
