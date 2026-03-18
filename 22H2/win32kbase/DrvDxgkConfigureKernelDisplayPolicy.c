/*
 * XREFs of DrvDxgkConfigureKernelDisplayPolicy @ 0x1C000F99C
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C000F8FC (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkConfigureKernelDisplayPolicy(unsigned int a1, unsigned int a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 752))(a1, a2);
}
