/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14054E570
 * Callers:
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140AA8FA0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AC58 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
