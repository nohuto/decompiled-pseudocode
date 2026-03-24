/*
 * XREFs of MiGetAwePageSizeFromVa @ 0x14054C39C
 * Callers:
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiGetAweNode @ 0x14054C320 (MiGetAweNode.c)
 */

_QWORD *__fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  _QWORD *result; // rax

  result = MiGetAweNode(a1);
  if ( result )
    return *(_QWORD **)(result[4] + 8LL);
  return result;
}
