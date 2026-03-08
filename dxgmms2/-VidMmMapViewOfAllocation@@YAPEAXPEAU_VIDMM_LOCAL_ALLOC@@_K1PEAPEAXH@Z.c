/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00955FC
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00F7700 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F7CE0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00F8190 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00F8B10 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void **a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  struct _VIDMM_LOCAL_ALLOC *v8; // r13
  __int64 v9; // r8
  _DWORD *v10; // rbx
  int v11; // edx
  __int64 v12; // rbx
  __int64 CurrentProcess; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v17; // eax
  char *v18; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  PVOID MappedBase; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  int v30; // [rsp+78h] [rbp-1h] BYREF
  __int64 v31; // [rsp+80h] [rbp+7h]
  char v32; // [rsp+88h] [rbp+Fh]
  __int16 v33; // [rsp+D8h] [rbp+5Fh]
  __int64 v34; // [rsp+E8h] [rbp+6Fh] BYREF
  void **v35; // [rsp+F0h] [rbp+77h] BYREF

  v35 = a4;
  v34 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v8 = a1;
  v9 = *(unsigned int *)(v5 + 68);
  v10 = (_DWORD *)(v5 + 72);
  if ( (v9 & 0x100) != 0 && (*v10 & 0x80) != 0 )
  {
    v18 = (char *)*((_QWORD *)a1 + 2);
    return &v18[(_QWORD)a2];
  }
  v11 = **(_DWORD **)(v5 + 536);
  v33 = v11;
  if ( (v11 & 0x20008) != 0 )
  {
    if ( a5 )
      return (char *)v6;
    v18 = *(char **)(v5 + 392);
    return &v18[(_QWORD)a2];
  }
  if ( (*(_BYTE *)(v5 + 76) & 4) != 0 || (*(_DWORD *)(v5 + 68) & 0x100) != 0 )
  {
    v26 = *(_QWORD *)(v5 + 384);
    v35 = a2;
    v27 = MmMapViewInSystemSpaceEx(v26, v5 + 392, &v34, &v35, 0LL);
    if ( v27 < 0 )
    {
      _InterlockedIncrement(&dword_1C0076894);
      WdLogSingleEntry2(6LL, v5, v27);
LABEL_35:
      DxgkLogInternalTriageEvent(v23, 262145LL);
      return (char *)MappedBase;
    }
    MappedBase = (char *)a2 + *(_QWORD *)(v5 + 392) - (_QWORD)v35;
    *v10 |= 0x1000000u;
    return (char *)MappedBase;
  }
  LOBYTE(a1) = (v11 & 0x30) == 0;
  if ( ((unsigned __int8)a1 & (*(_BYTE *)v10 >= 0)) != 0 )
  {
    if ( (v11 & 0x20000000) == 0 )
    {
      v30 = -1;
      v31 = 0LL;
      if ( (qword_1C0076010 & 2) != 0 )
      {
        v32 = 1;
        v30 = 8002;
        if ( byte_1C00769C1 < 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, v9, 8002);
      }
      else
      {
        v32 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      MappedBase = (PVOID)(*(__int64 (__fastcall **)(_QWORD, _QWORD, void **, __int64, int))(**(_QWORD **)(*((_QWORD *)v8 + 1) + 24LL)
                                                                                           + 56LL))(
                            *(_QWORD *)(*((_QWORD *)v8 + 1) + 24LL),
                            *((_QWORD *)v8 + 3),
                            a2,
                            v34,
                            a5);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v30);
      return (char *)MappedBase;
    }
    if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      _InterlockedIncrement(&dword_1C0076894);
      WdLogSingleEntry1(6LL, 647LL);
      DxgkLogInternalTriageEvent(v20, 262145LL);
      v17 = -1073741823;
    }
    else
    {
      v12 = *(_QWORD *)(v5 + 8);
      v29 = 0LL;
      CurrentProcess = PsGetCurrentProcess();
      v14 = *(_QWORD *)(v5 + 384);
      v15 = CurrentProcess;
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v17 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v14,
              v15,
              &MappedBase,
              0LL,
              v12,
              &v29,
              v5 + 8,
              2,
              0,
              ~(v33 << 8) & 0x400 | 4u);
      if ( v17 >= 0 )
      {
LABEL_8:
        v18 = (char *)MappedBase;
        *v35 = MappedBase;
        return &v18[(_QWORD)a2];
      }
    }
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry2(6LL, a5, v17);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    if ( !a5 )
    {
      v22 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 384), &MappedBase, (PSIZE_T)(v5 + 8));
      if ( v22 >= 0 )
      {
        *((_BYTE *)v8 + 32) |= 8u;
        goto LABEL_8;
      }
      _InterlockedIncrement(&dword_1C0076894);
      WdLogSingleEntry1(6LL, v22);
      goto LABEL_35;
    }
    return (char *)MappedBase;
  }
  if ( !a5 || (v11 & 0x20) == 0 )
  {
    v18 = (char *)*((_QWORD *)v8 + 2);
    return &v18[(_QWORD)a2];
  }
  return (char *)v6;
}
