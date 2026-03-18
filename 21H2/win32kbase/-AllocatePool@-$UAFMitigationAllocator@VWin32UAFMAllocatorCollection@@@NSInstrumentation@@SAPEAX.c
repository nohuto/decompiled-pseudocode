/*
 * XREFs of ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAX_K0IPEAI@Z @ 0x1C0146428
 * Callers:
 *     Win32UAFMAllocPagedLookasideList @ 0x1C01672E0 (Win32UAFMAllocPagedLookasideList.c)
 *     Win32UAFMAllocPool @ 0x1C0167360 (Win32UAFMAllocPool.c)
 *     Win32UAFMAllocPoolNonPaged @ 0x1C0167390 (Win32UAFMAllocPoolNonPaged.c)
 *     Win32UAFMAllocPoolZInit @ 0x1C0167510 (Win32UAFMAllocPoolZInit.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C014640C (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01464BC (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rdi
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v8 = 0LL;
  if ( v5 )
  {
    v9 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           v7,
           v5,
           v6);
    if ( v9 )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *(_DWORD *)(v9 + 12) = Cookie;
      v8 = v9 + 16;
      *a4 = Cookie - 1;
    }
  }
  return v8;
}
