/*
 * XREFs of ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D17B0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C002ECC0 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 *     ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01269D0 (-AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z @ 0x1C01D10FC (-GetDockedOrientationValue@CLegacyRotationMgr@@AEAAKPEAK@Z.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01D1308 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z @ 0x1C01D1928 (-xxxRotateScreen@CLegacyRotationMgr@@AEAAJKHPEAH@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x1C02255E4 (-TraceLoggingScreenOrientationArStateChangeEvent@@YAXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0225678 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

__int64 __fastcall CLegacyRotationMgr::xxxAutoRotateScreen(CLegacyRotationMgr *this, unsigned int a2)
{
  int AutoRotationState; // eax
  unsigned int *v6; // rdx
  CLegacyRotationMgr *v7; // rcx
  unsigned int v8; // edi
  CLegacyRotationMgr *v9; // rcx
  unsigned int v10; // edi
  int v11; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)(gPowerDisplayState[16] - 1) > 1 )
    return 0xFFFFFFFFLL;
  gAutoRotationInfo = a2;
  dword_1C0336628 = 1;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  v8 = AutoRotationState;
  if ( AutoRotationState
    && (((AutoRotationState - 64) & 0xFFFFFF3F) != 0
     || AutoRotationState == 256
     || a2 != (unsigned int)CLegacyRotationMgr::GetDockedOrientationValue(this, v6)) )
  {
    TraceLoggingScreenOrientationArStateChangeEvent(a2, v6, v8);
    return 3221225506LL;
  }
  else
  {
    if ( (unsigned int)CLegacyRotationMgr::IsOrientationWithinPreferences(v7, a2) )
    {
      v11 = 0;
      v10 = CLegacyRotationMgr::xxxRotateScreen(v9, a2, 1, &v11);
      if ( v11 )
        TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0LL, 1001LL);
      else
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          16LL);
    }
    else
    {
      TraceLoggingScreenOrientationChangeEvent(a2, 0LL, 0LL, 1002LL);
      v10 = 0;
    }
    if ( !v10 )
      CLegacyRotationMgr::AutoRotationUpdateRegistry(this);
    return v10;
  }
}
