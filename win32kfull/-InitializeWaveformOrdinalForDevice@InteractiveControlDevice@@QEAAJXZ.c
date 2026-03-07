__int64 __fastcall InteractiveControlDevice::InitializeWaveformOrdinalForDevice(InteractiveControlDevice *this)
{
  unsigned int v1; // edx
  struct _WAVEFORM_INFO *SupportedWaveforms; // r8
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rax
  _WORD *v6; // rcx
  _WORD *i; // rax

  SupportedWaveforms = InteractiveControlDevice::GetSupportedWaveforms(this);
  if ( SupportedWaveforms && v3 )
  {
    v5 = v1;
    v6 = (_WORD *)((char *)SupportedWaveforms + 2);
    while ( *v6 != 4099 )
    {
      v5 = (unsigned int)(v5 + 1);
      v6 += 4;
      if ( (unsigned int)v5 >= v3 )
        goto LABEL_8;
    }
    *(_WORD *)(v4 + 394) = *((_WORD *)SupportedWaveforms + 4 * v5);
LABEL_8:
    for ( i = (_WORD *)((char *)SupportedWaveforms + 2); *i != 4100; i += 4 )
    {
      if ( ++v1 >= v3 )
        return 0LL;
    }
    *(_WORD *)(v4 + 392) = *((_WORD *)SupportedWaveforms + 4 * v1);
  }
  return 0LL;
}
