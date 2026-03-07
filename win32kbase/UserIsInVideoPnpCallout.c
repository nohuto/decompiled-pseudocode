bool __fastcall UserIsInVideoPnpCallout(__int64 a1)
{
  return *(_BYTE *)(SGDGetUserGdiSessionState(a1) + 20) != 0;
}
