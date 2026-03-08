/*
 * XREFs of InbvReleaseResources @ 0x1403A4BA0
 * Callers:
 *     DisplayBootBitmap @ 0x1403A4B48 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))(qword_140C6A7D0 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
