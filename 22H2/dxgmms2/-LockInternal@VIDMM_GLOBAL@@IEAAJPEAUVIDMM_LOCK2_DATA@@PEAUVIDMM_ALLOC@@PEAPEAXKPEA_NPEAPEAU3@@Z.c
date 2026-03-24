/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C006BEB0
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C006B380 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C00017AC (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x1C0024A28 (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857BC (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C00857DC (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00AF83C (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00AF968 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00AFA64 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00AFB20 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        __int64 **a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // ebx
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  struct VIDMM_ALLOC **v36; // [rsp+50h] [rbp-98h] BYREF
  bool *v37; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE v38; // [rsp+60h] [rbp-88h] BYREF
  VIDMM_PROCESS *v39; // [rsp+90h] [rbp-58h]

  v37 = a6;
  v36 = a7;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2646LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 889LL) )
  {
    LODWORD(v11) = 0;
    v12 = *a3;
    v13 = **a3;
    v39 = (VIDMM_PROCESS *)(*a3)[1];
    VIDMM_PROCESS::SafeAttach(v39, &v38);
    v16 = (unsigned int)(*(_DWORD *)a2 - 2);
    if ( *(_DWORD *)a2 == 2 )
    {
      if ( (v12[4] & 1) != 0 )
        goto LABEL_20;
      v25 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              (struct VIDMM_ALLOC *)a3,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(**a3 + 128) + 488LL));
    }
    else
    {
      if ( *(_DWORD *)a2 != 3 )
      {
        v16 = (unsigned int)(*(_DWORD *)a2 - 4);
        if ( *(_DWORD *)a2 == 4 )
        {
          ExReleasePushLockExclusiveEx(v13 + 472, 0LL);
          KeLeaveCriticalRegion();
          LODWORD(v11) = VIDMM_GLOBAL::LockInAperture(this, (struct VIDMM_ALLOC *)a3, v37, v36);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v13 + 472, 0LL);
        }
        else
        {
          if ( *(_DWORD *)a2 != 5 )
            goto LABEL_20;
          v17 = **(_DWORD **)(v13 + 496);
          if ( (v17 & 0x20000000) != 0 )
          {
            v36 = 0LL;
            CurrentProcess = PsGetCurrentProcess(v16, v14, v15);
            LODWORD(v11) = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *, _QWORD, _QWORD, struct VIDMM_ALLOC ***, __int64, int, _DWORD, unsigned int))MmMapViewOfSection)(
                             *(_QWORD *)(v13 + 352),
                             CurrentProcess,
                             v12 + 2,
                             0LL,
                             *(_QWORD *)(v13 + 8),
                             &v36,
                             v13 + 8,
                             2,
                             0,
                             ~((_WORD)v17 << 8) & 0x400 | 4u);
            if ( (int)v11 >= 0 )
              goto LABEL_20;
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v12[1] + 24) + 72LL))(
                    *(_QWORD *)(v12[1] + 24),
                    v12[3],
                    *(_QWORD *)(v13 + 8));
            v12[2] = v19;
            if ( v19 )
              goto LABEL_20;
            LODWORD(v11) = -1073741801;
          }
          _InterlockedIncrement(&dword_1C0050774);
          v20 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
          v20[3] = v13;
          v24 = PsGetCurrentProcess(v22, v21, v23);
          v20[5] = (int)v11;
          v20[4] = v24;
          WdLogEvent5_WdLowResource(v20);
        }
        goto LABEL_19;
      }
      v25 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, (struct VIDMM_ALLOC *)a3);
    }
    v11 = v25;
    if ( v25 >= 0 )
      goto LABEL_20;
    v27 = WdLogNewEntry5_WdWarning(v16, v26);
    *(_QWORD *)(v27 + 24) = a3;
    *(_QWORD *)(v27 + 32) = v11;
    WdLogEvent5_WdWarning(v27);
    *((_BYTE *)a2 + 4) = 1;
    *(_DWORD *)a2 = 4;
LABEL_19:
    if ( (int)v11 < 0 )
    {
LABEL_32:
      VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v16, &v38);
      return (unsigned int)v11;
    }
LABEL_20:
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 336));
    ++*((_DWORD *)v12 + 19);
    *(_DWORD *)(v13 + 84) |= 0x20u;
    v28 = *(_DWORD *)(v13 + 80);
    if ( (v28 & 0x4000) != 0 )
    {
      v29 = *(void **)(v13 + 528);
    }
    else
    {
      if ( (v28 & 0x2000) != 0 )
      {
        LODWORD(v11) = LockParavirtualizedAllocationOnHost((struct VIDMM_ALLOC *)a3, a4);
        goto LABEL_28;
      }
      v16 = **(unsigned int **)(v13 + 496);
      if ( (v16 & 8) != 0 )
        v29 = *(void **)(v13 + 360);
      else
        v29 = (void *)v12[2];
    }
    *a4 = v29;
LABEL_28:
    if ( (int)v11 >= 0 )
    {
      *(_BYTE *)(v13 + 89) = 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v30 = *(unsigned int *)a2;
        LODWORD(v35) = v30 == 4;
        LODWORD(v34) = *(_DWORD *)a2;
        LODWORD(v33) = a5;
        McTemplateK0pqqt_EtwWriteTransfer(v30, &EventLock2, v15, a3, v33, v34, v35);
      }
      VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7176), a5, 0, *(_DWORD *)a2 == 4);
    }
    goto LABEL_32;
  }
  v32 = WdLogNewEntry5_WdWarning(this, a2);
  WdLogEvent5_WdWarning(v32);
  return 3221226166LL;
}
