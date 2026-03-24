/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403B40C4
 * Callers:
 *     Phase1Initialization @ 0x1407B3EE0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B78;
  if ( qword_140C50B78 )
  {
    result = *(__int64 (**)(void))(qword_140C50B78 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
