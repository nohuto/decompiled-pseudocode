/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x14075DAD4
 * Callers:
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1407D1D18 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     MmQueryApiSetSchema @ 0x140371AA8 (MmQueryApiSetSchema.c)
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
