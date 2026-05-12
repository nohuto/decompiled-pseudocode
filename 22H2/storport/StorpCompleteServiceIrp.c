/*
 * XREFs of StorpCompleteServiceIrp @ 0x1C003B498
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F680 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorpCompleteServiceIrp(__int64 a1, IRP *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx

  v2 = 0;
  if ( a2 )
  {
    v3 = **(_QWORD **)(a1 - 16);
    RaidCompleteRequestEx(a2, 0, a2->IoStatus.Status);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 280));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v2;
}
