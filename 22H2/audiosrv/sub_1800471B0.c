/*
 * XREFs of sub_1800471B0 @ 0x1800471B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800471B0(__int64 a1, _DWORD *a2)
{
  if ( !a2 )
    return 2147500035LL;
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 208LL))(qword_18019E618);
  return 0LL;
}
