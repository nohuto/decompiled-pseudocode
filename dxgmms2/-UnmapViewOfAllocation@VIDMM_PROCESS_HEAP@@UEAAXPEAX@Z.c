// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(VIDMM_PROCESS_HEAP *this, void **a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  int v11; // eax
  void *v12; // rsi
  void *v13; // rbx
  struct _EPROCESS *v14; // rax
  __int64 v15; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v17; // rcx

  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  if ( CurrentProcess != *v10 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  v11 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v12 = a2[11];
    if ( (v11 & 1) != 0 )
    {
      v13 = a2[4];
      v14 = (struct _EPROCESS *)PsGetCurrentProcess(v10, v7, v8, v9);
      VidMmUnmapViewAsync(v14, v13, v12);
    }
    else
    {
      v15 = PsGetCurrentProcess(v10, v7, v8, v9);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v15, v12);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    a2[11] = 0LL;
    return;
  }
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, a2[4], a2[11]);
    else
      MmUnmapViewInSystemSpace(a2[11]);
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  WdLogSingleEntry1(1LL, 2490LL);
  DxgkLogInternalTriageEvent(v17, 0x40000LL);
}
