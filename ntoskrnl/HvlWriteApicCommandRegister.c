/*
 * XREFs of HvlWriteApicCommandRegister @ 0x14036DE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlWriteApicCommandRegister(unsigned int a1, unsigned int a2)
{
  unsigned __int64 result; // rax

  result = a2 | ((unsigned __int64)a1 << 32);
  __writemsr(0x40000071u, result);
  return result;
}
