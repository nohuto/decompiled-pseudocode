/*
 * XREFs of ExLockUserBuffer @ 0x14075D5A4
 * Callers:
 *     ExpGetLookasideInformation @ 0x140602EC8 (ExpGetLookasideInformation.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14075D2DC (ExpGetFirmwareEnvironmentVariable.c)
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 *     NtQueryBootEntryOrder @ 0x14083E080 (NtQueryBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14083E4F0 (NtEnumerateBootEntries.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 *     ExpGetHandleInformation @ 0x1409F36D4 (ExpGetHandleInformation.c)
 *     ExpGetHandleInformationEx @ 0x1409F3754 (ExpGetHandleInformationEx.c)
 *     ExpGetLockInformation @ 0x1409F37D4 (ExpGetLockInformation.c)
 *     ExpGetObjectInformation @ 0x1409F3854 (ExpGetObjectInformation.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FB114 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x1409FBD70 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1409FC230 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1409FC490 (NtQueryDriverEntryOrder.c)
 *     MiCopyLargeVad @ 0x140A466EC (MiCopyLargeVad.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1402CFFB0 (MmSizeOfMdl.c)
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *Pool2; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  Pool2 = (struct _MDL *)ExAllocatePool2(65LL, v10, 1868983881LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    Pool2->Next = 0LL;
    Pool2->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    Pool2->MdlFlags = 0;
    Pool2->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool2->ByteOffset = a1 & 0xFFF;
    Pool2->ByteCount = v8;
    MmProbeAndLockPages(Pool2, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
