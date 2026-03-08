/*
 * XREFs of ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004DC0
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180003FF0 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000410C (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180004D30 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18004A400 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18009A61C (--1CVisual@@MEAA@XZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x1800AA090 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEBA_NXZ @ 0x1800C2CC0 (-HasNonEmptyContent@CVisual@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ @ 0x1800D76F0 (-HasNonEmptyContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x1800E585C (-HasProjectedShadowReceivers@CVisual@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetProjectedShadowReceivers(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x20000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 15 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(_QWORD *)v4;
}
