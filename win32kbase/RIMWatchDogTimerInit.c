/*
 * XREFs of RIMWatchDogTimerInit @ 0x1C01A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 272);
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  if ( a1 )
  {
    *(_QWORD *)(v10 + 360) = a1;
  }
  else
  {
    *(_QWORD *)(v10 + 360) = 0LL;
    *(_BYTE *)(SGDGetUserSessionState(v12, v11, v13, v14) + 354) = 0;
  }
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  *(_QWORD *)(v15 + 280) = 0LL;
  ExReleasePushLockExclusiveEx(v15 + 272, 0LL);
  KeLeaveCriticalRegion();
}
