_BOOL8 __fastcall GreIsVisRgnLockedShared(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return GreIsSemaphoreSharedByCurrentThread(*(struct _ERESOURCE **)(*(_QWORD *)(v1 + 24) + 88LL));
}
