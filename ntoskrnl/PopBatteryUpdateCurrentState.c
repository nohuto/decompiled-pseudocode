/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140870E0C
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140870DD8 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1402BF8C0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C3CD08; qword_140C3CD08 + 50000000 <= v3; i = qword_140C3CD08 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C3CD10, &qword_140C3CD08, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
