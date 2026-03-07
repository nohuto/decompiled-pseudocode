bool __fastcall isRootPartition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( gbInputVirtualizationEnabled
    && *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) == gInputVirtualizationSessionId )
  {
    return gbRootPartition != 0;
  }
  return v4;
}
