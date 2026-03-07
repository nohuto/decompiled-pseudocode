_BOOL8 __fastcall HasPendingPromotion(__int64 a1)
{
  return *(_WORD *)(SGDGetUserSessionState(a1) + 16280) != 0;
}
