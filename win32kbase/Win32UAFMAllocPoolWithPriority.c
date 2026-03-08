/*
 * XREFs of Win32UAFMAllocPoolWithPriority @ 0x1C017D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C017D460 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C017D510 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1C019AEA0 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 */

char *__fastcall Win32UAFMAllocPoolWithPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v5; // rax
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned int v7; // r8d
  enum _EX_POOL_PRIORITY v8; // r9d
  unsigned __int64 v9; // r10
  char *v10; // rbx
  _DWORD *Priority; // rdi
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v10 = 0LL;
  if ( v5 )
  {
    Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(v6, v9, v5, v7, v8);
    if ( Priority )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Priority[3] = Cookie;
      v10 = (char *)(Priority + 4);
      *a5 = Cookie - 1;
    }
  }
  return v10;
}
