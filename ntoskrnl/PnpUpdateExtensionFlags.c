/*
 * XREFs of PnpUpdateExtensionFlags @ 0x1403CE844
 * Callers:
 *     PnpIsChainDereferenced @ 0x1403CE6E0 (PnpIsChainDereferenced.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpUpdateExtensionFlags(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  for ( result = *a1; result; result = *(_QWORD *)(result + 24) )
  {
    v5 = *(_QWORD *)(result + 312);
    if ( a4 )
      *(_DWORD *)(v5 + 32) |= 4u;
    else
      *(_DWORD *)(v5 + 32) &= ~4u;
  }
  return result;
}
