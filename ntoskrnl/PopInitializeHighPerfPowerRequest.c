/*
 * XREFs of PopInitializeHighPerfPowerRequest @ 0x140B6EC5C
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     PoCaptureReasonContext @ 0x1402BD2FC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1402BDBE4 (PoDestroyReasonContext.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 */

__int64 PopInitializeHighPerfPowerRequest()
{
  int *v0; // rdx
  __int64 v1; // r8
  int v2; // ecx
  int Common; // ebx
  _DWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  __int128 v7; // [rsp+48h] [rbp-20h]
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  PpmHighPerfEndDpc = 275;
  *(_QWORD *)&PpmHighPerfEndTimer.Header.Lock = 8LL;
  qword_140C3D778 = (__int64)PpmHighPerfRequestExpiration;
  v0 = PpmHighPerfDuration;
  P = 0LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Blink = &PpmHighPerfEndTimer.Header.WaitListHead;
  v1 = 4LL;
  PpmHighPerfEndTimer.Header.WaitListHead.Flink = &PpmHighPerfEndTimer.Header.WaitListHead;
  PpmHighPerfRequestLock = 0LL;
  qword_140C3D780 = 0LL;
  qword_140C3D798 = 0LL;
  qword_140C3D770 = 0LL;
  PpmHighPerfEndTimer.DueTime.QuadPart = 0LL;
  PpmHighPerfEndTimer.Period = 0;
  PpmHighPerfEndTimer.Processor = 0;
  do
  {
    v2 = 300000;
    if ( (unsigned int)*v0 < 0x493E0 )
      v2 = *v0;
    *v0++ = v2;
    --v1;
  }
  while ( v1 );
  v5[0] = 0;
  v5[1] = 1;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Power Manager");
  Common = PoCaptureReasonContext((unsigned __int64)v5, 0LL, 0LL, 1, 0LL, &P);
  if ( Common >= 0 )
  {
    Common = PopPowerRequestCreateCommon(P, 0, &PpmHighPerfPowerRequest);
    if ( Common < 0 )
      PoDestroyReasonContext(P);
  }
  return (unsigned int)Common;
}
