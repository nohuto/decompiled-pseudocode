/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0004B90
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C000AA50 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00037C0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0003B80 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C0008230 (VidSchiUpdateContextStatus.c)
 *     VidSchiCompleteRewindPacket @ 0x1C00107E8 (VidSchiCompleteRewindPacket.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011A3C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0014B80 (VidSchiMarkDeviceAsError.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001742C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0018E4C (VidSchiCheckYieldExitCondition.c)
 *     VidSchiStartNodeYield @ 0x1C0018F28 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C0018FE4 (VidSchiMonitorRefreshPeriodFromNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001BD7E (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002F714 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0035124 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035AC4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0036034 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003657C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqxq_EtwWriteTransfer @ 0x1C0039394 (McTemplateK0pqxq_EtwWriteTransfer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r15
  int v6; // r14d
  LARGE_INTEGER *v7; // r13
  LARGE_INTEGER PerformanceCounter; // r14
  bool v9; // zf
  __int64 v10; // r14
  __int64 v11; // rcx
  _LARGE_INTEGER v12; // r9
  __int64 v13; // r12
  unsigned __int64 *v14; // r14
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  struct _VIDSCH_CONTEXT *v18; // rcx
  __int64 v19; // rax
  LARGE_INTEGER *v20; // r14
  _QWORD *QuadPart; // r9
  __int64 v22; // rcx
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  char v29; // r13
  __int64 v30; // r14
  int v31; // r14d
  struct _KEVENT **v32; // r12
  KSPIN_LOCK *v33; // r14
  struct _KEVENT *v34; // r12
  struct _KEVENT *v35; // r12
  struct _KEVENT *v36; // rcx
  struct _KEVENT *v37; // rdi
  KIRQL v38; // si
  struct _KEVENT *v39; // r14
  struct _VIDSCH_QUEUE_PACKET *v40; // rax
  unsigned int v41; // edi
  __int64 v42; // rax
  __int64 v43; // rcx
  LARGE_INTEGER *v44; // rax
  __int64 v45; // r13
  __int64 i; // r12
  __int64 v47; // r13
  __int64 v48; // rax
  unsigned __int8 v49; // r8
  __int64 v50; // r12
  __int64 v51; // r13
  LARGE_INTEGER v52; // r8
  unsigned __int128 v53; // rax
  unsigned __int64 v54; // r14
  int v55; // edx
  unsigned __int64 *v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // ecx
  __int16 v60; // r11
  unsigned __int128 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int128 v63; // rtt
  unsigned __int64 v64; // r10
  int v65; // eax
  int v66; // r8d
  __int64 v67; // r9
  unsigned int refreshed; // eax
  __int64 v69; // rcx
  LARGE_INTEGER v70; // r9
  struct VIDMM_ALLOC *v71; // rcx
  __int64 v72; // rcx
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v74; // rdx
  __int64 v75; // rax
  LARGE_INTEGER *v76; // rax
  int v77; // eax
  _BYTE *v78; // r8
  __int64 v79; // rdx
  _BYTE *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r11
  char v83; // al
  _BYTE *v84; // rax
  _BYTE *v85; // r9
  __int64 v86; // rdx
  _BYTE *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r11
  char v90; // al
  _BYTE *v91; // rax
  struct _KEVENT *v92; // r14
  int Flink; // ecx
  struct _KEVENT *v94; // r14
  int v95; // ecx
  struct _KEVENT *v96; // r14
  int v97; // ecx
  int v98; // ecx
  __int64 v99; // [rsp+50h] [rbp-B0h]
  _LARGE_INTEGER v100; // [rsp+58h] [rbp-A8h]
  __int64 v101; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v102; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER v103; // [rsp+68h] [rbp-98h] BYREF
  _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER *v105; // [rsp+78h] [rbp-88h]
  _QWORD v106[2]; // [rsp+80h] [rbp-80h] BYREF
  char v107; // [rsp+90h] [rbp-70h]
  __int64 v108; // [rsp+98h] [rbp-68h]
  __int64 v109; // [rsp+A0h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v111; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v113; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v114; // [rsp+108h] [rbp+8h] BYREF
  __int128 v115; // [rsp+120h] [rbp+20h]
  __int64 v116; // [rsp+130h] [rbp+30h]
  char v117; // [rsp+190h] [rbp+90h] BYREF
  char v118; // [rsp+198h] [rbp+98h]
  int v119; // [rsp+1A0h] [rbp+A0h]
  int v120; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v118 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v99 = *(_QWORD *)(v1 + 104);
  v4 = *((_DWORD *)a1 + 18);
  LOBYTE(v119) = 0;
  v5 = *(_QWORD *)(v3 + 24);
  if ( v4 == 18 )
  {
    v120 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v120 = 0;
    v6 = 13;
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = v6;
  if ( *((_QWORD *)a1 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)a1 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1728), &LockHandle);
  v107 = 0;
  v106[1] = v106;
  PerformanceFrequency.QuadPart = 0LL;
  v106[0] = v106;
  v102 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v105 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v105;
  PerformanceCounter = v102;
  memset(v105, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  if ( !v102.QuadPart )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = bTracingEnabled == 0;
  v7[1] = PerformanceCounter;
  v7->LowPart = 4;
  if ( !v9
    && (byte_1C00769C4 & 2) != 0
    && *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 305288)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 2944), 1, 0) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 2912), NormalWorkQueue);
  }
  v10 = *(unsigned int *)(v3 + 1560);
  v11 = v3 + 8 * v10;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1568), 0LL, v1) )
  {
    WdLogSingleEntry2(1LL, v5, v99);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Context running queue is inconsistant",
      v5,
      v99,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1560) = ((_BYTE)v10 + 1) & 0xF;
  if ( (*((_DWORD *)a1 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 812));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 728));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2888));
  v12 = PerformanceFrequency;
  v100 = PerformanceFrequency;
  v13 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)];
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned __int64 *)(v3 + 1968 + 8 * v13);
    do
    {
      if ( *(v14 - 8) )
      {
        v15 = v102.QuadPart + *v14 - *(v14 - 4);
        *(v14 - 4) = 0LL;
        *v14 = v15;
        if ( (byte_1C00769C1 & 1) != 0 )
        {
          v60 = *(_WORD *)(v3 + 4);
          v61 = v15 * (unsigned __int128)0x989680uLL;
          v108 = *((_QWORD *)&v61 + 1);
          if ( is_mul_ok(v15, 0x989680uLL) )
          {
            v63 = v61;
            v62 = v61 % (unsigned __int64)v12.QuadPart;
            v64 = v63 / (unsigned __int64)v12.QuadPart;
          }
          else
          {
            v62 = v15 % v12.QuadPart;
            v11 = 10000000 * (v15 / v12.QuadPart);
            v64 = v11 + 10000000 * (v15 % v12.QuadPart) / v12.QuadPart;
          }
          McTemplateK0pqxq_EtwWriteTransfer(v11, v62, v15, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v13, v64, v60);
          v12 = v100;
        }
      }
      --v14;
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
    v7 = v105;
  }
  v16 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
  if ( v16 )
  {
    v42 = *(unsigned int *)(v16 + 404);
    v43 = gulPriorityToYieldPriorityBand[v42];
    if ( gulPriorityToYieldPriorityBand[v42] )
    {
      v44 = (LARGE_INTEGER *)(v3 + 1936 + 8 * v43);
      do
      {
        if ( v44[-4].QuadPart )
          *v44 = v102;
        --v44;
        --v43;
      }
      while ( v43 );
    }
  }
  if ( *(int *)(v3 + 2872) > 0 )
    RtlSetBitEx(v5 + 488, *(unsigned __int16 *)(v3 + 4));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 184) &= ~2u;
    if ( (*(_DWORD *)(v1 + 184) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 184) &= ~8u;
      v58 = VidSchiCompleteRewindPacket(v1, 1LL);
      v59 = (unsigned __int8)v119;
      if ( v58 )
        v59 = 1;
      v119 = v59;
    }
    if ( v99 == *(_QWORD *)(v5 + 240) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 12077LL);
    }
    else
    {
      v116 = 0LL;
      v17 = *(_DWORD *)(v1 + 184);
      v115 = 0LL;
      if ( (v17 & 2) == 0 )
      {
        v18 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
        if ( v18 )
          VidSchiDecrementContextReference(v18);
        *(_QWORD *)(v1 + 496) = 0LL;
      }
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1776);
    v19 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v19 + 1776) )
      *(_DWORD *)(v3 + 1772) &= ~(1 << v19);
    if ( *(_QWORD *)(v1 + 504) )
    {
      v50 = *(_QWORD *)(v1 + 104);
      v51 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v101 = *(_QWORD *)(v50 + 40);
      v103.QuadPart = 0LL;
      v52 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v103) - *(_QWORD *)(v1 + 504));
      v53 = (unsigned __int64)v52.QuadPart * (unsigned __int128)0x989680uLL;
      v109 = *((_QWORD *)&v53 + 1);
      if ( is_mul_ok(v52.QuadPart, 0x989680uLL) )
        v54 = v53 / (unsigned __int64)v103.QuadPart;
      else
        v54 = 10000000 * (v52.QuadPart / (unsigned __int64)v103.QuadPart)
            + 10000000 * (v52.QuadPart % (unsigned __int64)v103.QuadPart) / v103.QuadPart;
      v55 = 8;
      v56 = (unsigned __int64 *)(v51 + 2856);
      v57 = 8LL;
      while ( v54 <= *v56 )
      {
        --v55;
        --v56;
        if ( --v57 < 0 )
          goto LABEL_103;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v101 + 8LL * v55 + 2680));
