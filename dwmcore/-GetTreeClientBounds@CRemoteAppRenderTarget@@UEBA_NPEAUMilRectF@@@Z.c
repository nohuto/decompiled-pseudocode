/*
 * XREFs of ?GetTreeClientBounds@CRemoteAppRenderTarget@@UEBA_NPEAUMilRectF@@@Z @ 0x1801E7C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801E7B98 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 */

bool __fastcall CRemoteAppRenderTarget::GetTreeClientBounds(CRemoteAppRenderTarget *this, struct MilRectF *a2)
{
  __int128 v3; // xmm0
  bool result; // al
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)CRemoteAppRenderTarget::GetTreeBounds((__int64)this - 72, (__int64)v5);
  result = 0;
  *(_OWORD *)a2 = v3;
  return result;
}
