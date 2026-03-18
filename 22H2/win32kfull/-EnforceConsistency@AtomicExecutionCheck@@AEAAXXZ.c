/*
 * XREFs of ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C
 * Callers:
 *     NtUserSetThreadInputBlocked @ 0x1C0005190 (NtUserSetThreadInputBlocked.c)
 *     NtUserDestroyCursor @ 0x1C0028C50 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0029610 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGetIconInfo @ 0x1C002BFF0 (NtUserGetIconInfo.c)
 *     NtUserSetCursorIconDataEx @ 0x1C002CD90 (NtUserSetCursorIconDataEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     NtUserFindWindowEx @ 0x1C0048650 (NtUserFindWindowEx.c)
 *     _GetClassInfoEx @ 0x1C00CC438 (_GetClassInfoEx.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00E7CDC (xxxProcessNotifyWinEvent.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C0118748 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x1C0118E70 (-OnHideAppStartCursor@@YAXXZ.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall AtomicExecutionCheck::EnforceConsistency(AtomicExecutionCheck *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PERESOURCE *v5; // rax

  if ( !*(_QWORD *)(SGDGetUserSessionState(this) + 8)
    || (v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v2, v1, v3, v4),
        !ExIsResourceAcquiredSharedLite(*v5)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
}
