__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  return DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(a1, a2, a3, a4);
}
