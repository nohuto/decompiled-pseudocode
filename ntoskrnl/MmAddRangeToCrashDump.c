/*
 * XREFs of MmAddRangeToCrashDump @ 0x14062DD30
 * Callers:
 *     IoAddProcessThreadsToDump @ 0x14055A100 (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x14055A1A4 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x14055A270 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055A46C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055A768 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14055A8F4 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14055AC8C (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14055ACEC (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14055B12C (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14055B1E8 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14055B39C (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x1406047DC (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x14062CFF0 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x14062D1FC (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14062D4C4 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x14062DBE0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x14062DEE0 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x14062DF70 (MmGetDumpRange.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A96FB0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x140A97160 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140A98920 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A98AFC (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140A98C10 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A98D24 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiIsWorkingSetTrimThread @ 0x1402E7920 (MiIsWorkingSetTrimThread.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiSystemInSingleProcessorMode @ 0x140619F5C (MiSystemInSingleProcessorMode.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi
  BOOL IsWorkingSetTrimThread; // eax
  int v9; // ecx
  int v10; // eax
  __int64 AnyMultiplexedVm; // rbx
  int SystemRegionType; // eax
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-99h] BYREF
  __int64 v15; // [rsp+28h] [rbp-91h]
  __m128i v16[11]; // [rsp+30h] [rbp-89h] BYREF

  memset(v16, 0, sizeof(v16));
  v15 = 0LL;
  if ( !a3 )
    return 0LL;
  v16[2].m128i_i64[0] = a2;
  v14 = a1;
  v16[2].m128i_i64[1] = a3 + a2 - 1;
  v16[9].m128i_i64[1] = (__int64)MiFilterCrashDumpPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v9 = HIDWORD(v15);
    if ( !IsWorkingSetTrimThread )
      v9 = 1;
    HIDWORD(v15) = v9;
  }
  v16[10].m128i_i64[1] = (__int64)&v14;
  LOBYTE(v10) = MiSystemInSingleProcessorMode();
  if ( !v10 )
  {
    v16[0].m128i_i32[0] = 7;
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(5);
    SystemRegionType = MiGetSystemRegionType(a2);
    if ( SystemRegionType > 9 )
    {
      if ( SystemRegionType == 12 )
      {
        v13 = 1;
        goto LABEL_29;
      }
      if ( SystemRegionType != 13 )
      {
        if ( SystemRegionType != 14 && SystemRegionType != 16 )
          goto LABEL_30;
        v13 = 4;
        goto LABEL_29;
      }
    }
    else if ( SystemRegionType != 9 )
    {
      if ( SystemRegionType )
      {
        if ( SystemRegionType == 1 )
        {
          if ( HIDWORD(v15) )
            return 3221225485LL;
          AnyMultiplexedVm = MiGetSessionVm();
          if ( !AnyMultiplexedVm )
            return 3221225485LL;
          goto LABEL_30;
        }
        if ( SystemRegionType != 5 )
        {
          if ( SystemRegionType == 6 )
          {
            v13 = 2;
            goto LABEL_29;
          }
          if ( SystemRegionType == 8 )
          {
            v13 = 0;
LABEL_29:
            AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v13);
          }
        }
      }
      else
      {
        AnyMultiplexedVm = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
      }
LABEL_30:
      v16[1].m128i_i64[1] = AnyMultiplexedVm;
      v16[0].m128i_i8[7] = MiLockWorkingSetShared(AnyMultiplexedVm);
      MiWalkPageTables(v16);
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v16[0].m128i_u8[7]);
      return (unsigned int)v15;
    }
    v13 = 3;
    goto LABEL_29;
  }
  v16[0].m128i_i32[0] = 67584;
  MiWalkPageTables(v16);
  return (unsigned int)v15;
}
