/*
 * XREFs of RtlGetNonVolatileToken @ 0x1405AD520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetNonVolatileToken(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax

  v3 = 1LL;
  if ( RtlpIsFlushRequired )
    v3 = 3LL;
  *a3 = v3;
  return 0LL;
}
