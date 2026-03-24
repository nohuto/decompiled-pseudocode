/*
 * XREFs of _PostThreadMessage @ 0x1C00DA748
 * Callers:
 *     zzzCancelJournalling @ 0x1C0029398 (zzzCancelJournalling.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00D7A30 (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00D7FB0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00DA640 (NtUserPostThreadMessage.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     EditionPostInertiaMessage @ 0x1C02182B0 (EditionPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C00DA7B4 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, v9);
}
