/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x1409AFB14
 * Callers:
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x1402C42A0 (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405A2018 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405A2268 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIoRateEntryInitialize @ 0x1406F80C8 (PspIoRateEntryInitialize.c)
 *     PspIoRateEntryActivate @ 0x140753428 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407552BC (PspIoRateEntryDeactivate.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(
        unsigned __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        unsigned __int64 *a5)
{
  __int64 Pool2; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1766486864LL);
  v10 = (struct _EX_RUNDOWN_REF *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PspIoRateEntryInitialize(Pool2);
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
