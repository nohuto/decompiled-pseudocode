/*
 * XREFs of CKeyboardSensor_CreateInstance @ 0x1C0096190
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C009637C (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CKeyboardSensor_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v8 = 0LL;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12672) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 310LL);
  v9 = SGDGetUserSessionState(v5, v4, v6, v7);
  if ( (int)CKeyboardSensor::CreateInstance((struct CKeyboardSensor **)(v9 + 12672)) >= 0 )
    return *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 12672);
  return v8;
}
