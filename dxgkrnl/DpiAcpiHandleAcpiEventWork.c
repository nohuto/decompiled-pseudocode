void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rbx

  v4 = 0;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C013B620);
    qword_1C013B658 = (__int64)KeGetCurrentThread();
    if ( v4 )
    {
      if ( !--dword_1C013B670 )
        KeSetEvent(&Event, 0, 0);
    }
    v5 = qword_1C013B660;
    if ( (__int64 *)qword_1C013B660 == &qword_1C013B660 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_1C013B660 + 8) != &qword_1C013B660
        || (v6 = *(_QWORD *)qword_1C013B660, *(_QWORD *)(*(_QWORD *)qword_1C013B660 + 8LL) != qword_1C013B660) )
      {
        __fastfail(3u);
      }
      qword_1C013B660 = *(_QWORD *)qword_1C013B660;
      *(_QWORD *)(v6 + 8) = &qword_1C013B660;
      if ( *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4 )
      {
        v4 = 1;
        byte_1C013B690 = *(_QWORD *)(v5 + 32) != 0LL;
      }
      else
      {
        v4 = 0;
      }
    }
    qword_1C013B658 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C013B620);
    if ( !v5 )
      break;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((char *)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
