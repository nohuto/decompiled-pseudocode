/*
 * XREFs of Win32UAFMAllocPoolWithQuota @ 0x1C017D220
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C017D460 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C017D510 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithQuota(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  __int64 v7; // rbx
  __int64 Quota; // rdi
  int Cookie; // eax

  v4 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a1);
  v7 = 0LL;
  if ( v4 )
  {
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v6, 260LL, v4, v5);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(Quota + 12) = Cookie;
      v7 = Quota + 16;
      *a3 = Cookie - 1;
    }
  }
  return v7;
}
