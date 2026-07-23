/*
 * XREFs of PpmPerfInitialize @ 0x140A6DCFC
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8A2C (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax

  qword_140CFC4F8 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140C1EE7C = 50;
  dword_140C1F92C = 50;
  v1 = &unk_140C1F930;
  do
  {
    *(v1 - 2736) = 1;
    *v1 = 1;
    *(v1 - 2720) = 70;
    v1[16] = 70;
    *(v1 - 2722) = 30;
    v1[14] = 30;
    *(v1 - 2734) = 100;
    v1[2] = 100;
    *(v1 - 2732) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  v2 = PpmPerfQosTransitionHysteresisOverride;
  stru_140C24630.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_140C1EEA0 = 2;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_140C1F950 = 2;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140C1EE9C = 100;
  dword_140C1F94C = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  PpmMediaBufferingWork = 0LL;
  stru_140C24630.Parameter = 0LL;
  stru_140C24630.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  if ( v3 > 0x1F4 )
  {
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v2 = PpmPerfQosTransitionHysteresis;
  }
  else
  {
    v2 = 500;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v2);
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
