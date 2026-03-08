/*
 * XREFs of UserDeleteW32Process @ 0x1C006F580
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall UserDeleteW32Process(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  char **v7; // rdx
  void **v8; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  if ( !*((_DWORD *)a1 + 2) )
  {
    if ( *((_DWORD *)a1 + 257) )
    {
      v7 = (char **)*((_QWORD *)a1 + 130);
      if ( v7[1] != a1 + 1040 || (v8 = (void **)*((_QWORD *)a1 + 131), *v8 != a1 + 1040) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = (char *)v8;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v6 = (void *)*((_QWORD *)a1 + 90);
    if ( v6 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 712), 0LL, 0);
    }
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
}
