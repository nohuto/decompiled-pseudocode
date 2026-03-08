/*
 * XREFs of Uart16550InitializePort @ 0x14067A770
 * Callers:
 *     <none>
 * Callees:
 *     Uart16550InitializePortCommon @ 0x14067A794 (Uart16550InitializePortCommon.c)
 */

__int64 __fastcall Uart16550InitializePort(int a1, __int64 a2, int a3)
{
  *(_WORD *)(a2 + 12) = 0;
  return Uart16550InitializePortCommon(a1, a2, a3, 1, 8);
}
