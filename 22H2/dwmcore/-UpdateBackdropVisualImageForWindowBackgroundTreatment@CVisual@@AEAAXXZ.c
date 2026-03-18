/*
 * XREFs of ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800A4B7C
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800A4A78 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800A4BAC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

void __fastcall CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment(CVisual *this)
{
  CVisual *v1; // r10

  if ( !*((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(this) + 38) )
    CVisual::ClearAllBackdropVisualImages(v1);
}
