/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140AEC564
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140AEC504 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140B991D4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140AE9904 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
