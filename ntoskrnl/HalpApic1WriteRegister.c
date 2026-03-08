/*
 * XREFs of HalpApic1WriteRegister @ 0x14036D970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApic1WriteRegister(int a1, int a2)
{
  __int64 result; // rax

  result = HalpLocalApic;
  *(_DWORD *)(a1 + HalpLocalApic) = a2;
  return result;
}
