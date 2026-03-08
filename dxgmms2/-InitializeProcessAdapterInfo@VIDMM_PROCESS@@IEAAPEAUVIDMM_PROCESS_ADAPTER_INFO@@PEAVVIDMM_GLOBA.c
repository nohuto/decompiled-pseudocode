/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABEB0
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00124D8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x1C00144CC (RtlStringCbPrintfW.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014898 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0095E30 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A62CC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00A91E4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00AAC58 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00AC310 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C00AD4EC (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        struct VIDMM_PARTITION **this,
        struct VIDMM_GLOBAL *a2)
{
  unsigned __int64 v2; // rbp
  int v5; // r13d
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rax
  VIDMM_PROCESS_ADAPTER_INFO *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  char *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rdi
  _QWORD *v15; // r15
  CVirtualAddressAllocator *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  bool v22; // zf
  wchar_t *v23; // r14
  unsigned int v24; // ebp
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v25; // r15d
  __int64 v26; // r13
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v28; // rax
  struct VIDMM_PARTITION **v29; // r15
  NTSTATUS v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rcx
  __int64 v39; // rdx
  CVirtualAddressAllocator *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+30h] [rbp-78h]
  struct _PCW_DATA v46; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  NTSTATUS v49; // [rsp+B8h] [rbp+10h]
  wchar_t *pszDest; // [rsp+C0h] [rbp+18h]

  v2 = *((unsigned int *)a2 + 926);
  v5 = 0;
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(2760LL, 0x33316956u, 256LL);
  if ( !v6 || (v7 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6), (v8 = v7) == 0LL) )
  {
    _InterlockedAdd(&dword_1C00767FC, 1u);
    WdLogSingleEntry1(6LL, 648LL);
    DxgkLogInternalTriageEvent(v42, 262145LL);
    return 0LL;
  }
  *((_DWORD *)v7 + 3) = v2;
  v9 = 184 * v2;
  v10 = (unsigned int)v2;
  if ( !is_mul_ok(v2, 0xB8uLL) )
    v9 = -1LL;
  v11 = (char *)operator new[](v9, 0x34316956u, 256LL);
  v14 = v11;
  if ( v11 )
    `vector constructor iterator'(
      v11,
      184LL,
      (unsigned int)v2,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v14 = 0LL;
  v15 = (_QWORD *)((char *)v8 + 16);
  *((_QWORD *)v8 + 2) = v14;
  if ( !v14 )
  {
    _InterlockedAdd(&dword_1C0076800, 1u);
    WdLogSingleEntry1(6LL, 661LL);
    v39 = 262145LL;
LABEL_43:
    DxgkLogInternalTriageEvent(v38, v39);
    goto LABEL_44;
  }
  if ( (*((_BYTE *)a2 + 40936) & 4) != 0 && ((_DWORD)this[12] & 2) == 0 )
  {
    v16 = (CVirtualAddressAllocator *)operator new(152LL, 0x4B677844u, 256LL);
    if ( v16 )
      v16 = CVirtualAddressAllocator::CVirtualAddressAllocator(v16);
    *((_QWORD *)v8 + 63) = v16;
    if ( v16 )
    {
      if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                  v16,
                  1LL << *((_DWORD *)a2 + 10232),
                  *((_DWORD *)a2 + 10245),
                  a2,
                  (struct VIDMM_PROCESS *)this) >= 0 )
        goto LABEL_14;
      WdLogSingleEntry1(1LL, 682LL);
    }
    else
    {
      WdLogSingleEntry1(1LL, 670LL);
    }
LABEL_42:
    v39 = 0x40000LL;
    goto LABEL_43;
  }
LABEL_14:
  if ( (_DWORD)v2 )
  {
    v17 = 0LL;
    v18 = 0LL;
    do
    {
      *(_QWORD *)(v17 + *v15) = this;
      *(_DWORD *)(v17 + *v15 + 8) = 0;
      *(_QWORD *)(v17 + *v15 + 16) = 0LL;
      *(_DWORD *)(v17 + *v15 + 168) = *(_DWORD *)(v17 + *v15 + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v17 + *v15 + 24) = 0LL;
      *(_QWORD *)(v17 + *v15 + 32) = 0LL;
      v19 = (_QWORD *)(v17 + *v15 + 40LL);
      v19[1] = v19;
      *v19 = v19;
      memset((void *)(v18 + *v15 + 56LL), 0, 0x70uLL);
      v18 += 184LL;
      v17 += 184LL;
      --v10;
    }
    while ( v10 );
    v5 = 0;
  }
  v20 = *((unsigned int *)a2 + 1754);
  if ( (unsigned int)v20 > 1 )
  {
    v12 = 0xFFFFFFFFFFFFFFFFuLL % v20;
    v13 = *((unsigned int *)a2 + 1754);
    if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 0x128 )
      goto LABEL_44;
    *((_QWORD *)v8 + 6) = ExAllocatePool2(256LL, 296 * v20, 1265072196LL);
    v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
    *((_QWORD *)v8 + 6) = (char *)v8 + 56;
    if ( (_DWORD)v20 )
      memset((char *)v8 + 56, 0, 296 * v20);
  }
  v22 = *((_QWORD *)v8 + 6) == 0LL;
  *((_DWORD *)v8 + 88) = v20;
  if ( v22 )
  {
LABEL_44:
    v40 = (CVirtualAddressAllocator *)*((_QWORD *)v8 + 63);
    if ( v40 )
      CVirtualAddressAllocator::DestroyVaAllocator(v40, v12, v13);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v8);
    return 0LL;
  }
  pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  v23 = pszDest;
  if ( !pszDest )
  {
    WdLogSingleEntry0(1LL);
    goto LABEL_42;
  }
  v24 = 0;
  if ( *((_DWORD *)a2 + 1754) )
  {
    while ( 1 )
    {
      v25 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v26 = *((_QWORD *)v8 + 6) + 296LL * v24;
      *(_QWORD *)(v26 + 16) = v8;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, v24, v25++, this[36]);
        v21 += 8LL;
        *(_QWORD *)(v21 + v26 + 16) = *((_QWORD *)SegmentGroupState + 4);
      }
      while ( v25 < 2 );
      v28 = *((_QWORD *)a2 + 3);
      v29 = this;
      v23 = pszDest;
      DestinationString = 0LL;
      LODWORD(v45) = v24;
      LODWORD(v44) = *(_DWORD *)(v28 + 404);
      LODWORD(Data) = *(_DWORD *)(v28 + 408);
      v21 = 0LL;
      v49 = RtlStringCbPrintfW(
              pszDest,
              0x208uLL,
              L"pid_%u_luid_0x%08X_0x%08X_phys_%u",
              *((unsigned int *)this + 2),
              Data,
              v44,
              v45);
      if ( v49 < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, pszDest);
      v46.Data = (const void *)v26;
      v46.Size = 296;
      v30 = PcwCreateInstance(
              (PPCW_INSTANCE *)(v26 + 248),
              GpuPerformanceCounterSetProcessMemory,
              &DestinationString,
              1u,
              &v46);
      v49 = v30;
      if ( v30 < 0 )
        break;
      if ( ++v24 >= *((_DWORD *)a2 + 1754) )
      {
        v5 = v30;
        goto LABEL_30;
      }
    }
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v41, 0x40000LL);
    v5 = v49;
  }
  else
  {
    v29 = this;
  }
LABEL_30:
  operator delete(v23);
  if ( v5 < 0 )
    goto LABEL_44;
  v31 = *((_DWORD *)v8 + 118);
  if ( dword_1C0076348 )
    v32 = v31 & 0xFFFFFFFE;
  else
    v32 = v31 | 1;
  *((_DWORD *)v8 + 118) = v32 | 6;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0
    && DXGPROCESS::GetCurrent()
    && (*((_DWORD *)DXGPROCESS::GetCurrent() + 106) & 4) != 0 )
  {
    *((_DWORD *)v8 + 121) = 1;
  }
  *(_QWORD *)v8 = a2;
  *((_DWORD *)v8 + 2) = 1;
  *((_QWORD *)v8 + 5) = v29;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 41072));
  v33 = (_QWORD *)((char *)a2 + 41120);
  v34 = *((_QWORD *)a2 + 5140);
  v35 = (_QWORD *)((char *)v8 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v34 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41120) )
    __fastfail(3u);
  *v35 = v34;
  *((_QWORD *)v8 + 4) = v33;
  *(_QWORD *)(v34 + 8) = v35;
  *v33 = v35;
  v36 = *((_QWORD *)a2 + 5592);
  *((_QWORD *)a2 + 5592) = v36 + 1;
  *((_QWORD *)v8 + 65) = v36;
  *((_QWORD *)a2 + 5135) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 41072, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v8;
}
