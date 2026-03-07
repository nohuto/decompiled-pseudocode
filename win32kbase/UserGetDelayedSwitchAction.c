__int64 __fastcall UserGetDelayedSwitchAction(__int64 a1)
{
  return *(unsigned int *)(SGDGetUserGdiSessionState(a1) + 16);
}
