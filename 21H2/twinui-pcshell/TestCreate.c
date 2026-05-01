/*
 * XREFs of TestCreate @ 0x1800AF48C
 * Callers:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBD0 (-start@-$shared_data@$00$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AED20 (-start@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x1800AF7D0 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TestCreate(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, _OWORD *a6)
{
  __int64 (__fastcall *v6)(_QWORD, _QWORD, __int64, _QWORD, __int64, _OWORD *); // r10
  char v8; // di
  HMODULE KernelBaseModuleHandle; // rax

  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, _OWORD *))`TestCreate'::`2'::s_pfnTestCreate;
  v8 = a3;
  if ( `TestCreate'::`2'::s_pfnTestCreate
    || (KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle(),
        `TestCreate'::`2'::s_pfnTestCreate = (__int64)GetProcAddress(KernelBaseModuleHandle, "TestCreate"),
        (v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, __int64, _OWORD *))`TestCreate'::`2'::s_pfnTestCreate) != 0LL) )
  {
    LOBYTE(a3) = v8;
    return v6(a1, 0LL, a3, a4, a5, a6);
  }
  else
  {
    *a6 = 0LL;
    return 0LL;
  }
}
