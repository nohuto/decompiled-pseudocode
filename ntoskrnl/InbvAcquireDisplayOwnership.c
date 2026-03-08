/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14054C0D0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140567D34 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140AA5D70 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))(qword_140C6A7D0 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
