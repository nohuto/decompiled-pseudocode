/*
 * XREFs of RIMSetDeadzoneRotation @ 0x1C01AADD8
 * Callers:
 *     NtRIMSetDeadzoneRotation @ 0x1C01A2A60 (NtRIMSetDeadzoneRotation.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall RIMSetDeadzoneRotation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v14; // rax

  v4 = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 224);
  *(_DWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 464) = v4;
  v14 = SGDGetUserSessionState(v11, v10, v12, v13);
  *(_QWORD *)(v14 + 232) = 0LL;
  ExReleasePushLockExclusiveEx(v14 + 224, 0LL);
  KeLeaveCriticalRegion();
}
