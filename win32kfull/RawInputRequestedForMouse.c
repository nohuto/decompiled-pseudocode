__int64 __fastcall RawInputRequestedForMouse(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(SGDGetUserSessionState(a1) + 16852) || *(_DWORD *)(SGDGetUserSessionState(v1) + 15956) )
    return 1;
  return v2;
}
