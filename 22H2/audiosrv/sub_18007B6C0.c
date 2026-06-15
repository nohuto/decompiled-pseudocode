/*
 * XREFs of sub_18007B6C0 @ 0x18007B6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18007B6C0(__int64 a1, __int64 a2)
{
  sub_1800472E0(*(_QWORD *)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
