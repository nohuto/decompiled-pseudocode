/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x1402E09A4
 * Callers:
 *     PsIoRateControlReference @ 0x1402E0908 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582164 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
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
