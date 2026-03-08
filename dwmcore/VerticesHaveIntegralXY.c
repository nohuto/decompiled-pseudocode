/*
 * XREFs of VerticesHaveIntegralXY @ 0x180076254
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VerticesHaveIntegralXY(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  int v3; // eax

  v1 = 0LL;
  if ( !*((_DWORD *)a1 + 3) )
    return 1;
  v2 = *a1;
  while ( 1 )
  {
    v3 = v1 * *((_DWORD *)a1 + 2);
    if ( COERCE_FLOAT(*(_DWORD *)(v3 + v2) & _xmm) > 8388608.0
      || COERCE_FLOAT(*(_DWORD *)(v3 + v2 + 4) & _xmm) > 8388608.0 )
    {
      break;
    }
    if ( ++v1 >= (unsigned __int64)*((unsigned int *)a1 + 3) )
      return 1;
  }
  return 0;
}
