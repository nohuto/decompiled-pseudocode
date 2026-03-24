/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1C008AD30
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C008AE50 (--0CMouseSensor@@IEAA@XZ.c)
 */

CMouseSensor *CMouseSensor_CreateInstance()
{
  CMouseSensor *result; // rax

  gpMouseSensor = 0LL;
  result = (CMouseSensor *)Win32AllocPool(1752LL, 0x70694843u);
  if ( result )
    result = CMouseSensor::CMouseSensor(result);
  if ( result )
    gpMouseSensor = result;
  return result;
}
