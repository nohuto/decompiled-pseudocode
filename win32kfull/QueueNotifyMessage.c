/*
 * XREFs of QueueNotifyMessage @ 0x1C01FE820
 * Callers:
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1C009AC64 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C009DAB4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B633C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00FEC48 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall QueueNotifyMessage(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, void *a4, int a5)
{
  QueueNotifyTransformableMessage(a1, a2, a3, a4, a5, 0);
}
