/*
 * XREFs of SetMouseInputRateLimitingTime @ 0x1C0218990
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C002D7C4 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 */

__int64 __fastcall SetMouseInputRateLimitingTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  CMouseSensor *v5; // rcx
  __int64 result; // rax

  v4 = a1;
  v5 = *(CMouseSensor **)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  result = v5 == 0LL ? 0xC0000225 : 0;
  if ( v5 )
    return CMouseSensor::SetInputRateLimitingTime(v5, v4);
  return result;
}
