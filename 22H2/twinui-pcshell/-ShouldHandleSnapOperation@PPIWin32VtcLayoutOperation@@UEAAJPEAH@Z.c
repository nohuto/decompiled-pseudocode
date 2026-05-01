/*
 * XREFs of ?ShouldHandleSnapOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAH@Z @ 0x1800D8A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::ShouldHandleSnapOperation(PPIWin32VtcLayoutOperation *this, int *a2)
{
  *a2 = 0;
  if ( (*(int (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 22) + 160LL))((char *)this - 176, 0LL, 1LL) >= 0 )
    *a2 = 1;
  return 0LL;
}
