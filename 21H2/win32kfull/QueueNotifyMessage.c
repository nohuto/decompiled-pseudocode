/*
 * XREFs of QueueNotifyMessage @ 0x1C02192E0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00C9AD0 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall QueueNotifyMessage(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, void **a4, int a5)
{
  QueueNotifyTransformableMessage(a1, a2, a3, a4, a5, 0);
}
