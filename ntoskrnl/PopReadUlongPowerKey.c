/*
 * XREFs of PopReadUlongPowerKey @ 0x140380EC0
 * Callers:
 *     PopQueryHiberPersistedRegValue @ 0x14080FD60 (PopQueryHiberPersistedRegValue.c)
 *     PopBatteryInitPhaseTwo @ 0x140B4735C (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x140380F18 (PopReadRegKeyValue.c)
 */

__int64 __fastcall PopReadUlongPowerKey(
        PCWSTR a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 result; // rax
  unsigned int v10; // ecx

  result = PopReadRegKeyValue(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER", a1, 4uLL, a2);
  if ( (int)result < 0 )
  {
    *a2 = a3;
    return result;
  }
  v10 = *a2;
  if ( *a2 != a6 )
  {
    if ( v10 < a4 )
    {
      *a2 = a4;
      return 3221226034LL;
    }
    if ( v10 > a5 )
    {
      *a2 = a5;
      return 3221226034LL;
    }
  }
  return result;
}
