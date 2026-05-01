/*
 * XREFs of TestUnlockData @ 0x1800AF690
 * Callers:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC274 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x1800AF7B0 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestUnlockData(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestUnlockData'::`2'::s_pfnTestUnlockData;
  if ( `TestUnlockData'::`2'::s_pfnTestUnlockData )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestUnlockData");
  `TestUnlockData'::`2'::s_pfnTestUnlockData = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
