/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x14028AA64
 * Callers:
 *     PsIoRateControlReference @ 0x14028A9C8 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582224 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall PspIoRateEntryIoControlReference(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireRundownProtection_0(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}
