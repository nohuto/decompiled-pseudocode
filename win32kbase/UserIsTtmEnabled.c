bool __fastcall UserIsTtmEnabled(__int64 a1)
{
  return *(_BYTE *)SGDGetUserGdiSessionState(a1) != 0;
}
