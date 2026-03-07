void __fastcall QueueNotifyMessage(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, void *a4, int a5)
{
  QueueNotifyTransformableMessage(a1, a2, a3, a4, a5, 0);
}
