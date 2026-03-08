/*
 * XREFs of DestroyWindowsHotKeys @ 0x1C012E1A4
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00B6390 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall DestroyWindowsHotKeys(__int64 a1)
{
  return HKRemoveMatchingHotkeys(0LL, a1, 0, 1);
}
