/*
 * XREFs of TestReport @ 0x1800AF65C
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA2C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x1800AF7D0 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestReport(__int64 a1)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestReport");
  `TestReport'::`2'::s_pfnTestReport = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
