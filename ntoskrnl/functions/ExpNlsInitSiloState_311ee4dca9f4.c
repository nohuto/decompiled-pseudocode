__int64 __fastcall ExpNlsInitSiloState(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rdi
  NTSTATUS v2; // ebx

  v1 = PsAttachSiloToCurrentThread(a1);
  v2 = ExInitializeNls();
  if ( v2 >= 0 )
    PsGetCurrentServerSiloGlobals()[66].Flink->Blink = (struct _LIST_ENTRY *)1;
  PsDetachSiloFromCurrentThread(v1);
  return (unsigned int)v2;
}
