/*
 * XREFs of ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C00977F4
 * Callers:
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

bool __fastcall BeginGetWidnowTrackInfoAsync(struct tagTHREADINFO **a1)
{
  return (unsigned int)PostEventMessageEx(
                         a1[2],
                         *((struct tagQ **)a1[2] + 54),
                         9u,
                         (struct tagWND *)a1,
                         0x342u,
                         1uLL,
                         0LL,
                         0LL) != 0;
}
