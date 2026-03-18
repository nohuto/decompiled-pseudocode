/*
 * XREFs of DestroyWindowsHotKeys @ 0x1C013ADE8
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C0042C40 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 __fastcall DestroyWindowsHotKeys(__int64 a1)
{
  return HKRemoveMatchingHotkeys(0LL, a1, 0, 1);
}
