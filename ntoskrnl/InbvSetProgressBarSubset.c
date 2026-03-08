/*
 * XREFs of InbvSetProgressBarSubset @ 0x14037FD30
 * Callers:
 *     Phase1Initialization @ 0x14080E810 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))(qword_140C6A7D0 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
