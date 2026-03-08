/*
 * XREFs of ?ReleaseAllReferences@CDesktopTreeMarshaler@DirectComposition@@EEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D0990
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D0A70 (-ReleaseRootVisual@CDesktopTreeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CDesktopTreeMarshaler::ReleaseAllReferences(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
}
