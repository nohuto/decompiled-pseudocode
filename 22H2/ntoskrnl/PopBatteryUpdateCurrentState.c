/*
 * XREFs of PopBatteryUpdateCurrentState @ 0x140873CCC
 * Callers:
 *     PopCurrentPowerStatePrecise @ 0x140873C98 (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1403481B0 (ExBlockOnAddressPushLock.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryUpdateCurrentState(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C3D2A8; qword_140C3D2A8 + 50000000 <= v3; i = qword_140C3D2A8 )
  {
    PopBatteryQueueWork(0x20u);
    v1 = ExBlockOnAddressPushLock(&qword_140C3D2B0, &qword_140C3D2A8, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
