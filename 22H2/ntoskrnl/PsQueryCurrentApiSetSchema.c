/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1407D468C
 * Callers:
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 *     RtlIsApiSetImplemented @ 0x1407D45E0 (RtlIsApiSetImplemented.c)
 *     ExIsMultiSessionSku @ 0x140861E24 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x14035EB68 (MmQueryApiSetSchema.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 130);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
