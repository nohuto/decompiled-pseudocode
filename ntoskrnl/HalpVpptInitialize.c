/*
 * XREFs of HalpVpptInitialize @ 0x1405079D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpVpptInitialize(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -1 )
    *(_DWORD *)(a1 + 16) = KeGetPcr()->Prcb.Number;
  *(_DWORD *)(a1 + 20) = 1;
  return 0LL;
}
