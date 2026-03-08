/*
 * XREFs of IopQueryPassiveInterruptRegistryOptions @ 0x1408531AC
 * Callers:
 *     IopInitializePassiveInterruptServices @ 0x140B67854 (IopInitializePassiveInterruptServices.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 */

__int64 IopQueryPassiveInterruptRegistryOptions()
{
  int RegistryValues; // r8d
  char v1; // cl
  char v3; // al
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v7[28]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[6]) = 0;
  LODWORD(v7[13]) = 0;
  LODWORD(v7[20]) = 0;
  v6 = (unsigned __int8)PassiveInterruptForceCriticalWorker;
  v4 = (unsigned __int8)PassiveInterruptRealtimeWorkerCount;
  v5 = (unsigned __int8)PassiveInterruptRealtimeWorkerPriority;
  v7[2] = L"PassiveIntRealTimeWorkerCount";
  v7[3] = &v4;
  v7[5] = &v4;
  v7[9] = L"PassiveIntRealTimeWorkerPriority";
  v7[10] = &v5;
  v7[12] = &v5;
  v7[16] = L"PassiveIntForceCriticalWorker";
  v7[17] = &v6;
  LODWORD(v7[1]) = 288;
  LODWORD(v7[4]) = 67108868;
  LODWORD(v7[8]) = 288;
  LODWORD(v7[11]) = 67108868;
  LODWORD(v7[15]) = 288;
  LODWORD(v7[18]) = 67108868;
  v7[19] = &v6;
  RegistryValues = RtlpQueryRegistryValues(2LL, L"Session Manager\\I/O System", v7, 0LL);
  if ( RegistryValues >= 0 )
  {
    if ( (_BYTE)v4 )
    {
      v1 = v4;
      if ( (unsigned __int8)v4 > 0x10u )
        v1 = 16;
      PassiveInterruptRealtimeWorkerCount = v1;
    }
    if ( (unsigned __int8)v5 > 0x10u )
    {
      v3 = v5;
      if ( (unsigned __int8)v5 > 0x15u )
        v3 = 21;
      PassiveInterruptRealtimeWorkerPriority = v3;
    }
  }
  return (unsigned int)RegistryValues;
}