LABEL_103:
      if ( v54 >= *(_QWORD *)(v51 + 2784) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v101 + 2672));
        if ( v54 >= *(_QWORD *)(v51 + 2768) && !*(_BYTE *)(*(_QWORD *)(v50 + 40) + 2632LL) )
        {
          v65 = *(_DWORD *)(v50 + 48);
          if ( (v65 & 8) == 0
            && (v65 & 1) == 0
            && !*(_DWORD *)(v51 + 3012)
            && !*(_BYTE *)(v50 + 204)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v50 + 200), 0, 0)
            && (*(_DWORD *)(v51 + 2536) & 0x200) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v51 + 2776), (PKDPC)(v1 + 576));
            VidSchiUpdateContextStatus(v1, 7LL, 28534LL);
            if ( bTracingEnabled )
            {
              v67 = *(_QWORD *)(v1 + 56);
              if ( !v67 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v67) = v1;
              if ( (byte_1C00769C1 & 1) != 0 )
                McTemplateK0ppxx_EtwWriteTransfer(
                  *(_QWORD *)(v51 + 2776),
                  (unsigned int)&EventDelayContextScheduling,
                  v66,
                  v67,
                  *(_QWORD *)(v101 + 2640),
                  v54,
                  *(_QWORD *)(v51 + 2776));
            }
          }
        }
      }
      v7 = v105;
      *(_QWORD *)(v1 + 504) = 0LL;
    }
  }
  if ( *(_BYTE *)(v3 + 2024) )
  {
    if ( *(_QWORD *)(v3 + 2000) )
    {
      v117 = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v3,
        (LARGE_INTEGER)v102.QuadPart,
        &v117);
      if ( !v117 )
        goto LABEL_33;
    }
    else
    {
      if ( ((-1 << (*(_BYTE *)(v5 + 200) + 1)) & *(_DWORD *)(v3 + 1772)) != 0 )
        goto LABEL_33;
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v3);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        (LARGE_INTEGER)v102.QuadPart,
        (_LARGE_INTEGER)PerformanceFrequency.QuadPart,
        refreshed);
    }
    LOBYTE(v119) = 1;
  }
