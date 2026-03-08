/*
 * XREFs of RIMWalkDeviceList @ 0x1C01A0C30
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RIMWalkDeviceList(__int64 a1, void (__fastcall *a2)(_QWORD *, __int64), __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD **v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *i; // rbx
  __int64 v17; // rax

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v6 + 240);
  v13 = (_QWORD **)(SGDGetUserSessionState(v8, v7, v9, v10) + 320);
  for ( i = *v13; i != v13; i = (_QWORD *)*i )
    a2(i - 2, a1);
  v17 = SGDGetUserSessionState(v12, v11, v14, v15);
  *(_QWORD *)(v17 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v17 + 240, 0LL);
  KeLeaveCriticalRegion();
}
