/*
 * XREFs of NtDCompositionAddCrossDeviceVisualChild @ 0x1C0007750
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0007780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 */

__int64 __fastcall NtDCompositionAddCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  return DirectComposition::CApplicationChannel::AddCrossChannelVisualChild(a1, a2, a3, a4, a5, a6, a7);
}
