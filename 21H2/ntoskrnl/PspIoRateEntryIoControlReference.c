/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x14036381C
 * Callers:
 *     PsIoRateControlReference @ 0x140363780 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405E0FA0 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall PspIoRateEntryIoControlReference(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireRundownProtection(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}
