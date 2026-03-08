/*
 * XREFs of ?QueryVirtualFunctionLuid@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_QUERYVIRTUALFUNCTIONLUID@@@Z @ 0x1C036452C
 * Callers:
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0366104 (DxgkDdiQueryVirtualFunctionLuid.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::QueryVirtualFunctionLuid(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a2 == 1 )
    v4 = *(_QWORD *)(a1 + 1872);
  else
    v4 = *(_QWORD *)(a1 + 1864);
  if ( v4
    && *a3 < *(_DWORD *)(v4 + 12)
    && (v5 = (unsigned int)*a3, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v5))
    && (_mm_lfence(), (v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v5)) != 0) )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 112LL))(v6, a3);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, (unsigned int)*a3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid virtual GPU index: %I64n",
      (unsigned int)*a3,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
