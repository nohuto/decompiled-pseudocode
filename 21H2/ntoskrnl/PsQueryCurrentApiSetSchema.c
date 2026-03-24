/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x14075D914
 * Callers:
 *     MiResolveImageReferences @ 0x14075D20C (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407D1BA8 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x140371F58 (MmQueryApiSetSchema.c)
 */

__int64 __fastcall PsQueryCurrentApiSetSchema(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 130);
  MmQueryApiSetSchema(&v5, &v6);
  return *(_QWORD *)v5;
}
