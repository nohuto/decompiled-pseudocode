/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00BAE0C
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C0019260 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C001948C (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C002C774 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00BAFF0 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00BB674 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00BB7F0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00BD4D8 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int DriverVersion; // r12d
  __int64 v6; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // esi
  VIDMM_GLOBAL *v10; // rax
  VIDMM_GLOBAL *v11; // rax
  VIDMM_GLOBAL *v12; // rsi
  int v13; // eax
  struct _DXGK_QUERYSEGMENTOUT4 *v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v21; // rbx
  _BYTE v22[80]; // [rsp+50h] [rbp-98h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v2;
  *(_DWORD *)v22 = 0;
  SysMmQueryIommuState(
    *(const struct SYSMM_ADAPTER **)(v2 + 224),
    (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v22);
  if ( (v22[0] & 2) == 0 )
  {
    memset(&v22[16], 0, 0x40uLL);
    if ( ZwQuerySystemInformation(SystemBasicInformation, &v22[16], 0x40u, 0LL) < 0
      || *(_QWORD *)(v2 + 2216) < (unsigned __int64)*(unsigned int *)&v22[36] << 12 )
    {
      WdLogSingleEntry1(1LL, 239LL);
      v17 = 0x40000LL;
LABEL_21:
      DxgkLogInternalTriageEvent(v16, v17);
      return 0LL;
    }
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v2 + 216));
  v6 = 40LL * *(unsigned int *)(v2 + 288);
  if ( !is_mul_ok(*(unsigned int *)(v2 + 288), 0x28uLL) )
    v6 = -1LL;
  v7 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new[](v6, 0x30306956u, 256LL);
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C00767DC);
    WdLogSingleEntry1(6LL, 249LL);
    v17 = 262145LL;
    goto LABEL_21;
  }
  v8 = *(unsigned int *)(v2 + 288);
  v9 = 0;
  if ( (_DWORD)v8 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v2, v9, &v7[v9]) >= 0 )
    {
      if ( ++v9 >= (unsigned int)v8 )
        goto LABEL_12;
    }
    WdLogSingleEntry1(1LL, 259LL);
    DxgkLogInternalTriageEvent(v18, 0x40000LL);
    goto LABEL_26;
  }
LABEL_12:
  v10 = (VIDMM_GLOBAL *)operator new(44928LL, 0x35316956u, 64LL);
  if ( !v10 || (v11 = VIDMM_GLOBAL::VIDMM_GLOBAL(v10), (v12 = v11) == 0LL) )
  {
    _InterlockedIncrement(&dword_1C00767DC);
    WdLogSingleEntry1(6LL, 273LL);
    DxgkLogInternalTriageEvent(v20, 262145LL);
LABEL_25:
    if ( !(_DWORD)v8 )
    {
LABEL_28:
      operator delete(v7);
      return 0LL;
    }
LABEL_26:
    v21 = v7;
    do
    {
      VidMmiFreeQuerySegmentInfo(v21++);
      --v8;
    }
    while ( v8 );
    goto LABEL_28;
  }
  v13 = VIDMM_GLOBAL::Init(v11, a1, v7, DriverVersion, a2);
  if ( v13 < 0 )
  {
    _InterlockedIncrement(&dword_1C00767E0);
    WdLogSingleEntry1(6LL, v13);
    DxgkLogInternalTriageEvent(v19, 262145LL);
    VIDMM_GLOBAL::`scalar deleting destructor'(v12);
    goto LABEL_25;
  }
  WdLogSingleEntry0(4LL);
  if ( (_DWORD)v8 )
  {
    v14 = v7;
    do
    {
      VidMmiFreeQuerySegmentInfo(v14++);
      --v8;
    }
    while ( v8 );
  }
  operator delete(v7);
  return v12;
}
