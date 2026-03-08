/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403A4C40
 * Callers:
 *     DisplayBootBitmap @ 0x1403A4B48 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403A4BD0 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
