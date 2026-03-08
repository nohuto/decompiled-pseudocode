/*
 * XREFs of EditionPostAccessibilitySettingChangedEvent @ 0x1C01F72E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostAccessibilitySettingChangedEvent(unsigned int a1)
{
  struct tagQ **v1; // rcx
  __int64 v3; // [rsp+30h] [rbp-18h]

  v3 = a1;
  v1 = *(struct tagQ ***)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 56LL) + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v1, v1[54], 0xDu, 0LL, 0, 0xBuLL, v3, 0LL);
}
