/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K@Z @ 0x1C01050B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocationExternal(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v24 = a3;
  v22 = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( CurrentProcess != *v10 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v11 = 0LL;
    v12 = a2[4];
    v13 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v14 = a2[1];
    v13 = 4;
    v11 = a2[2];
    v12 = *(_QWORD *)(v14 + 88);
    if ( ((*(_DWORD *)(v14 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v13 = 1028;
  }
  v23 = v11;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry1(6LL, 2559LL);
    DxgkLogInternalTriageEvent(v15, 262145LL);
    v16 = -1073741823;
LABEL_9:
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry1(6LL, v16);
    DxgkLogInternalTriageEvent(v17, 262145LL);
    return v22;
  }
  v19 = v24;
  v20 = PsGetCurrentProcess(v10, v7, v8, v9);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v16 = (*((__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
         + 3))(
          v12,
          v20,
          &v22,
          0LL,
          v19,
          &v23,
          &v24,
          2,
          0,
          v13);
  if ( v16 < 0 )
    goto LABEL_9;
  return v11 - v23 + v22;
}
