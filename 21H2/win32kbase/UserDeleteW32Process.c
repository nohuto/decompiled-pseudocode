/*
 * XREFs of UserDeleteW32Process @ 0x1C0092620
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00392B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

void __fastcall UserDeleteW32Process(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 1044) )
    {
      v3 = *(_QWORD *)(a1 + 1056);
      if ( *(_QWORD *)(v3 + 8) != a1 + 1056 || (v4 = *(_QWORD **)(a1 + 1064), *v4 != a1 + 1056) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v2 = *(_QWORD *)(a1 + 728);
    if ( v2 )
    {
      Win32FreePool(v2);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 720), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v5 )
    UserSessionSwitchLeaveCrit();
}
