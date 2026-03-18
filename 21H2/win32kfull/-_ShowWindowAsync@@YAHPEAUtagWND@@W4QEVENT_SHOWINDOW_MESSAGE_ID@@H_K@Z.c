/*
 * XREFs of ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C011A14C
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     NtUserShowWindowAsync @ 0x1C011A060 (NtUserShowWindowAsync.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall _ShowWindowAsync(struct tagTHREADINFO **a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  return PostEventMessageEx(
           a1[2],
           *((struct tagQ **)a1[2] + 54),
           1u,
           (struct tagWND *)a1,
           a2,
           a4,
           a3 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
