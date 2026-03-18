/*
 * XREFs of PfSnTracingStateExWorkerRoutine @ 0x140980040
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C6A764 == 2 )
  {
    ExReleaseFastMutex(&FastMutex);
  }
  else
  {
    dword_140C6A764 = 1;
    while ( qword_140C6A718 != &qword_140C6A718 )
    {
      v2 = qword_140C6A720;
      if ( *(PVOID **)qword_140C6A720 != &qword_140C6A718
        || (v3 = (PVOID *)*((_QWORD *)qword_140C6A720 + 1), *v3 != qword_140C6A720) )
      {
        __fastfail(3u);
      }
      qword_140C6A720 = (PVOID)*((_QWORD *)qword_140C6A720 + 1);
      *v3 = &qword_140C6A718;
      ExFreePoolWithTag(v2, 0);
      --dword_140C6A760;
    }
    ExReleaseFastMutex(&FastMutex);
    if ( qword_140C6A768 )
      KeSetEvent(qword_140C6A768, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
