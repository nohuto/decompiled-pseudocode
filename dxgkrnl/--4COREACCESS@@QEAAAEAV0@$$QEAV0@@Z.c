/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058164
 * Callers:
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0224C40 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C035241C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

__int64 __fastcall COREACCESS::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 24) )
      COREACCESS::Release((COREACCESS *)a1);
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 16));
  }
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  *(_BYTE *)(a2 + 24) = 0;
  return a1;
}
