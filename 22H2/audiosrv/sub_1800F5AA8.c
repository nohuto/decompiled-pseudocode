/*
 * XREFs of sub_1800F5AA8 @ 0x1800F5AA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5AA8(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    ***(_QWORD ***)a1 = **(_QWORD **)(a1 + 8);
    result = **(unsigned int **)(a1 + 24);
    ***(_DWORD ***)(a1 + 16) = result;
  }
  return result;
}
