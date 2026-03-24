/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1404FEB50
 * Callers:
 *     KiDisplayBlueScreen @ 0x140518000 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1409B2730 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B78;
  if ( qword_140C50B78 )
  {
    result = *(__int64 (**)(void))(qword_140C50B78 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
