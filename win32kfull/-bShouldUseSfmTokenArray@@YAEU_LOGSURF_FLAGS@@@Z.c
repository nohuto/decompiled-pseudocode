char __fastcall bShouldUseSfmTokenArray(__int64 a1)
{
  char v1; // bl
  char v2; // di

  v1 = a1;
  v2 = 0;
  if ( (!(unsigned int)UserIsRemoteConnection(a1) || (unsigned int)UserIsRemoteAndNotDisconnectConnection())
    && (v1 & 0x10) == 0 )
  {
    return 1;
  }
  return v2;
}
