/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x14020C5D0
 * Callers:
 *     IoGetIoRateControl @ 0x14020C430 (IoGetIoRateControl.c)
 *     IoNotifyQuotaState @ 0x1403687A0 (IoNotifyQuotaState.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020C898 (IoDiskIoAttributionDereference.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     IopFindDiskIoAttribution @ 0x140316C68 (IopFindDiskIoAttribution.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(
        __int64 a1,
        struct _EX_RUNDOWN_REF **a2,
        unsigned __int64 *a3)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution();
  v6 = 0;
  v7 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
    {
      *a3 = v7[20].Count;
      *a2 = v7;
    }
    else
    {
      v6 = -1073741431;
      IoDiskIoAttributionDereference(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
