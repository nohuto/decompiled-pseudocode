/*
 * XREFs of ViFaultsInjectionNotification @ 0x1409DE17C
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 */

char __fastcall ViFaultsInjectionNotification(int a1)
{
  USHORT v2; // ax
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v2) = ++dword_140C2A8CC;
  if ( (MmVerifierData & 0x1000) != 0 )
    LOBYTE(v2) = ViTargetIncrementCounter(retaddr, 172LL);
  if ( ViFaultTraces )
  {
    v3 = ViFaultTraces + 72LL * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1));
    *(_QWORD *)v3 = KeGetCurrentThread();
    v2 = RtlCaptureStackBackTrace(a1 + 1, 8u, (PVOID *)(v3 + 8), 0LL);
    if ( v2 < 8u )
      *(_QWORD *)(v3 + 8LL * v2 + 8) = 0LL;
  }
  return v2;
}
