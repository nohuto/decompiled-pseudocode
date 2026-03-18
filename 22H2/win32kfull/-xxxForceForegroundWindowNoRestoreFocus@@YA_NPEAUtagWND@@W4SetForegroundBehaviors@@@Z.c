/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F78
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C01ABDC0 (EditionChangeForegroundQueueForMouseInput.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01AE34C (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     NtUserNavigateFocus @ 0x1C01D7B90 (NtUserNavigateFocus.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rbx

  v3 = a2;
  v5 = 0LL;
  if ( !(unsigned __int8)IsInputThread(a1, a2, a3) && gptiRit != gptiCurrent )
    v5 = gptiCurrent;
  return (unsigned int)xxxSetForegroundWindow2(a1, v5, v3 | 0x40u) != 0;
}
