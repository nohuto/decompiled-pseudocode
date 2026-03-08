/*
 * XREFs of ?FindData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBAAEAT?$_Align_type@N$07@std@@I@Z @ 0x1800D7644
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(__int64 a1, int a2)
{
  __int64 v2; // r9
  unsigned __int8 *v3; // r10
  unsigned int i; // r8d

  v2 = *(unsigned int *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 8);
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == a2 )
      break;
    ++i;
  }
  if ( i >= (unsigned int)v2 )
    return 0LL;
  else
    return a1 + v2 + 15 + 8LL * i - (((_BYTE)v2 + 15) & 7);
}
