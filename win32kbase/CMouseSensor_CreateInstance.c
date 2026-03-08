/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C00961F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C009622C (-CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CMouseSensor_CreateInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int Instance; // eax
  __int64 v7; // rcx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = v4 + 3232;
  Instance = CMouseSensor::CreateInstance((struct CMouseSensor **)(v4 + 3272));
  v7 = 0LL;
  if ( Instance >= 0 )
    return *(_QWORD *)(v5 + 40);
  return v7;
}
