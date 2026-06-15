/*
 * XREFs of sub_1800D3844 @ 0x1800D3844
 * Callers:
 *     sub_1800D3C38 @ 0x1800D3C38 (sub_1800D3C38.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D3844(_DWORD *a1, __int64 *a2, int a3)
{
  __int64 v5; // rax

  a1[2] = a3;
  if ( a3 )
  {
    *a1 = 0;
    v5 = *a2;
  }
  else
  {
    *a1 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
    v5 = *a2;
  }
  a1[1] = (*(__int64 (__fastcall **)(__int64 *))(v5 + 48))(a2);
  return 0LL;
}
