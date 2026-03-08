/*
 * XREFs of ?_ShowWindowAsync@@YAHPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@H_K@Z @ 0x1C00121FC
 * Callers:
 *     NtUserShowWindowAsync @ 0x1C0012110 (NtUserShowWindowAsync.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0227CCC (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
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
