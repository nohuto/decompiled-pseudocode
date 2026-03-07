_BOOL8 __fastcall SGDCRITTYPEgpresUser<_USERCRIT_TYPE>::operator!=(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 8) != 0LL;
}
