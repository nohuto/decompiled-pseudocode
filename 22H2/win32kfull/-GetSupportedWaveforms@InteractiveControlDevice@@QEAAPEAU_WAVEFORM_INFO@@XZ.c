/*
 * XREFs of ?GetSupportedWaveforms@InteractiveControlDevice@@QEAAPEAU_WAVEFORM_INFO@@XZ @ 0x1C0245788
 * Callers:
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C0240920 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C0245B80 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _WAVEFORM_INFO *__fastcall InteractiveControlDevice::GetSupportedWaveforms(InteractiveControlDevice *this)
{
  struct _WAVEFORM_INFO *result; // rax

  result = (struct _WAVEFORM_INFO *)*((_QWORD *)this + 48);
  if ( result )
    return (struct _WAVEFORM_INFO *)*((_QWORD *)result + 10);
  return result;
}
