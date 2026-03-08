/*
 * XREFs of PspIoRateEntryIoControlReference @ 0x1402946C0
 * Callers:
 *     PsIoRateControlReference @ 0x140294624 (PsIoRateControlReference.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1405A2150 (PspJobIoRateVolumeEntryReference.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
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
