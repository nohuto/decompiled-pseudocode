/*
 * XREFs of UserDeleteW32Process @ 0x1C0036230
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall UserDeleteW32Process(char *a1)
{
  void *v2; // rdx
  char **v3; // rdx
  void **v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !*((_DWORD *)a1 + 2) )
  {
    if ( *((_DWORD *)a1 + 263) )
    {
      v3 = (char **)*((_QWORD *)a1 + 133);
      if ( v3[1] != a1 + 1064 || (v4 = (void **)*((_QWORD *)a1 + 134), *v4 != a1 + 1064) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v2 = (void *)*((_QWORD *)a1 + 90);
    if ( v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v2);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 712), 0LL, 0);
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
  if ( !v5 )
    UserSessionSwitchLeaveCrit();
}
