/*
 * XREFs of AcpiPccWatchdog @ 0x1C0004900
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C0004760 (AcpiPccCommandComplete.c)
 */

void __fastcall AcpiPccWatchdog(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 432) )
  {
    if ( (**(_WORD **)(a2 + 56) & 1) == 0 )
    {
      if ( ++*(_DWORD *)(a2 + 640) <= 5u )
      {
        KeSetTimer2(a2 + 440, -10LL * *(unsigned int *)(a2 + 12), 0LL, 0LL);
        return;
      }
      ++*(_DWORD *)(a2 + 644);
    }
    AcpiPccCommandComplete(a2);
  }
}
