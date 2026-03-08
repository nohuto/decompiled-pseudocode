/*
 * XREFs of ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B6860
 * Callers:
 *     _lambda_543ccbf82fb17ad955b7b487bb59a6ad_::_lambda_invoker_cdecl_ @ 0x1C01E9E70 (_lambda_543ccbf82fb17ad955b7b487bb59a6ad_--_lambda_invoker_cdecl_.c)
 *     ?MigrateWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1C021FE00 (-MigrateWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C0220198 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 *     ?s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1C02292BC (-s_PostRecalcForWindow@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

bool __fastcall PostEventMessageWindow(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  return (unsigned int)PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), a2, (struct tagWND *)a1, 0, a3, a4, 0LL) != 0;
}
