/*
 * XREFs of IopAddMiniDumpPagesToPartialKernelDump @ 0x14055A768
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x140559F94 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     IopUpdateMinidumpContext @ 0x1405516E4 (IopUpdateMinidumpContext.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14055A8F4 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopCalculateStackInformation @ 0x14055A990 (IopCalculateStackInformation.c)
 *     IopMarkPagesForDpcData @ 0x14055ACEC (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14055B12C (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14055B39C (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x14062DEE0 (MmAddUnloadedDriverInformationToCrashDump.c)
 */

__int64 __fastcall IopAddMiniDumpPagesToPartialKernelDump(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v15[5]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v16; // [rsp+90h] [rbp+27h]

  v16 = 0LL;
  v13 = 0LL;
  a8 = 0;
  if ( !AvailablePagesForPartialDump )
    return 3221225507LL;
  v10 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v11 = *(_QWORD *)(v10 + 48);
  v15[1] = 0LL;
  LODWORD(v16) = v16 | 3;
  v14[0] = v11;
  v14[1] = v10 + 56;
  v15[2] = v14;
  v15[4] = &AvailablePagesForPartialDump;
  v15[0] = IoSetDumpRange;
  v15[3] = v10;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7, v12, PartialDumpControl & 8);
  result = MmAddUnloadedDriverInformationToCrashDump(v15);
  if ( (int)result >= 0 )
  {
    result = IopMarkPagesForLoadedDriverInformation(v15);
    if ( (int)result >= 0 )
    {
      if ( !(unsigned __int8)IopCalculateStackInformation(a7, a6, &v13, &a8)
        || (result = IopMarkPagesForRunTimeTriageDataBlocks(v15, a6, v13, v13 + a8), (int)result >= 0) )
      {
        result = IopMarkPagesForDpcData(v15);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v15, a7->ApcState.Process, 2944LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(v15, a7, 2320LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(v15, v13, a8);
              if ( (int)result >= 0 )
                return IopAddTriageDumpDataToPartialKernelDump(v15, *(_QWORD *)(CrashdmpDumpBlock + 1416));
            }
          }
        }
      }
    }
  }
  return result;
}
