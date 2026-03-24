/*
 * XREFs of Win32UAFMAllocPoolWithQuotaImpl @ 0x1C02202B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C021F920 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C021F9DC (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C02DDD60 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 */

char *__fastcall Win32UAFMAllocPoolWithQuotaImpl(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  char *v5; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned __int64 v7; // r8
  enum _POOL_TYPE v8; // r10d
  _DWORD *Quota; // rdi
  ULONG Cookie; // eax

  v5 = 0LL;
  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v7 )
  {
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v6, v8, v7, a3);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Quota[3] = Cookie;
      v5 = (char *)(Quota + 4);
      *a4 = Cookie - 1;
    }
  }
  return v5;
}
