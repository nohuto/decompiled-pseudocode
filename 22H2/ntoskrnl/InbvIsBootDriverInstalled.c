/*
 * XREFs of InbvIsBootDriverInstalled @ 0x1403B47F0
 * Callers:
 *     DisplayBootBitmap @ 0x1403B46F0 (DisplayBootBitmap.c)
 *     BvgaReleaseResources @ 0x1403B4780 (BvgaReleaseResources.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char InbvIsBootDriverInstalled()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B78 && (v0 = *(__int64 (**)(void))(qword_140C50B78 + 56)) != 0LL )
    return v0();
  else
    return 0;
}
