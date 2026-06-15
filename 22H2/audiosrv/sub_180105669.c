/*
 * XREFs of sub_180105669 @ 0x180105669
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     sub_180105D5C @ 0x180105D5C (sub_180105D5C.c)
 */

void __fastcall __noreturn sub_180105669(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 56) )
    sub_180105D5C();
  throw;
}
