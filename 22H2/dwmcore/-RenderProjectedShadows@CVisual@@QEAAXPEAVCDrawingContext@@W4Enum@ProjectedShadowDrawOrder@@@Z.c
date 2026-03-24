/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180009FA8
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18007B1C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000A05C (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000C25C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

CProjectedShadowScene **__fastcall CVisual::RenderProjectedShadows(__int64 a1, struct CDrawingContext *a2, int a3)
{
  CProjectedShadowScene **result; // rax
  __int64 v6; // rsi
  struct CProjectedShadowReceiver **v7; // r14
  unsigned __int64 v8; // rbp
  struct CProjectedShadowReceiver *v9; // rdi
  CProjectedShadowScene **i; // rbx

  result = *(CProjectedShadowScene ***)(a1 + 224);
  if ( (*(_DWORD *)result & 0x20000) != 0 )
  {
    result = (CProjectedShadowScene **)CVisual::GetProjectedShadowReceivers();
    v6 = 0LL;
    v7 = (struct CProjectedShadowReceiver **)*result;
    v8 = (unsigned __int64)(result[1] - *result + 7) >> 3;
    if ( *result > result[1] )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        v9 = *v7;
        if ( *((_DWORD *)*v7 + 22) == a3 )
        {
          for ( i = (CProjectedShadowScene **)*((_QWORD *)v9 + 9); ; CProjectedShadowScene::DrawShadows(*i, a2, v9) )
          {
            result = i;
            if ( i == *((CProjectedShadowScene ***)v9 + 8) )
              break;
            --i;
          }
        }
        ++v7;
        ++v6;
      }
      while ( v6 != v8 );
    }
  }
  return result;
}
