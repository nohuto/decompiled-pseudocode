/*
 * XREFs of DestroyThreadsHotKeys @ 0x1C009DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C009DF10 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

__int64 DestroyThreadsHotKeys()
{
  return HKRemoveMatchingHotkeys(gptiCurrent, 0LL, 0LL, 0LL);
}
