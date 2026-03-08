/*
 * XREFs of Win32UAFMAllocPoolWithQuotaZInit @ 0x1C017D280
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C017D460 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C017D510 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

_DWORD *__fastcall Win32UAFMAllocPoolWithQuotaZInit(size_t Size, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // edx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rcx
  _DWORD *v8; // rbx
  __int64 Quota; // rax
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(Size);
  if ( !v5 )
    return 0LL;
  Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v7, 260LL, v5, v6);
  if ( !Quota )
    return 0LL;
  v8 = (_DWORD *)(Quota + 16);
  Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
  *(v8 - 1) = Cookie;
  *a3 = Cookie - 1;
  if ( v8 )
    memset(v8, 0, Size);
  return v8;
}
