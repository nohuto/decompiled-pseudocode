/*
 * XREFs of EditionPostUpdateKeyStateEvent @ 0x1C00ED8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostUpdateKeyStateEvent(struct tagTHREADINFO **a1, unsigned __int64 a2)
{
  return PostEventMessageEx(a1[13], (struct tagQ *)a1, 4u, 0LL, 0, a2, 0LL, 0LL);
}
