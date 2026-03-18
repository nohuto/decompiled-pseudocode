/*
 * XREFs of MmAddRangeToCrashDump @ 0x1406301B0
 * Callers:
 *     IoAddProcessThreadsToDump @ 0x14055C5A0 (IoAddProcessThreadsToDump.c)
 *     IoAddProcessesToDump @ 0x14055C644 (IoAddProcessesToDump.c)
 *     IoAddThreadStackToDump @ 0x14055C710 (IoAddThreadStackToDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055C90C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055CC08 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14055CD94 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14055D12C (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14055D18C (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14055D5CC (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14055D688 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14055D83C (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     ExAddPrivateDataToCrashDump @ 0x140606C2C (ExAddPrivateDataToCrashDump.c)
 *     MiAddPartitionDataToCrashDump @ 0x14062F470 (MiAddPartitionDataToCrashDump.c)
 *     MiAddPartitionToCrashDump @ 0x14062F67C (MiAddPartitionToCrashDump.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14062F944 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddPrivateDataToCrashDump @ 0x140630060 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x140630360 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1406303F0 (MmGetDumpRange.c)
 *     IopLiveDumpAddIptTraceBuffers @ 0x140A9A0F0 (IopLiveDumpAddIptTraceBuffers.c)
 *     IopLiveDumpAddTriageDumpData @ 0x140A9A2A0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140A9BA60 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A9BC3C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140A9BD50 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A9BE64 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiIsWorkingSetTrimThread @ 0x1403531E0 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiSystemInSingleProcessorMode @ 0x14061C408 (MiSystemInSingleProcessorMode.c)
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
