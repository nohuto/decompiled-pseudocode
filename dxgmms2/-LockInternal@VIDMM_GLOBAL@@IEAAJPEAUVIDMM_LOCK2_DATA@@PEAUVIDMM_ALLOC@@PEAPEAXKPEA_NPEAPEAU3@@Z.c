/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C008CD80
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C002F01C (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B2280 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00B22A0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00E4730 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00E4870 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00E4970 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00E4A28 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        struct VIDMM_ALLOC *a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  void **v7; // rdi
  struct VIDMM_ALLOC *v8; // rbp
  __int64 v11; // rax
  volatile signed __int32 *v12; // r14
  int v13; // r15d
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  int v18; // eax
  void *v19; // rax
  int v21; // ecx
  __int64 v22; // rdi
  __int64 CurrentProcess; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-E8h]
  __int64 v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D8h]
  int v35; // [rsp+60h] [rbp-A8h]
  struct VIDMM_ALLOC **v36; // [rsp+68h] [rbp-A0h] BYREF
  void **v37; // [rsp+70h] [rbp-98h]
  struct VIDMM_ALLOC *v38; // [rsp+78h] [rbp-90h]
  struct _KAPC_STATE v39; // [rsp+80h] [rbp-88h] BYREF
  VIDMM_PROCESS *v40; // [rsp+B0h] [rbp-58h]

  v7 = a4;
  v8 = a3;
  v36 = a7;
  v11 = *((_QWORD *)this + 3);
  v37 = a4;
  v38 = a3;
  if ( !*(_BYTE *)(v11 + 2870) && !*(_BYTE *)(*((_QWORD *)this + 2) + 1025LL) )
  {
    v12 = *(volatile signed __int32 **)a3;
    v13 = 0;
    v14 = 0;
    v15 = **(_QWORD **)a3;
    v40 = *(VIDMM_PROCESS **)(*(_QWORD *)a3 + 8LL);
    VIDMM_PROCESS::SafeAttach(v40, &v39);
    v17 = *(unsigned int *)a2;
    if ( (int)v17 < 2 )
      goto LABEL_4;
    v17 = (unsigned int)(v17 - 2);
    if ( (_DWORD)v17 )
    {
      v21 = v17 - 1;
      if ( v21 )
      {
        v17 = (unsigned int)(v21 - 1);
        if ( (_DWORD)v17 )
        {
          if ( (_DWORD)v17 != 1 )
            goto LABEL_4;
          v35 = **(_DWORD **)(v15 + 536);
          if ( (v35 & 0x20000000) != 0 )
          {
            v22 = *(_QWORD *)(v15 + 8);
            v36 = 0LL;
            CurrentProcess = PsGetCurrentProcess();
            v24 = *(_QWORD *)(v15 + 384);
            v25 = CurrentProcess;
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            v14 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, __int64, struct VIDMM_ALLOC ***, __int64, int, _DWORD, unsigned int))VirtualMemoryInterface
                   + 3))(
                    v24,
                    v25,
                    (_QWORD *)v12 + 2,
                    0LL,
                    v22,
                    &v36,
                    v15 + 8,
                    2,
                    0,
                    ~((_WORD)v35 << 8) & 0x400 | 4u);
            if ( v14 >= 0 )
            {
              v7 = v37;
              v8 = v38;
              goto LABEL_4;
            }
            goto LABEL_34;
          }
          v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v12 + 1) + 24LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)v12 + 1) + 24LL),
                  *((_QWORD *)v12 + 3),
                  *(_QWORD *)(v15 + 8));
          *((_QWORD *)v12 + 2) = v27;
          if ( !v27 )
          {
            v14 = -1073741801;
LABEL_34:
            _InterlockedIncrement(&dword_1C0076894);
            v28 = PsGetCurrentProcess();
            WdLogSingleEntry3(6LL, v15, v28, v14);
            PsGetCurrentProcess();
            DxgkLogInternalTriageEvent(v29, 262145LL);
LABEL_24:
            VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v17, &v39);
            return (unsigned int)v14;
          }
        }
        else
        {
          ExReleasePushLockExclusiveEx(v15 + 504, 0LL);
          KeLeaveCriticalRegion();
          v14 = VIDMM_GLOBAL::LockInAperture(this, v8, a6, v36);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v15 + 504, 0LL);
          if ( v14 < 0 )
            goto LABEL_24;
        }
LABEL_4:
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 360));
        _InterlockedIncrement(v12 + 19);
        v18 = *(_DWORD *)(v15 + 72);
        *(_BYTE *)(v15 + 80) = 1;
        if ( (v18 & 0x4000) != 0 )
        {
          v19 = *(void **)(v15 + 568);
        }
        else
        {
          if ( (v18 & 0x2000) != 0 )
          {
            v14 = LockParavirtualizedAllocationOnHost(v8, v7);
LABEL_9:
            if ( v14 >= 0 )
            {
              *(_BYTE *)(v15 + 82) = 1;
              if ( (byte_1C00769C1 & 1) != 0 )
              {
                v31 = *(unsigned int *)a2;
                LODWORD(v34) = v31 == 4;
                LODWORD(v33) = *(_DWORD *)a2;
                LODWORD(v32) = a5;
                McTemplateK0pqqt_EtwWriteTransfer(v31, &EventLock2, v16, v8, v32, v33, v34);
              }
              if ( *(_DWORD *)a2 == 4 )
                v13 = 1;
              ++*((_DWORD *)this + 1904);
              if ( (a5 & 1) != 0 )
                ++*((_DWORD *)this + 1905);
              if ( (a5 & 0x10) != 0 )
                ++*((_DWORD *)this + 1906);
              if ( (a5 & 2) != 0 )
                ++*((_DWORD *)this + 1907);
              if ( (a5 & 0x80u) != 0 )
                ++*((_DWORD *)this + 1908);
              if ( v13 )
                ++*((_DWORD *)this + 1910);
            }
            goto LABEL_24;
          }
          v17 = **(unsigned int **)(v15 + 536);
          if ( (v17 & 8) != 0 )
            v19 = *(void **)(v15 + 392);
          else
            v19 = (void *)*((_QWORD *)v12 + 2);
        }
        *v7 = v19;
        goto LABEL_9;
      }
      v30 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, v8);
    }
    else
    {
      if ( (v12[8] & 1) != 0 )
        goto LABEL_4;
      v30 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              v8,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(**(_QWORD **)v8 + 120LL) + 504LL));
    }
    v14 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry2(3LL, v8, v30);
      *(_DWORD *)a2 = 4;
      *((_BYTE *)a2 + 4) = 1;
      goto LABEL_24;
    }
    goto LABEL_4;
  }
  WdLogSingleEntry0(3LL);
  return 3221226166LL;
}
