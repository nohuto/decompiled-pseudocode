/*
 * XREFs of InbvReleaseLock @ 0x14054C22C
 * Callers:
 *     DisplayBootBitmap @ 0x1403A4B48 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14054C3BC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))(qword_140C6A7D0 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
