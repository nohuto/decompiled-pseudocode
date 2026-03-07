__int64 __fastcall GreIsDwmStateLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return GreIsSemaphoreOwnedOrSharedByCurrentThread(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 72LL));
}
