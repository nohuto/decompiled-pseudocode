/*
 * XREFs of sub_180129FFF @ 0x180129FFF
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010436C @ 0x18010436C (sub_18010436C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180129FFF(__int64 a1, __int64 a2)
{
  sub_18010436C(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
