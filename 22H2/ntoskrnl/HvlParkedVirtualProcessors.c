/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1404F7BD0
 * Callers:
 *     PpmParkReportMask @ 0x14030F3B0 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228520 (KeIsEmptyAffinityEx.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14038FD8C (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 */

char HvlParkedVirtualProcessors()
{
  char result; // al
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned __int64 v3; // rcx
  _BYTE *i; // rdx
  unsigned __int64 v5; // rcx

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls();
    v1 = 0LL;
    if ( !result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v3 = qword_140C11488;
        if ( HvlpVirtualProcessorsIdentityMapped )
        {
          v1 = qword_140C11488;
        }
        else
        {
          for ( i = &unk_140D006C3; ; i += 4 )
          {
            if ( (v3 & 1) != 0 )
              v1 |= 1LL << *(i - 2);
            v5 = v3 >> 1;
            if ( !v5 )
              break;
            if ( (v5 & 1) != 0 )
              v1 |= 1LL << *i;
            v3 = v5 >> 1;
            if ( !v3 )
              break;
          }
        }
      }
      return HvcallInitiateHypercall(65545, v1, 0LL, v2);
    }
  }
  return result;
}
