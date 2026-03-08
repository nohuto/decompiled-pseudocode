/*
 * XREFs of NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C00075E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00075F8 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 */

__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  return DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(a1, a2, a3, a4);
}
