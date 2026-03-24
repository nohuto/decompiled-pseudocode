/*
 * XREFs of InbvReleaseLock @ 0x1404FECAC
 * Callers:
 *     DisplayBootBitmap @ 0x1403B46F0 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1404FEE3C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FEE90 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B78;
  if ( qword_140C50B78 )
  {
    result = *(__int64 (**)(void))(qword_140C50B78 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
