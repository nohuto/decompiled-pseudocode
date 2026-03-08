/*
 * XREFs of ACPIPccSciReceived @ 0x1C0004576
 * Callers:
 *     ACPIInterruptServiceRoutine @ 0x1C0003D30 (ACPIInterruptServiceRoutine.c)
 * Callees:
 *     <none>
 */

bool ACPIPccSciReceived()
{
  bool v0; // r8
  unsigned int i; // r9d
  __int64 v2; // rdx

  v0 = 0;
  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace && *(_DWORD *)(AcpiPccLegacySubspace + 432) )
      v0 = (**(_WORD **)(AcpiPccLegacySubspace + 56) & 2) != 0;
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v2 = AcpiPccSubspaces + 656LL * i;
        if ( ((*(_BYTE *)v2 + 1) & 0xFE) == 0
          && *(_QWORD *)(v2 + 56)
          && (*(_DWORD *)(v2 + 432) && (**(_WORD **)(v2 + 56) & 2) != 0 || (**(_WORD **)(v2 + 56) & 8) != 0) )
        {
          v0 = 1;
        }
      }
    }
  }
  return v0;
}
