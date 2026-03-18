/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x1409B07D4
 * Callers:
 *     PspSetJobIoRateControl @ 0x1406D4808 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x14024F8B4 (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405E0E68 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405E10BC (PspJobIoRateVolumeEntryRemove.c)
 *     PspIoRateEntryInitialize @ 0x140681FE4 (PspIoRateEntryInitialize.c)
 *     PspIoRateEntryActivate @ 0x1406D4DF0 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1406D4EFC (PspIoRateEntryDeactivate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(
        unsigned __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        unsigned __int64 *a5)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x694A7350u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  PspIoRateEntryInitialize((__int64)PoolWithTag);
  v11 = PspIoRateEntryActivate((__int64)v10, a1, (__int64)a2, 0LL);
  if ( v11 < 0 )
  {
LABEL_10:
    ExFreePoolWithTag(v10, 0);
    return (unsigned int)v11;
  }
  v12 = (struct _EX_RUNDOWN_REF *)PspJobIoRateVolumeEntryRemove(a1, v10[3].Count);
  v13 = v12;
  if ( v12 )
  {
    PspIoRateEntryDeactivate(v12);
    ExFreePoolWithTag(v13, 0);
    *a3 = 1;
  }
  if ( PspIoRateControlInfoIsAnySet(a2) )
  {
    *a5 = v10[5].Count;
    PspJobIoRateVolumeEntryInsert(a1, (unsigned __int64)v10);
    v10 = 0LL;
    *a4 = 1;
  }
  v11 = 0;
  if ( v10 )
  {
    PspIoRateEntryDeactivate(v10);
    goto LABEL_10;
  }
  return (unsigned int)v11;
}
