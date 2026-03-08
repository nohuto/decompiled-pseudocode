/*
 * XREFs of KiUpdateNumberProcessorsIpi @ 0x140A9C500
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateProcessorCount @ 0x140A860DC (KiUpdateProcessorCount.c)
 */

ULONG_PTR __fastcall KiUpdateNumberProcessorsIpi(volatile signed __int32 *Argument)
{
  __int64 v2; // rcx

  v2 = *(unsigned int *)Argument;
  if ( *((_DWORD *)Argument + 1) == KeGetPcr()->Prcb.Number )
  {
    while ( *((_DWORD *)Argument + 2) )
      _mm_pause();
    KiUpdateProcessorCount(v2, (unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6);
    *((_DWORD *)Argument + 4) = 1;
    while ( *((_DWORD *)Argument + 3) )
      _mm_pause();
  }
  else
  {
    _InterlockedDecrement(Argument + 2);
    while ( !*((_DWORD *)Argument + 4) )
      _mm_pause();
    _InterlockedDecrement(Argument + 3);
  }
  return 0LL;
}
