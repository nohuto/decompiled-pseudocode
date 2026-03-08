/*
 * XREFs of ProcessorGetDestinationMode @ 0x1C009ABB8
 * Callers:
 *     ProcessorGetMsiConnectionData @ 0x1C009ACE4 (ProcessorGetMsiConnectionData.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDestinationMode(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 && (*(_QWORD *)a1 & (*(_QWORD *)a1 ^ (*(_QWORD *)a1 - 1LL))) == *(_QWORD *)a1 )
    result = 1LL;
  else
    result = *(unsigned int *)(*(_QWORD *)(ProcessorGroupByNumber + 8LL * *(unsigned __int16 *)(a1 + 8)) + 36LL);
  *a2 = result;
  return result;
}
