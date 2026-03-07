__int64 __fastcall CLegacyRotationMgr::xxxAutoRotateScreen(CLegacyRotationMgr *this, unsigned int a2)
{
  __int64 v4; // rcx
  int AutoRotationState; // eax
  unsigned int *v7; // rdx
  CLegacyRotationMgr *v8; // rcx
  unsigned int v9; // edi
  CLegacyRotationMgr *v10; // rcx
  unsigned int v11; // edi
  int v12; // [rsp+40h] [rbp+18h] BYREF

  if ( !gbIgnoreStressedOutStuff && !dword_1C035D5DC )
  {
    v12 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1263);
  }
  if ( *(_DWORD *)(SGDGetUserSessionState(this) + 3080) != 1 && *(_DWORD *)(SGDGetUserSessionState(v4) + 3080) != 2 )
    return 0xFFFFFFFFLL;
  gAutoRotationInfo = a2;
  dword_1C035D5F8 = 1;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  v9 = AutoRotationState;
  if ( AutoRotationState
    && (((AutoRotationState - 64) & 0xFFFFFF3F) != 0
     || AutoRotationState == 256
     || a2 != (unsigned int)CLegacyRotationMgr::GetDockedOrientationValue(this, v7)) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a2, v7, v9);
    return 3221225506LL;
  }
  if ( (unsigned int)CLegacyRotationMgr::IsOrientationWithinPreferences(v8, a2) )
  {
    v12 = 0;
    v11 = CLegacyRotationMgr::xxxRotateScreen(v10, a2, 1, &v12);
    if ( v12 )
      TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0LL, 1001LL);
    else
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        16LL);
    if ( v11 )
      return v11;
  }
  else
  {
    TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0LL, 1002LL);
    v11 = 0;
  }
  CLegacyRotationMgr::AutoRotationUpdateRegistry(this);
  return v11;
}
