/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x14078495C
 * Callers:
 *     RtlIsApiSetImplemented @ 0x1407848B0 (RtlIsApiSetImplemented.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x14085DFB4 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x1402F3614 (MmQueryApiSetSchema.c)
 */

struct _LIST_ENTRY *__fastcall PsQueryCurrentApiSetSchema(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return PsGetCurrentServerSiloGlobals()[65].Flink;
  MmQueryApiSetSchema(&v3, &v4);
  return *(struct _LIST_ENTRY **)v3;
}
