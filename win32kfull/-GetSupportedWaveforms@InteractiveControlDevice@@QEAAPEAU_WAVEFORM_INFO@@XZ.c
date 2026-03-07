struct _WAVEFORM_INFO *__fastcall InteractiveControlDevice::GetSupportedWaveforms(InteractiveControlDevice *this)
{
  struct _WAVEFORM_INFO *result; // rax

  result = (struct _WAVEFORM_INFO *)*((_QWORD *)this + 48);
  if ( result )
    return (struct _WAVEFORM_INFO *)*((_QWORD *)result + 10);
  return result;
}
