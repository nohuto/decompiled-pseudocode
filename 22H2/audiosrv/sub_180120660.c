/*
 * XREFs of sub_180120660 @ 0x180120660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DBF88 @ 0x1800DBF88 (sub_1800DBF88.c)
 */

__int64 __fastcall sub_180120660(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  _DWORD *v4; // r11
  __int64 v5; // r10
  __int64 result; // rax

  v4 = a3;
  v5 = a2;
  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !a2 || sub_1800DBF88(a3) )
      return (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(a1 + 64))(v5, v4, a4);
    else
      return 2147746064LL;
  }
  return result;
}
