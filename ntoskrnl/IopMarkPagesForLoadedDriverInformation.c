/*
 * XREFs of IopMarkPagesForLoadedDriverInformation @ 0x14055B12C
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14055A768 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForLoadedDriverInformation(__int64 a1)
{
  __int64 result; // rax
  PVOID *i; // rbx

  result = MmAddRangeToCrashDump(a1, &PsLoadedModuleList, 16LL);
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = MmAddRangeToCrashDump(a1, i, 160LL);
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, i[5], 32LL);
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, i[6], *((unsigned int *)i + 16));
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
