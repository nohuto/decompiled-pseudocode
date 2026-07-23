/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x140207C04
 * Callers:
 *     PsIoRateControlReference @ 0x140207B68 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140582454 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
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
