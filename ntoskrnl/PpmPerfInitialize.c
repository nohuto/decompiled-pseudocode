/*
 * XREFs of PpmPerfInitialize @ 0x140B62588
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x14084747C (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 *v5; // r10
  __int64 v6; // r9
  unsigned int v7; // r11d
  unsigned int v8; // edx
  __int64 v9; // r8
  _BYTE *v10; // rcx

  qword_140D1EB40 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140C390DC = 50;
  dword_140C39294 = 50;
  v1 = &unk_140C39298;
  do
  {
    *(v1 - 440) = 1;
    *v1 = 1;
    *(v1 - 424) = 70;
    v1[16] = 70;
    *(v1 - 426) = 30;
    v1[14] = 30;
    *(v1 - 438) = 100;
    v1[2] = 100;
    *(v1 - 436) = 100;
    v1[4] = 100;
    *(v1 - 385) = 100;
    v1[55] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  PpmMediaBufferingWork = 0LL;
  stru_140C3E630.Parameter = 0LL;
  stru_140C3E630.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  v2 = PpmPerfQosTransitionHysteresisOverride;
  stru_140C3E630.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140C390FC = 100;
  dword_140C392B4 = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  dword_140C39100 = 2;
  dword_140C392B8 = 2;
  if ( v3 <= 0x1F4 )
  {
    v2 = 500;
  }
  else if ( PpmPerfQosTransitionHysteresisOverride == -1 )
  {
    v2 = PpmPerfQosTransitionHysteresis;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v2);
  v4 = 0;
  v5 = PpmQosClassesOrderedIndexMap;
  v6 = 0LL;
  do
  {
    v7 = *(_DWORD *)v5;
    v8 = 0;
    v9 = 0LL;
    do
    {
      if ( v7 > *((_DWORD *)PpmQosClassesOrderedIndexMap + v9) )
        PpmPerfQosHysteresis[v6 + v9] = 1;
      v10 = &PpmPerfQosHysteresis[v6 + v9];
      if ( v4 == 3 )
        *v10 = 1;
      if ( v8 == 3 )
      {
        if ( v4 == 4 )
          goto LABEL_23;
        if ( v4 )
          *v10 = 1;
      }
      else
      {
        if ( v8 == 4 )
          *v10 = 1;
        if ( v4 == 4 )
LABEL_23:
          *v10 = 0;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 7 );
    ++v4;
    v5 = (__int64 *)((char *)v5 + 4);
    v6 += 7LL;
  }
  while ( v4 < 7 );
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
