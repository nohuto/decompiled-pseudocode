/*
 * XREFs of rimDestroyDeadzone @ 0x1C01B2AC8
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C01B83A8 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C01B9064 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01C9904 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void __fastcall rimDestroyDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v4 + 224);
  if ( *(_QWORD *)(SGDGetUserSessionState(v6, v5, v7, v8) + 448) )
  {
    v13 = SGDGetUserSessionState(v10, v9, v11, v12);
    RIMDeadzone::Release(*(RIMDeadzone **)(v13 + 448));
    v10 = *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 448);
    if ( !*(_DWORD *)(v10 + 4) )
    {
      v18 = *(char **)(SGDGetUserSessionState(v10, v9, v11, v12) + 448);
      if ( v18 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
      *(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 448) = 0LL;
    }
  }
  v22 = SGDGetUserSessionState(v10, v9, v11, v12);
  *(_QWORD *)(v22 + 232) = 0LL;
  ExReleasePushLockExclusiveEx(v22 + 224, 0LL);
  KeLeaveCriticalRegion();
}
