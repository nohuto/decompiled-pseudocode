/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01D7734
 * Callers:
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
