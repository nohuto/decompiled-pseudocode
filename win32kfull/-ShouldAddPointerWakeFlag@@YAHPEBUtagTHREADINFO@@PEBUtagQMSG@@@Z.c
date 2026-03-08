/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0143D18
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsMiPActive @ 0x1C00D7EB8 (IsMiPActive.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  if ( a2 && (unsigned int)IsGenuineMouseInput((char *)a2 + 120) )
    return IsMiPActive((__int64)a1, (__int64)a2);
  else
    return 0LL;
}
