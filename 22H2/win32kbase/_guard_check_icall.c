/*
 * XREFs of _guard_check_icall @ 0x1C00CFE6C
 * Callers:
 *     qsort @ 0x1C00CDC30 (qsort.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C0033AB0 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
