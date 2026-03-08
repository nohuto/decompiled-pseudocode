/*
 * XREFs of MiGetAwePageSizeFromVa @ 0x140648378
 * Callers:
 *     MmSetGraphicsPtes @ 0x140A2BE10 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiGetAweNode @ 0x1406482F8 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14064840C (MiGetAweViewPageSize.c)
 */

_QWORD *__fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // r11
  __int64 v3; // rdx

  result = MiGetAweNode(a1);
  if ( result )
  {
    result = (_QWORD *)MiGetAweViewPageSize(result);
    if ( !result )
    {
      v3 = *(_QWORD *)(v2 + 32);
      if ( (*(_DWORD *)(v3 + 8) & 1) == 0 )
        return *(_QWORD **)(v3 + 16);
    }
  }
  return result;
}
