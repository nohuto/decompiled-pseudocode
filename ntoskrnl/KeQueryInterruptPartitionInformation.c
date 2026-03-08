/*
 * XREFs of KeQueryInterruptPartitionInformation @ 0x14028F550
 * Callers:
 *     HalpInterruptAffinityIsSteerable @ 0x14028F404 (HalpInterruptAffinityIsSteerable.c)
 *     IntPartIsInterruptSteerable @ 0x14028F4A8 (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryInterruptPartitionInformation(__int16 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( KiIntPartInitialized )
  {
    if ( !KiInterruptPartitions || a1 )
    {
      return (unsigned int)-1073741637;
    }
    else if ( *(unsigned __int8 *)(KiInterruptPartitions + 2) <= a2 )
    {
      return (unsigned int)-1073741584;
    }
    else
    {
      *(_OWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 8) = 0;
      *(_QWORD *)a3 = *(_QWORD *)(KiInterruptPartitions + 16 * (a2 + 1LL));
    }
  }
  else
  {
    v3 = 259;
    *(_OWORD *)a3 = 0LL;
  }
  return v3;
}
