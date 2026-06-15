/*
 * XREFs of sub_1800460D0 @ 0x1800460D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall sub_1800460D0(__int64 a1)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 64LL))(a1 - 8) != 0;
}
