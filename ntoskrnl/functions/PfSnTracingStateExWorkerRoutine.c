void __fastcall PfSnTracingStateExWorkerRoutine(PVOID P)
{
  PVOID v2; // rcx
  PVOID *v3; // rax

  ExAcquireFastMutex(&FastMutex);
  if ( dword_140C6A2E4 == 2 )
  {
    ExReleaseFastMutex(&FastMutex);
  }
  else
  {
    dword_140C6A2E4 = 1;
    while ( qword_140C6A298 != &qword_140C6A298 )
    {
      v2 = qword_140C6A2A0;
      if ( *(PVOID **)qword_140C6A2A0 != &qword_140C6A298
        || (v3 = (PVOID *)*((_QWORD *)qword_140C6A2A0 + 1), *v3 != qword_140C6A2A0) )
      {
        __fastfail(3u);
      }
      qword_140C6A2A0 = (PVOID)*((_QWORD *)qword_140C6A2A0 + 1);
      *v3 = &qword_140C6A298;
      ExFreePoolWithTag(v2, 0);
      --dword_140C6A2E0;
    }
    ExReleaseFastMutex(&FastMutex);
    if ( qword_140C6A2E8 )
      KeSetEvent(qword_140C6A2E8, 0, 0);
  }
  ExFreePoolWithTag(P, 0);
}
