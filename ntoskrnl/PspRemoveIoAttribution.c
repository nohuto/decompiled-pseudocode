/*
 * XREFs of PspRemoveIoAttribution @ 0x14075339C
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1407530A0 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoStopDiskIoAttributionForContext @ 0x1402C4224 (IoStopDiskIoAttributionForContext.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(struct _EX_RUNDOWN_REF **Object)
{
  struct _EX_RUNDOWN_REF **v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 391) )
  {
    IoStopDiskIoAttributionForContext(Object[196]);
    IoDiskIoAttributionDereference((__int64)Object[196]);
    Object[196] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(
           Object,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
