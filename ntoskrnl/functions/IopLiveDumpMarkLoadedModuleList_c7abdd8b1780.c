__int64 __fastcall IopLiveDumpMarkLoadedModuleList(__int64 a1)
{
  int v2; // ebp
  __int64 result; // rax
  unsigned int v4; // edi
  PVOID *i; // rbx

  v2 = HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000;
  result = MmAddRangeToCrashDump(a1, (unsigned __int64)&PsLoadedModuleList, 16LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i, 160LL);
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        return result;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[5], 32LL);
      v4 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v2 || !MmIsSessionAddress((__int64)i[6]) )
      {
        result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[6], *((unsigned int *)i + 16));
        v4 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v4;
  }
  return result;
}
