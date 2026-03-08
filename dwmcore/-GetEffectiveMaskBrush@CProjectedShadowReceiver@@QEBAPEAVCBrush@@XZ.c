/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800054BC
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800052C8 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180005464 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001F970 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1802481CC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     <none>
 */

struct CBrush *__fastcall CProjectedShadowReceiver::GetEffectiveMaskBrush(CProjectedShadowReceiver *this)
{
  struct CBrush *result; // rax

  result = (struct CBrush *)*((_QWORD *)this + 13);
  if ( !result )
    return *(struct CBrush **)(*((_QWORD *)this + 2) + 320LL);
  return result;
}
