/*
 * XREFs of SetMouseInputRateLimitingTime @ 0x1C01E8690
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C005D1C4 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 */

__int64 __fastcall SetMouseInputRateLimitingTime(unsigned int a1)
{
  __int64 result; // rax

  result = qword_1C0288018 == 0LL ? 0xC0000225 : 0;
  if ( qword_1C0288018 )
    return CMouseSensor::SetInputRateLimitingTime(qword_1C0288018, a1);
  return result;
}
