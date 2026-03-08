/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x140A98D24
 * Callers:
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140558C74 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     MmAddPrivateDataToCrashDump @ 0x14062DBE0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140A98920 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140A98AFC (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140A98C10 (IopLiveDumpMarkProcessorData.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, __int64))
{
  int v2; // eax
  __int64 MillisecondCounter; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  __int64 (__fastcall *v15[5])(_QWORD, _QWORD, __int64); // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v15[3] = 0LL;
  v16 = 0LL;
  v13 = 0;
  MillisecondCounter = 0LL;
  v14 = 0;
  v17 = 0;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  LODWORD(v16) = v16 | 1;
  v15[2] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))(a1 + 544);
  v15[4] = a2;
  v15[0] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))IoSetDumpRange;
  v15[1] = 0LL;
  result = MmAddRangeToCrashDump((__int64)v15, (unsigned __int64)&KdDebuggerDataBlock, 928LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(
               (__int64)v15,
               (unsigned __int64)KiProcessorBlock,
               8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList((__int64)v15);
      if ( (int)result >= 0 )
      {
        v11[1] = (unsigned __int16 *)qword_140D1EFE8[0];
        v11[0] = (unsigned __int16 *)KeActiveProcessors;
        v12 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v11) )
        {
          result = IopLiveDumpMarkProcessorData((__int64)v15, v17);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v15, 2);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump((__int64)v15, 0xFFFFF78000000000uLL, 1848LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v15, 4);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v15, 8);
              v7 = result;
              if ( (int)result >= 0 )
              {
                if ( *(_DWORD *)a1 != 351
                  || *(_QWORD *)(a1 + 8) != 2LL
                  || (v8 = *(_QWORD *)(a1 + 16), result = MmAddRangeToCrashDump((__int64)v15, v8, 56LL),
                                                 (int)result >= 0)
                  && (result = IopLiveDumpMarkDeviceNode((__int64)v15, *(_QWORD *)(v8 + 48)),
                      v7 = result,
                      (int)result >= 0)
                  && ((v9 = *(_QWORD *)(a1 + 32)) == 0
                   || (result = IopLiveDumpMarkDeviceNode((__int64)v15, v9), v7 = result, (int)result >= 0)) )
                {
                  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
                  {
                    v10 = IopLiveDumpGetMillisecondCounter(0);
                    IopLiveDumpTraceMarkRequiredDumpDataDuration(a1, v10 - MillisecondCounter);
                  }
                  return v7;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
