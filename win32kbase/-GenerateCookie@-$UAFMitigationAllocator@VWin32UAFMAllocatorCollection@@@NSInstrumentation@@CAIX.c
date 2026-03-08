/*
 * XREFs of ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C017D510
 * Callers:
 *     Win32UAFMAllocPoolWithPriority @ 0x1C017D1B0 (Win32UAFMAllocPoolWithPriority.c)
 *     Win32UAFMAllocPoolWithQuota @ 0x1C017D220 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C017D280 (Win32UAFMAllocPoolWithQuotaZInit.c)
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1C017D350 (Win32UAFMAllocateFromPagedLookasideList.c)
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C017D47C (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 * Callees:
 *     <none>
 */

ULONG NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie()
{
  unsigned __int64 v0; // rax
  ULONG result; // eax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = __rdtsc();
  Seed = v0;
  result = RtlRandomEx(&Seed);
  if ( !result )
    return 1;
  return result;
}
