/*
 * XREFs of EditionPostRitSound @ 0x1C01F7370
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostRitSound(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  struct tagQ **v3; // rcx

  v3 = *(struct tagQ ***)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 56LL) + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v3, v3[54], 0xEu, 0LL, a1, a2, a3, 0LL);
}
