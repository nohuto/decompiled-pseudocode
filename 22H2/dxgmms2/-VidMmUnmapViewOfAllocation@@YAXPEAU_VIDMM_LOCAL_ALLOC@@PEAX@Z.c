/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0062C20
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0062DAC (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0063620 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0064460 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C008AAF0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008AFC0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00C1C00 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C2770 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0005710 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0017928 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0062738 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  void *CurrentProcess; // rdi
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x100;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x100) == 0 || (*(_DWORD *)(v2 + 80) & 0x80u) == 0 )
  {
    v6 = **(unsigned int **)(v2 + 496);
    if ( (v6 & 8) == 0 && (v6 & 0x20000) == 0 )
    {
      CurrentProcess = 0LL;
      if ( (*(_DWORD *)(v2 + 84) & 4) != 0 || (_DWORD)v5 )
      {
        v11 = *(void **)(v2 + 360);
        if ( v11 )
        {
          MmUnmapViewInSystemSpace(v11);
          *(_DWORD *)(v2 + 80) &= ~0x800000u;
          *(_QWORD *)(v2 + 360) = 0LL;
        }
      }
      else if ( (*(_DWORD *)(v2 + 80) & 0x80u) == 0 && (v6 & 0x40000030) == 0 )
      {
        if ( (v6 & 0x20000000) != 0 )
        {
          v8 = *((_BYTE *)a1 + 32);
          if ( (v8 & 8) != 0 )
            *((_BYTE *)a1 + 32) = v8 & 0xF7;
          else
            CurrentProcess = (void *)PsGetCurrentProcess(v6, a2, v5);
          VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v2 + 352), a2);
        }
        else
        {
          v12 = -1;
          v13 = 0LL;
          if ( (qword_1C0050010 & 2) != 0 )
          {
            v14 = 1;
            v12 = 8003;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v5, 8003);
          }
          else
          {
            v14 = 0;
          }
          DXGETWPROFILER_BASE::PushProfilerEntry();
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 24LL) + 64LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
            *((_QWORD *)a1 + 3));
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
          if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
        }
      }
    }
  }
}
