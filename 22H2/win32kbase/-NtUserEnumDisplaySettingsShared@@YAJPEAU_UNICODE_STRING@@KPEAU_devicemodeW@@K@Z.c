/*
 * XREFs of ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C005C7A8
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C005C6F0 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsShared(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx

  if ( IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v13 = SGDGetUserSessionState(v9, v8, v10, v11);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v13 + 8));
  EtwTraceAcquiredSharedUserCrit(v15, v14, v16, v17);
  if ( gbVideoInitialized )
    v22 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL), a2, a3, a4);
  else
    v22 = -1073741823;
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v22;
}
