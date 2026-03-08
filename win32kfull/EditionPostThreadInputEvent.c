/*
 * XREFs of EditionPostThreadInputEvent @ 0x1C01B79F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostThreadInputEvent(
        unsigned int a1,
        struct tagQ **a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a1 != 30 )
    return (unsigned int)PostEventMessageEx((struct tagTHREADINFO *)a2, a2[54], a1, 0LL, a4, a5, a6, 0LL) != 0;
  return v6;
}
