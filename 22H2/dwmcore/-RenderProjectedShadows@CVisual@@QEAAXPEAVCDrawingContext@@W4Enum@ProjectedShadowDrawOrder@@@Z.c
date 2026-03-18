/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180004E20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008B040 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004EB0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F10 (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 */

CProjectedShadowScene **__fastcall CVisual::RenderProjectedShadows(__int64 a1, struct CDrawingContext *a2, int a3)
{
  CProjectedShadowScene **result; // rax
  CProjectedShadowScene *v6; // rbp
  struct CProjectedShadowReceiver **i; // rdi
  struct CProjectedShadowReceiver *v8; // rsi
  CProjectedShadowScene **j; // rbx

  result = *(CProjectedShadowScene ***)(a1 + 232);
  if ( (*(_DWORD *)result & 0x20000) != 0 )
  {
    result = (CProjectedShadowScene **)CVisual::GetProjectedShadowReceivers(a1);
    v6 = result[1];
    for ( i = (struct CProjectedShadowReceiver **)*result; i != (struct CProjectedShadowReceiver **)v6; ++i )
    {
      v8 = *i;
      if ( *((_DWORD *)*i + 24) == a3 )
      {
        for ( j = (CProjectedShadowScene **)*((_QWORD *)v8 + 10); ; CProjectedShadowScene::DrawShadows(*j, a2, v8) )
        {
          result = j;
          if ( j == *((CProjectedShadowScene ***)v8 + 9) )
            break;
          --j;
        }
      }
    }
  }
  return result;
}
