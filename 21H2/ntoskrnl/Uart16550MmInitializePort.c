/*
 * XREFs of Uart16550MmInitializePort @ 0x1405CB0F0
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x1405CAFC4 (Uart16550InitializePortCommon.c)
 */

char __fastcall Uart16550MmInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  *(_WORD *)(a2 + 12) = 1;
  return Uart16550InitializePortCommon(a1, a2, a3, a4, a5);
}
