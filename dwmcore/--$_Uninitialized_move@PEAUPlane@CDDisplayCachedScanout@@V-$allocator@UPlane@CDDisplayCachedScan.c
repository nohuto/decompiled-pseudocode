/*
 * XREFs of ??$_Uninitialized_move@PEAUPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAPEAUPlane@CDDisplayCachedScanout@@QEAU12@0PEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x18029A03C
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180299EF8 (--$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180284AA4 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 */

_DWORD *__fastcall std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v4 - 8);
      a3 += 20;
      v5[v4 - 4] = *(_BYTE *)(v4 - 4);
      v6 = *(_QWORD *)v4;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4] = v6;
      *(_DWORD *)&v5[v4 + 8] = *(_DWORD *)(v4 + 8);
      v7 = *(_OWORD *)(v4 + 12);
      v4 += 80LL;
      *(_OWORD *)&v5[v4 - 68] = v7;
      *(_OWORD *)&v5[v4 - 52] = *(_OWORD *)(v4 - 52);
      *(_OWORD *)&v5[v4 - 36] = *(_OWORD *)(v4 - 36);
      *(_DWORD *)&v5[v4 - 20] = *(_DWORD *)(v4 - 20);
      *(_DWORD *)&v5[v4 - 16] = *(_DWORD *)(v4 - 16);
    }
    while ( v4 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>((__int64)a3, (__int64)a3);
  return a3;
}
