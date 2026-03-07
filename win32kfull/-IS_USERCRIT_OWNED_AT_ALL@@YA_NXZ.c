bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  return ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 8)) != 0;
}
