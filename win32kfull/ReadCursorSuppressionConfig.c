__int64 __fastcall ReadCursorSuppressionConfig(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_DWORD *)SGDGetUserSessionState(a1) != gServiceSessionId && !gProtocolType )
    FastGetProfileDword(0LL, 49LL, L"EnableCursorSuppression");
  LOBYTE(v1) = 0;
  return v1;
}
