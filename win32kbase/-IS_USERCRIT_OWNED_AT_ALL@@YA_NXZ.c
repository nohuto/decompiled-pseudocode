bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  return ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) != 0;
}
