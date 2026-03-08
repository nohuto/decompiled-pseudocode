/*
 * XREFs of IopMarkPagesForProcessorData @ 0x14055B1E8
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055A46C (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1402A775C (KeGetNextKernelStackSegment.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForProcessorData(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // esi
  _QWORD v8[8]; // [rsp+20h] [rbp-48h] BYREF

  v3 = KiProcessorBlock[a2];
  result = MmAddRangeToCrashDump(a1, v3 - 384, 49280LL);
  if ( (int)result >= 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( !v5 || !MmIsAddressValidEx(v5) )
      goto LABEL_12;
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 2320LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2944LL);
    if ( (int)result < 0 )
      return result;
    if ( (PartialDumpControl & 2) != 0 && (v6 = *(_QWORD *)(v3 + 8), (*(_DWORD *)(v6 + 120) & 0x20000) != 0) )
    {
      memset(v8, 0, sizeof(v8));
      v7 = 0;
      KeGetNextKernelStackSegment((_QWORD *)v6, v8, 1);
      while ( 1 )
      {
        result = MmAddRangeToCrashDump(a1, v8[1], v8[0] - v8[1]);
        if ( (int)result < 0 )
          break;
        if ( (unsigned int)++v7 >= 0x64 || !KeGetNextKernelStackSegment(*(_QWORD **)(v3 + 8), v8, 0) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 35264), 1232LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 35264) + 152LL), 0x2000LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 35264) + 248LL) - 4096LL, 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342));
            if ( (int)result >= 0 )
              return MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 360), *(unsigned __int16 *)(v3 + 358));
          }
        }
      }
    }
  }
  return result;
}
