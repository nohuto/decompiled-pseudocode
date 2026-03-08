/*
 * XREFs of PoReenableSleepStates @ 0x140981070
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoReenableSleepStates(_QWORD *P)
{
  _QWORD *v2; // rdx
  PVOID *v3; // rax

  ExAcquireFastMutex(&PopDisableSleepMutex);
  v2 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  ExReleaseFastMutex(&PopDisableSleepMutex);
  ExFreePoolWithTag(P, 0x64536F50u);
}
