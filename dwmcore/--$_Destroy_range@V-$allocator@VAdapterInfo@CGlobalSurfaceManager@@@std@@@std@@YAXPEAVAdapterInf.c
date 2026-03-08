/*
 * XREFs of ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800CE2F0
 * Callers:
 *     ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800CC9A4 (-_Change_array@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSur.c)
 *     ??$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@0PEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800CD608 (--$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalS.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800CE2C4 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x1801B3FD8 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rcx
  int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(char **)(v3 + 8);
      result = (_DWORD)v4 - 1;
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = CloseHandle(v4);
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
