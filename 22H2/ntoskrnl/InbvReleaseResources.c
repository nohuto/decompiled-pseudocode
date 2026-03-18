/*
 * XREFs of InbvReleaseResources @ 0x1403A99B0
 * Callers:
 *     DisplayBootBitmap @ 0x1403A9958 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x14054E8B0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseResources())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6AC58;
  if ( qword_140C6AC58 )
  {
    result = *(__int64 (**)(void))(qword_140C6AC58 + 168);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
