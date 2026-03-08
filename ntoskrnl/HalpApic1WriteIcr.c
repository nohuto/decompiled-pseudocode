/*
 * XREFs of HalpApic1WriteIcr @ 0x140518680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApic1WriteIcr(int a1, int a2)
{
  __int64 result; // rax

  while ( (*(_DWORD *)(HalpLocalApic + 768) & 0x1000) != 0 )
    ;
  if ( (a2 & 0xC0000) == 0 )
    *(_DWORD *)(HalpLocalApic + 784) = a1;
  result = HalpLocalApic;
  *(_DWORD *)(HalpLocalApic + 768) = a2;
  return result;
}
