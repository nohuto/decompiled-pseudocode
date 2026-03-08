/*
 * XREFs of ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x180079158
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078C48 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Render@CCpuClipAntialiasDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18007BA50 (-Render@CCpuClipAntialiasDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendMode::FromMilCompositingMode(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 5LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 21LL;
  if ( v3 != 2 )
    return 0LL;
  return 22LL;
}
