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
