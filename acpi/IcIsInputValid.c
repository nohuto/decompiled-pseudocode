/*
 * XREFs of IcIsInputValid @ 0x1C009F424
 * Callers:
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C009DB0C (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDC0 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1A4 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

char __fastcall IcIsInputValid(unsigned int a1)
{
  __int64 i; // rax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 0;
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      break;
  }
  return 1;
}
