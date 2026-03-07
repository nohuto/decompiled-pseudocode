__int64 __fastcall KiIpiSetTargetAffinity(__int64 a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v6; // di
  __int64 v9; // rdx
  __int64 result; // rax

  v6 = 0;
  v9 = *(unsigned __int16 *)(a5 + 2);
  if ( !*a2 )
    return KiCopyAffinityEx(a5, v9, a4);
  KiCopyAffinityEx(a5, v9, &KeActiveProcessors);
  if ( *a2 == 1 )
    KeRemoveProcessorAffinityEx(a5, *(unsigned int *)(a1 + 36));
  result = *a3;
  if ( (*a3 & 0x80000000LL) != 0 )
  {
    LODWORD(result) = result & 0x7FFFFFFF;
    *a3 = result;
    result = KeIsEmptyAffinityEx(&KeSleepingProcessors);
    if ( !(_DWORD)result )
    {
      *a2 = 0;
      if ( a5 )
        v6 = *(_WORD *)(a5 + 2);
      return KiSubtractAffinityEx(a5, &KeSleepingProcessors, a5, v6);
    }
  }
  return result;
}
