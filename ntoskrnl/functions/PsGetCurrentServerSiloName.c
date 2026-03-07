__int64 *PsGetCurrentServerSiloName()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 *v1; // rcx

  v0 = PsGetCurrentServerSiloGlobals() + 80;
  v1 = &PspDefaultSiloName;
  if ( LOWORD(v0->Flink) )
    return (__int64 *)v0;
  return v1;
}
