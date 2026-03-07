_BOOL8 __fastcall GreIsVisRgnLocked(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetSessionState(a1);
  return ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(*(_QWORD *)(v1 + 24) + 88LL)) != 0;
}
