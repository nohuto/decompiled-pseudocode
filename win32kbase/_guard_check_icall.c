/*
 * XREFs of _guard_check_icall @ 0x1C00DC71C
 * Callers:
 *     qsort @ 0x1C00DA4E0 (qsort.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C006BF40 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
