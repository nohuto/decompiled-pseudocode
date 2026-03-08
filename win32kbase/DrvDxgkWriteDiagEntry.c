/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C00CA710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkWriteDiagEntry(__int64 a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  return (*(__int64 (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(a1);
}