LABEL_33:
  v7[2] = *(LARGE_INTEGER *)((char *)a1 + 104);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 16) + 436LL) & 0x200) != 0
    && *(_DWORD *)(v3 + 480)
    && *((_QWORD *)a1 + 13) != *(_QWORD *)(v3 + 472) )
  {
    *(_DWORD *)(v3 + 480) = 0;
  }
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *((_QWORD *)a1 + 13),
            *(_QWORD *)(v3 + 96)) != *((_QWORD *)a1 + 13) )
    ;
  v20 = (LARGE_INTEGER *)*((_QWORD *)a1 + 7);
  if ( v20 )
  {
    v7[3] = v20[14];
    QuadPart = (_QWORD *)v20[11].QuadPart;
    v22 = QuadPart[13];
    v23 = *(_QWORD *)(QuadPart[12] + 24LL);
    v24 = QuadPart[20];
    if ( v24 && v20[14].QuadPart <= v24 )
    {
      if ( !*(_BYTE *)(v22 + 204)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
        && (*(_BYTE *)(v23 + 3036) & 1) == 0 )
      {
        v69 = QuadPart[20];
        v70 = v20[14];
        g_DxgMmsBugcheckExportIndex = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
          0LL,
          281LL,
          1792LL,
          (LARGE_INTEGER)v70.QuadPart,
          v69,
          0LL);
        __debugbreak();
      }
      ((void (__fastcall *)(_QWORD, _QWORD))WdLogSingleEntry1)(4LL, (LARGE_INTEGER)v20[14].QuadPart);
    }
    else
    {
      if ( *(_BYTE *)(v22 + 204)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 200), 0, 0)
        || (*(_BYTE *)(v23 + 3036) & 1) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(4LL, v20, (LARGE_INTEGER)v20[14].QuadPart);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          4LL,
          v20,
          (LARGE_INTEGER)v20[14].QuadPart,
          QuadPart[20]);
      }
      *(LARGE_INTEGER *)(v20[11].QuadPart + 160) = v20[14];
      if ( *(_DWORD *)(*(_QWORD *)(v20[11].QuadPart + 104) + 1576LL) )
        VidSchUnwaitFlipQueue((struct HwQueueStagingList *)v106, v23);
    }
    *((_DWORD *)a1 + 23) |= 0x80u;
    v118 = 1;
  }
  v25 = *((_QWORD *)a1 + 8);
  if ( (*((_DWORD *)a1 + 23) & 2) != 0 )
  {
    v45 = *(_QWORD *)(v25 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = v25;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v25 + 144); i = (unsigned int)(i + 1) )
    {
      v71 = *(struct VIDMM_ALLOC **)(v45 + 8 * i);
      if ( v71 )
        VIDMM_GLOBAL::RemoveDMAReferences(v71, 1);
    }
    v47 = *(_QWORD *)(v25 + 64);
    if ( v47 )
    {
      if ( *(int *)(v47 + 156) < 1 )
      {
        v72 = *(int *)(v47 + 156);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 41LL, v47, v72, 0LL);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 156), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v25 + 20);
  }
  if ( (*((_DWORD *)a1 + 23) & 1) != 0 )
  {
    v48 = *((_QWORD *)a1 + 7);
    v49 = v48 && *(_DWORD *)(v48 + 48) == 8;
    VIDMM_DMA_POOL::ReleaseBuffer(*(VIDMM_DMA_POOL **)(v25 + 136), (struct _VIDMM_DMA_BUFFER *)v25, v49);
  }
  v26 = *((_QWORD *)a1 + 7);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 264);
    if ( v27 )
    {
      for ( j = 0; j < *(_DWORD *)(v26 + 624); ++j )
      {
        v74 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(v27 + 16LL * j);
        if ( *(_QWORD *)v74 )
        {
          VidSchiProcessHistoryBuffer(a1, v74);
          v27 = *(_QWORD *)(v26 + 264);
        }
      }
      VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v26);
    }
  }
  v28 = v99;
  VidSchiUnwaitMonitoredFences((__int64)v106, *(_QWORD *)(v99 + 32), 0LL);
  VidSchiCheckPendingDeviceCommand(v99);
  v29 = v119;
  if ( _bittest64(*(const signed __int64 **)(v5 + 448), *(unsigned __int16 *)(v3 + 4)) )
    v29 = 1;
  if ( bTracingEnabled )
  {
    v30 = *((_QWORD *)a1 + 6);
    if ( *(_DWORD *)(v30 + 984) >= 0x80u )
      VidSchiFlushGpuWorkEntries(*((struct _VIDSCH_CONTEXT **)a1 + 6));
    if ( *(_QWORD *)(v30 + 992)
      || (v75 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v30 + 992) = v75) != 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v30 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v30 + 984))++) = KeQueryPerformanceCounter(0LL).QuadPart | 0x8000000000000000uLL;
      v28 = v99;
    }
    else
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate GpuWorkRecords for long haul logging",
        458LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v28 = v99;
    }
  }
  if ( v120 )
  {
    v76 = v105;
    LOBYTE(v105[4].LowPart) = 1;
    *(_OWORD *)&v76[5].LowPart = *(_OWORD *)(v28 + 208);
    *(_OWORD *)&v76[7].LowPart = *(_OWORD *)(v28 + 224);
    v77 = *(_DWORD *)(v28 + 224);
    if ( (v77 & 4) != 0 )
    {
      if ( !*(_DWORD *)(v3 + 2032) )
      {
        v78 = (_BYTE *)(v5 + 3037);
        v79 = *(_QWORD *)(*(_QWORD *)(v28 + 40) + 2648LL);
        if ( !v79 )
          goto LABEL_167;
        v80 = (_BYTE *)(v5 + 3037);
        v81 = v79 - (_QWORD)v78;
        v82 = 15LL;
        do
        {
          if ( v82 == -2147483631 )
            break;
          v83 = v80[v81];
          if ( !v83 )
            break;
          *v80++ = v83;
          --v82;
        }
        while ( v82 );
        v84 = v80 - 1;
        if ( v82 )
          v84 = v80;
        *v84 = 0;
        if ( !v82 )
LABEL_167:
          *v78 = 0;
        *(_DWORD *)(v3 + 2032) = 1;
      }
    }
    else if ( (v77 & 8) != 0 && !*(_DWORD *)(v3 + 2028) )
    {
      v85 = (_BYTE *)(v3 + 2036);
      v86 = *(_QWORD *)(*(_QWORD *)(v28 + 40) + 2648LL);
      if ( !v86 )
        goto LABEL_179;
      v87 = (_BYTE *)(v3 + 2036);
      v88 = v86 - (_QWORD)v85;
      v89 = 15LL;
      do
      {
        if ( v89 == -2147483631 )
          break;
        v90 = v87[v88];
        if ( !v90 )
          break;
        *v87++ = v90;
        --v89;
      }
      while ( v89 );
      v91 = v87 - 1;
      if ( v89 )
        v91 = v87;
      *v91 = 0;
      if ( !v89 )
LABEL_179:
        *v85 = 0;
      *(_DWORD *)(v3 + 2028) = 1;
    }
    VidSchiMarkDeviceAsError((struct HwQueueStagingList *)v106);
    v31 = 13;
  }
  else
  {
    v31 = 9;
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v106);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(v31, v5, v3, 0, 0LL, 0LL, (__int64)a1, 0LL);
  v32 = (struct _KEVENT **)(v1 + 376);
  memset(&v111, 0, sizeof(v111));
  v33 = (KSPIN_LOCK *)(v5 + 1744);
  LOBYTE(v119) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1744), &v111);
  if ( *v32 != (struct _KEVENT *)v32 )
  {
    v92 = *v32;
    while ( 1 )
    {
      if ( LODWORD(v92->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v92[1].Header.Lock + 4LL * LODWORD(v92[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v92[1].Header.Lock + 244LL) )
          goto LABEL_190;
      }
      else if ( ((__int64)v92[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        Flink = (int)v92[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v92[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_190;
      }
      ++v92[5].Header.LockNV;
      KeSetEvent(v92 + 4, 0, 0);
LABEL_190:
      v92 = *(struct _KEVENT **)&v92->Header.Lock;
      if ( v92 == (struct _KEVENT *)v32 )
      {
        v33 = (KSPIN_LOCK *)(v5 + 1744);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v111);
  KeLowerIrql(v119);
  v34 = (struct _KEVENT *)(v3 + 408);
  memset(&v112, 0, sizeof(v112));
  LOBYTE(v119) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v33, &v112);
  if ( *(struct _KEVENT **)&v34->Header.Lock == v34 )
    goto LABEL_61;
  v94 = *(struct _KEVENT **)&v34->Header.Lock;
  do
  {
    if ( LODWORD(v94->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 4LL * LODWORD(v94[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 244LL) )
        goto LABEL_199;
    }
    else if ( ((__int64)v94[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v95 = (int)v94[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v94[5].Header.WaitListHead.Blink) = v95) == 0) )
    {
LABEL_199:
      ++v94[5].Header.LockNV;
      KeSetEvent(v94 + 4, 0, 0);
    }
    v94 = *(struct _KEVENT **)&v94->Header.Lock;
  }
  while ( v94 != v34 );
  v33 = (KSPIN_LOCK *)(v5 + 1744);
LABEL_61:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
  KeLowerIrql(v119);
  v35 = (struct _KEVENT *)(v5 + 1640);
  memset(&v113, 0, sizeof(v113));
  LOBYTE(v119) = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v33, &v113);
  if ( *(struct _KEVENT **)&v35->Header.Lock == v35 )
    goto LABEL_62;
  v96 = *(struct _KEVENT **)&v35->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v96->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 4LL * LODWORD(v96[1].Header.WaitListHead.Blink) + 1444) < *(_DWORD *)(*(_QWORD *)&v96[1].Header.Lock + 244LL) )
        goto LABEL_209;
    }
    else if ( ((__int64)v96[1].Header.WaitListHead.Flink & 0x10) == 0
           || (v97 = (int)v96[1].Header.WaitListHead.Blink->Flink, (HIDWORD(v96[5].Header.WaitListHead.Blink) = v97) == 0) )
    {
LABEL_209:
      ++v96[5].Header.LockNV;
      KeSetEvent(v96 + 4, 0, 0);
    }
    v96 = *(struct _KEVENT **)&v96->Header.Lock;
    if ( v96 != v35 )
      continue;
    break;
  }
  v33 = (KSPIN_LOCK *)(v5 + 1744);
LABEL_62:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v113);
  KeLowerIrql(v119);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1448) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1416), 0, 0);
  if ( v29 )
  {
    *(_QWORD *)(v5 + 1224) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1192), 0, 0);
  }
  v36 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v36 )
    KeSetEvent(v36, 0, 0);
  v37 = (struct _KEVENT *)(v5 + 1688);
  memset(&v114, 0, sizeof(v114));
  v38 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v33, &v114);
  v39 = *(struct _KEVENT **)(v5 + 1688);
  if ( *(struct _KEVENT **)&v37->Header.Lock != v37 )
  {
    do
    {
      if ( LODWORD(v39->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 4LL * LODWORD(v39[1].Header.WaitListHead.Blink) + 1444) >= *(_DWORD *)(*(_QWORD *)&v39[1].Header.Lock + 244LL) )
          goto LABEL_219;
      }
      else if ( ((__int64)v39[1].Header.WaitListHead.Flink & 0x10) != 0 )
      {
        v98 = (int)v39[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v39[5].Header.WaitListHead.Blink) = v98;
        if ( v98 )
          goto LABEL_219;
      }
      ++v39[5].Header.LockNV;
      KeSetEvent(v39 + 4, 0, 0);
LABEL_219:
      v39 = *(struct _KEVENT **)&v39->Header.Lock;
    }
    while ( v39 != v37 );
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v114);
  KeLowerIrql(v38);
  v40 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  v41 = -1;
  if ( v40 )
    v41 = *((_DWORD *)v40 + 40);
  if ( v118 )
  {
    do
      v40 = VidSchiProcessCompletedQueuePacketInternal(v40);
    while ( v40 );
  }
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v41 != -1 && (*((_DWORD *)a1 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v41 + 3200),
      (struct _VIDSCH_GLOBAL *)v5);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v106);
}
