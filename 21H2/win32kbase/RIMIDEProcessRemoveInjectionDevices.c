/*
 * XREFs of RIMIDEProcessRemoveInjectionDevices @ 0x1C01520A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156EC4 (RIMIDERemoveInjectionDevice.c)
 */

_QWORD *__fastcall RIMIDEProcessRemoveInjectionDevices(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rbx
  _QWORD *result; // rax
  _QWORD *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-8h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = (__int64 *)&v14;
  v15 = (__int64 *)&v14;
  v14 = &v14;
  while ( v2 != &gObRimDevList )
  {
    v4 = (__int64)(v2 + 57);
    if ( v2 == (__int64 *)16 )
      v4 = 384LL;
    if ( *(_QWORD *)v4 && *(_QWORD *)(*(_QWORD *)v4 + 88LL) == a1 )
    {
      v5 = (__int64)(v2 + 34);
      if ( v2 == (__int64 *)16 )
        v5 = 200LL;
      if ( (*(_DWORD *)v5 & 4) == 0 )
      {
        v6 = (__int64)(v2 + 26);
        if ( v2 == (__int64 *)16 )
          v6 = 136LL;
        if ( *(_QWORD *)v6 != v6 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 846);
          v3 = v15;
        }
        if ( (_QWORD **)*v3 != &v14 )
LABEL_23:
          __fastfail(3u);
        *(_QWORD *)(v6 + 8) = v3;
        *(_QWORD *)v6 = &v14;
        *v3 = v6;
        v15 = (__int64 *)v6;
        *(_QWORD *)(*(_QWORD *)v4 + 88LL) = 0LL;
        v3 = v15;
      }
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v14;
  while ( 1 )
  {
    result = &v14;
    if ( v7 == &v14 )
      break;
    v8 = *v7;
    v9 = v7;
    v10 = v7;
    v7 = (_QWORD *)v8;
    if ( *(_QWORD **)(v8 + 8) != v9 )
      goto LABEL_23;
    v11 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v11 != v9 )
      goto LABEL_23;
    *v11 = v8;
    *(_QWORD *)(v8 + 8) = v11;
    v9[1] = v9;
    *v9 = v9;
    v12 = *(_QWORD *)(*(v10 - 13) + 424LL);
    RIMLockExclusive(v12 + 104);
    RIMIDERemoveInjectionDevice(*(v10 - 13));
    *(_QWORD *)(v12 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a1 + 820) &= ~0x200000u;
  return result;
}
