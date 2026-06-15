/*
 * XREFs of sub_180133E9B @ 0x180133E9B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 */

void __fastcall __noreturn sub_180133E9B(__int64 a1, __int64 a2)
{
  sub_180133BDC(*(__int64 **)(a2 + 120), *(__int64 **)(a2 + 112));
  sub_1800472E0(*(_QWORD *)(a2 + 32), 32LL * *(_QWORD *)(a2 + 136));
  throw;
}
