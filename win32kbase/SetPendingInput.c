/*
 * XREFs of SetPendingInput @ 0x1C00D8940
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPendingInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v4 = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v5 + 696));
  if ( !*(_DWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 2876) )
  {
    *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 2880) = v4;
    *(_DWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 2876) = 1;
  }
  v18 = SGDGetUserSessionState(v11, v10, v12, v13);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v18 + 696));
}
