/*
 * XREFs of _PostThreadMessage @ 0x1C009575C
 * Callers:
 *     zzzCancelJournalling @ 0x1C001D3F4 (zzzCancelJournalling.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0094B64 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0095B2C (-EndShutdown@@YAXJ@Z.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     EditionPostInertiaMessage @ 0x1C01F8900 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C0037298 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int16 *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, (struct tagINPUT_MESSAGE_SOURCE *)v9);
}
