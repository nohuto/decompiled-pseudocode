/*
 * XREFs of ?FindHWRenderAdapterByLuid@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C026A070
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindHWRenderAdapterByLuid(struct DXGADAPTER *a1, DXGADAPTER ***a2)
{
  DXGADAPTER **v3; // rdx

  if ( !*a2[1]
    && *((_DWORD *)a1 + 50) == 1
    && !*((_BYTE *)a1 + 2609)
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209))
    && !*((_BYTE *)a1 + 2609) )
  {
    if ( *((_QWORD *)a1 + 338) )
    {
      if ( (*((_DWORD *)a1 + 87) & 0x10) == 0 )
      {
        v3 = *a2;
        if ( *(_DWORD *)*a2 == *((_DWORD *)a1 + 79) && *((_DWORD *)v3 + 1) == *((_DWORD *)a1 + 80) )
          DXGADAPTER_REFERENCE::Assign(a2[1], a1);
      }
    }
  }
  return 0LL;
}
