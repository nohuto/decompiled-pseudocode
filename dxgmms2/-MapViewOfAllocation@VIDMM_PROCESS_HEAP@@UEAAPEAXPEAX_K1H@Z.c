/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C0104DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  char *v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  ULONG_PTR v24; // rax
  __int64 v25; // rbx
  NTSTATUS v26; // eax
  char *v27; // r14
  __int64 v28; // rcx
  PVOID Section; // [rsp+60h] [rbp-18h]
  __int64 v31; // [rsp+68h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+C0h] [rbp+48h] BYREF
  PVOID MappedBase; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+58h]
  __int64 v35; // [rsp+D8h] [rbp+60h] BYREF

  v35 = a4;
  v34 = a3;
  v5 = 0LL;
  v6 = a3;
  MappedBase = 0LL;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  v13 = *((_QWORD *)this + 1);
  if ( CurrentProcess != *(_QWORD *)v13 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  v14 = *(_DWORD *)a2;
  LODWORD(ViewSize) = 4;
  if ( (v14 & 1) != 0 )
  {
    v15 = v6;
    v11 = (void *)a2[4];
    Section = v11;
    v10 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
    LODWORD(ViewSize) = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v13 = a2[1];
    v15 = v6 + a2[2];
    Section = *(PVOID *)(v13 + 88);
    if ( ((*(_DWORD *)(v13 + 80) - 4) & 0xFFFFFFFD) != 0 )
      LODWORD(ViewSize) = 1028;
  }
  v31 = v15;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry1(6LL, 2344LL);
    DxgkLogInternalTriageEvent(v16, 262145LL);
    v17 = -1073741823;
  }
  else
  {
    v18 = v35;
    v19 = PsGetCurrentProcess(v13, v10, v11, v12);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v17 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, _DWORD))VirtualMemoryInterface
           + 3))(
            Section,
            v19,
            &MappedBase,
            0LL,
            v18,
            &v31,
            &v35,
            2,
            0,
            ViewSize);
    if ( v17 >= 0 )
    {
      v21 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v22 = v15 - v31;
      a2[11] = v21;
      return &v21[v22];
    }
    v6 = v34;
  }
  _InterlockedIncrement(&dword_1C0076894);
  WdLogSingleEntry2(6LL, a5, v17);
  DxgkLogInternalTriageEvent(v23, 262145LL);
  if ( a5 )
    return (char *)MappedBase;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v24 = a2[7];
    v25 = 0LL;
  }
  else
  {
    v25 = a2[2];
    v24 = *(_QWORD *)(a2[1] + 40LL);
  }
  ViewSize = v24;
  v26 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
  if ( v26 < 0 )
  {
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry1(6LL, v26);
    DxgkLogInternalTriageEvent(v28, 262145LL);
  }
  else
  {
    v27 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v27;
    return &v27[v25 + v6];
  }
  return (char *)v5;
}
