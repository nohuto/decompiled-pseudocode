/*
 * XREFs of ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C008DA50
 * Callers:
 *     ?VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x1C00012B0 (-VidMmWaitForFences@@YAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     ?WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C0001430 (-WaitForFence@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_SYNC_OBJECT@@_K@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1C0087EE4 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C008AC70 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008B25C (-WaitForAllPagingOperations@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008CF40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00AF0D0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E3790 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C00EA018 (-VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@.c)
 * Callees:
 *     VidSchSubmitWaitFromCpu @ 0x1C0001470 (VidSchSubmitWaitFromCpu.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00016D0 (VidSchIsMonitoredFenceSignaled.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DIGBGJFG@@@QEAAPEA_KI@Z @ 0x1C001BB9E (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DIGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ @ 0x1C002D7A0 (--1-$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::WaitForFences(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4,
        const unsigned __int64 *a5)
{
  const unsigned __int64 *v5; // rsi
  struct _VIDSCH_SYNC_OBJECT **v6; // rax
  unsigned int v7; // ebx
  unsigned int v9; // r14d
  const unsigned __int64 *v10; // r15
  char v11; // r12
  unsigned int v12; // edi
  unsigned __int64 *v13; // rbx
  signed __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  __int64 Elements; // rdi
  __int64 v20; // r9
  char *v21; // r11
  const unsigned __int64 *v22; // rdx
  signed __int64 v23; // r10
  signed __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // [rsp+28h] [rbp-D8h]
  __int64 v32; // [rsp+30h] [rbp-D0h]
  __int64 v33; // [rsp+38h] [rbp-C8h]
  PRKEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h]
  struct _VIDSCH_SYNC_OBJECT **v36; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v38[16]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+80h] [rbp-80h]
  const unsigned __int64 *v40; // [rsp+88h] [rbp-78h]
  struct _VIDSCH_SYNC_OBJECT **v41; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v43[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+C0h] [rbp-40h]
  PVOID v45; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[16]; // [rsp+D8h] [rbp-28h] BYREF
  int v47; // [rsp+E8h] [rbp-18h]

  v5 = a5;
  v6 = a2;
  v41 = a2;
  v7 = a4;
  v35 = a4;
  Event = 0LL;
  v40 = a3;
  v9 = a4;
  v10 = a3;
  v36 = a2;
  v11 = 1;
  while ( 1 )
  {
    v45 = 0LL;
    v47 = 0;
    P = 0LL;
    v39 = 0;
    if ( !v5 || *((_BYTE *)this + 4640) )
      goto LABEL_4;
    Elements = NonPagedPoolZeroedArray<unsigned __int64,2,945908054>::AllocateElements((__int64 *)&v45, v7);
    if ( v7 <= 2 )
    {
      P = v38;
      if ( v7 )
        memset(v38, 0, 8LL * v7);
    }
    else
    {
      v20 = v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      {
        v21 = 0LL;
        goto LABEL_31;
      }
      P = (PVOID)ExAllocatePool2(64LL, 8LL * v7, 945908054LL);
    }
    v21 = (char *)P;
    v39 = v7;
    v20 = v7;
LABEL_31:
    if ( !Elements || !v21 )
    {
      LODWORD(v17) = -1073741801;
      WdLogSingleEntry1(1LL, -1073741801LL);
      HIDWORD(v33) = 0;
      HIDWORD(v32) = 0;
      HIDWORD(v31) = 0;
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      goto LABEL_14;
    }
    v9 = 0;
    if ( v7 )
    {
      v22 = v5;
      v23 = (char *)v40 - (char *)v5;
      v24 = (char *)v41 - (char *)v5;
      do
      {
        v25 = *(const unsigned __int64 *)((char *)v22 + v23);
        if ( *v22 <= v25 || *v22 - v25 < 0x7FFFFFFF )
        {
          v26 = v9++;
          v27 = 8 * v26;
          *(_QWORD *)(v27 + Elements) = v25;
          *(_QWORD *)&v21[v27] = *(const unsigned __int64 *)((char *)v22 + v24);
        }
        ++v22;
        --v20;
      }
      while ( v20 );
    }
    v6 = (struct _VIDSCH_SYNC_OBJECT **)P;
    v10 = (const unsigned __int64 *)v45;
    v36 = (struct _VIDSCH_SYNC_OBJECT **)P;
LABEL_4:
    v12 = 0;
    if ( !v9 )
    {
LABEL_9:
      NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>((__int64)&P);
      NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>((__int64)&v45);
      return;
    }
    v13 = (unsigned __int64 *)v10;
    v14 = (char *)v6 - (char *)v10;
    while ( 1 )
    {
      v15 = *(unsigned __int64 *)((char *)v13 + v14);
      if ( v15 )
      {
        if ( !VidSchIsMonitoredFenceSignaled(v15, *v13) )
          break;
      }
      ++v12;
      ++v13;
      if ( v12 >= v9 )
        goto LABEL_9;
    }
    LODWORD(v33) = 0;
    LODWORD(v32) = 0;
    v43[0] = 48LL;
    v43[3] = 512LL;
    v43[1] = 0LL;
    v43[2] = 0LL;
    v44 = 0LL;
    LODWORD(v31) = 24;
    v16 = ObCreateObject(0LL, ExEventObjectType, v43, 0LL, 0LL, v31, v32, v33, &Event);
    LODWORD(v17) = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(1LL, v16);
      HIDWORD(v33) = 0;
      HIDWORD(v32) = 0;
      HIDWORD(v31) = 0;
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
    }
    else
    {
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      ObfReferenceObject(Event);
      v18 = VidSchSubmitWaitFromCpu(
              v9,
              (__int64)v36,
              (__int64)v10,
              (__int64)Event,
              0,
              1,
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 256LL),
              0LL);
      v17 = v18;
      if ( v18 < 0 )
      {
        ObfDereferenceObject(Event);
        WdLogSingleEntry1(1LL, v17);
        HIDWORD(v33) = 0;
        HIDWORD(v32) = 0;
        HIDWORD(v31) = 0;
        DxgkLogInternalTriageEvent(v30, 0x40000LL);
      }
      else
      {
        v11 = 0;
        LODWORD(v17) = KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
      }
    }
    v5 = a5;
    v7 = v35;
LABEL_14:
    if ( Event )
    {
      ObfDereferenceObject(Event);
      Event = 0LL;
    }
    if ( (int)v17 >= 0 || !v11 )
      break;
    Interval.QuadPart = 50000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( P != v38 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v6 = v36;
    v39 = 0;
    if ( v45 != v46 && v45 )
    {
      ExFreePoolWithTag(v45, 0);
      v6 = v36;
    }
  }
  if ( P != v38 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v39 = 0;
  if ( v45 != v46 )
  {
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
  }
}
