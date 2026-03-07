char __fastcall RawMouseThrottlingTimerActive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( v4 )
    return *(_BYTE *)(v4 + 1880);
  else
    return 0;
}
