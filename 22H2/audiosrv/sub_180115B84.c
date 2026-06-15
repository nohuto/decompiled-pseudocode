/*
 * XREFs of sub_180115B84 @ 0x180115B84
 * Callers:
 *     sub_1801157F4 @ 0x1801157F4 (sub_1801157F4.c)
 * Callees:
 *     <none>
 */

__int64 sub_180115B84()
{
  __int64 result; // rax

  if ( !qword_18019C400 )
    return 0LL;
  result = EtwEventUnregister(qword_18019C400);
  qword_18019C400 = 0LL;
  return result;
}
