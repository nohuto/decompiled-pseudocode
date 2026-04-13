/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180008FF0
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180009138 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180009D24 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B0D0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  DWORD LastError; // ebp
  unsigned __int64 v5; // rsi
  HANDLE ProcessHeap; // rax
  char *v7; // rdi
  int (*v8)(void *, void *); // r14
  HANDLE v9; // rcx
  rsize_t v11; // r14
  void *v12; // r15
  HANDLE v13; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    LastError = GetLastError();
    v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    ProcessHeap = GetProcessHeap();
    v7 = (char *)HeapAlloc(ProcessHeap, 0, v5);
    v8 = wil::details::g_pfnRtlDisownModuleHeapAllocation;
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v9 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))v8)(v9, v7);
    }
    if ( !v7 )
    {
      SetLastError(LastError);
      return 0;
    }
    v11 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v7, v5, *(const void *const *)this, v11);
    v12 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v12 )
    {
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
    }
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v11];
    *((_QWORD *)this + 2) = &v7[v5];
    SetLastError(LastError);
  }
  return 1;
}
