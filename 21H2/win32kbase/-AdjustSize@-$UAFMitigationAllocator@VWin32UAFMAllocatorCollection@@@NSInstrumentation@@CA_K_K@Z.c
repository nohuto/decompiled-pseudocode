/*
 * XREFs of ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C014640C
 * Callers:
 *     ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C0146428 (-AllocatePool@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX.c)
 *     Win32UAFMAllocPagedLookasideList @ 0x1C01672E0 (Win32UAFMAllocPagedLookasideList.c)
 *     Win32UAFMAllocPoolWithPriority @ 0x1C01673C0 (Win32UAFMAllocPoolWithPriority.c)
 *     Win32UAFMAllocPoolWithQuota @ 0x1C0167430 (Win32UAFMAllocPoolWithQuota.c)
 *     Win32UAFMAllocPoolWithQuotaZInit @ 0x1C0167490 (Win32UAFMAllocPoolWithQuotaZInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFEEuLL )
    return 0LL;
  else
    return a1 + 16;
}
