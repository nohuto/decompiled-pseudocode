/*
 * XREFs of KiGetProcessorClassForPolicy @ 0x140459166
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x14022FC90 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroReduceToMaximallyPreferredByClass @ 0x140574EC0 (KiHeteroReduceToMaximallyPreferredByClass.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetProcessorClassForPolicy(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  unsigned int v4; // eax

  v3 = *(_QWORD *)(a1 + 34128);
  v4 = a2 - 3;
  if ( v3 )
  {
    if ( v4 <= 1 )
      return *(_BYTE *)(v3 + 4LL * a3 + 5);
    else
      return *(_BYTE *)(v3 + 4LL * a3 + 4);
  }
  else if ( v4 <= 1 )
  {
    return *(_BYTE *)(a1 + 34058);
  }
  else
  {
    return *(_BYTE *)(a1 + 34057);
  }
}
