/*
 * XREFs of ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800055AC
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800053B8 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180005554 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001FA60 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18024B8AC (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
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
