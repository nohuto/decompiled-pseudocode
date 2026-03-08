/*
 * XREFs of HalCancelMappedTransfer @ 0x140511F20
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaControllerCancelTransfer @ 0x140513FDC (HalpDmaControllerCancelTransfer.c)
 */

__int64 __fastcall HalCancelMappedTransfer(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 441) )
    return 3221225485LL;
  if ( (*(_DWORD *)(a2 + 12) & 1) != 0 )
    return 3221225760LL;
  HalpDmaControllerCancelTransfer(*(_QWORD *)(a1 + 368), *(unsigned int *)(a1 + 380), a2);
  return 0LL;
}
