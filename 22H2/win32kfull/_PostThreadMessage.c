/*
 * XREFs of _PostThreadMessage @ 0x1C009C5A0
 * Callers:
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009C3C0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00B83C0 (-EndShutdown@@YAXJ@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     EditionPostInertiaMessage @ 0x1C01F7730 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C0115548 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
