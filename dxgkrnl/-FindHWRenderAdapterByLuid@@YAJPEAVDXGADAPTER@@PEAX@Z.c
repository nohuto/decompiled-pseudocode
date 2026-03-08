/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C030E310
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, DXGADAPTER ***a2)
{
  DXGADAPTER **v3; // rdx

  if ( !*a2[1]
    && *((_DWORD *)a1 + 50) == 1
    && !*((_BYTE *)a1 + 2833)
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209))
    && !*((_BYTE *)a1 + 2833)
    && (*((_BYTE *)a1 + 2891) & 1) != 0
    && (*((_DWORD *)a1 + 109) & 0x10) == 0 )
  {
    v3 = *a2;
    if ( *(_DWORD *)*a2 == *((_DWORD *)a1 + 101) && *((_DWORD *)v3 + 1) == *((_DWORD *)a1 + 102) )
      DXGADAPTER_REFERENCE::Assign(a2[1], a1);
  }
  return 0LL;
}
