/*
 * XREFs of PpmPerfInitialize @ 0x140B247B0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1408534E0 (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax

  qword_140D06978 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140C1D09C = 50;
  dword_140C1E14C = 50;
  v1 = &unk_140C1E150;
  do
  {
    *(v1 - 4272) = 1;
    *v1 = 1;
    *(v1 - 4256) = 70;
    v1[16] = 70;
    *(v1 - 4258) = 30;
    v1[14] = 30;
    *(v1 - 4270) = 100;
    v1[2] = 100;
    *(v1 - 4268) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  v2 = PpmPerfQosTransitionHysteresisOverride;
  stru_140C23AF0.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_140C1D0C0 = 2;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_140C1E170 = 2;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140C1D0BC = 100;
  dword_140C1E16C = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  PpmMediaBufferingWork = 0LL;
  stru_140C23AF0.Parameter = 0LL;
  stru_140C23AF0.List.Flink = 0LL;
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
