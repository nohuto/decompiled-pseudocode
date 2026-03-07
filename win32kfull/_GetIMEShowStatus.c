_BOOL8 __fastcall GetIMEShowStatus(__int64 a1)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1) + 13960) != 0;
}
