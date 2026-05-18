/*
 * XREFs of sub_18012502E @ 0x18012502E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B5E0 @ 0x18007B5E0 (sub_18007B5E0.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012502E(__int64 a1, __int64 a2)
{
  sub_18007B5E0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
