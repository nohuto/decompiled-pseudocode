_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) != 0;
}
