/*
 * XREFs of KeQueryInterruptPartitionCount @ 0x1403203E0
 * Callers:
 *     HalpInterruptAffinityIsSteerable @ 0x140320224 (HalpInterruptAffinityIsSteerable.c)
 *     IntPartIsInterruptSteerable @ 0x1403202C8 (IntPartIsInterruptSteerable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryInterruptPartitionCount(__int16 a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( KiIntPartInitialized )
  {
    if ( !KiInterruptPartitions || a1 )
      return (unsigned int)-1073741637;
    else
      *a2 = *(unsigned __int8 *)(KiInterruptPartitions + 2);
  }
  else
  {
    *a2 = 0;
    return 259;
  }
  return v2;
}
