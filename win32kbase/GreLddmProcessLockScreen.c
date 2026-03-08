/*
 * XREFs of GreLddmProcessLockScreen @ 0x1C000DD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLddmProcessLockScreen(unsigned int a1)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  return (*(__int64 (__fastcall **)(_QWORD))(DxgkWin32kInterface + 584))(a1);
}
