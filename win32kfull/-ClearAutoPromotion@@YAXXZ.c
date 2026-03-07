void __fastcall ClearAutoPromotion(__int64 a1)
{
  __int64 v1; // rax

  v1 = SGDGetUserSessionState(a1);
  *(_DWORD *)(v1 + 16320) &= 0xFFFFFFE9;
}
