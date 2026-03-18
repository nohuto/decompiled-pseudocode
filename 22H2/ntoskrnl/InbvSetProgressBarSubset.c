/*
 * XREFs of InbvSetProgressBarSubset @ 0x1403874BC
 * Callers:
 *     Phase1Initialization @ 0x140822CA0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AC58 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
