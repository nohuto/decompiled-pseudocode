/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C01A09F0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdx
  _QWORD *v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // rdx
  __int64 v26; // rbx
  _QWORD *result; // rax
  _QWORD *v28; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v29; // [rsp+28h] [rbp-8h]

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  v14 = (__int64 *)&v28;
  v15 = (_QWORD *)(v10 + 320);
  v16 = *(_QWORD **)(v10 + 320);
  v29 = (__int64 *)&v28;
  v28 = &v28;
  while ( v16 != v15 )
  {
    v11 = v16 - 2;
    v17 = (__int64)(v16 + 55);
    if ( v16 == (_QWORD *)16 )
      v17 = 384LL;
    if ( *(_QWORD *)v17 && *(_QWORD *)(*(_QWORD *)v17 + 88LL) == a1 )
    {
      v18 = (__int64)(v16 + 32);
      v12 = 200LL;
      if ( v16 == (_QWORD *)16 )
        v18 = 200LL;
      if ( (*(_DWORD *)v18 & 4) == 0 )
      {
        v19 = (__int64)(v16 + 24);
        if ( v16 == (_QWORD *)16 )
          v19 = 136LL;
        if ( *(_QWORD *)v19 != v19 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 925);
          v14 = v29;
        }
        if ( (_QWORD **)*v14 != &v28 )
LABEL_24:
          __fastfail(3u);
        *(_QWORD *)(v19 + 8) = v14;
        *(_QWORD *)v19 = &v28;
        *v14 = v19;
        v29 = (__int64 *)v19;
      }
      *(_QWORD *)(*(_QWORD *)v17 + 88LL) = 0LL;
      v14 = v29;
    }
    v16 = (_QWORD *)*v16;
  }
  v20 = SGDGetUserSessionState(v11, v14, v12, v13);
  *(_QWORD *)(v20 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v20 + 240, 0LL);
  KeLeaveCriticalRegion();
  v21 = v28;
  while ( 1 )
  {
    result = &v28;
    if ( v21 == &v28 )
      break;
    v22 = *v21;
    v23 = v21;
    v24 = v21;
    v21 = (_QWORD *)v22;
    if ( *(_QWORD **)(v22 + 8) != v23 )
      goto LABEL_24;
    v25 = (_QWORD *)v23[1];
    if ( (_QWORD *)*v25 != v23 )
      goto LABEL_24;
    *v25 = v22;
    *(_QWORD *)(v22 + 8) = v25;
    v23[1] = v23;
    *v23 = v23;
    v26 = *(_QWORD *)(*(v24 - 13) + 408LL);
    RIMLockExclusive(v26 + 104);
    RIMIDERemoveInjectionDevice(*(v24 - 13));
    *(_QWORD *)(v26 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v26 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a1 + 812) &= ~0x200000u;
  return result;
}
