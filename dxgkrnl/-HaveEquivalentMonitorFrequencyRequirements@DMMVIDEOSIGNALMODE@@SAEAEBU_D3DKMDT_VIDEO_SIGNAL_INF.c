bool __fastcall DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        char a3)
{
  if ( a1->ActiveSize.cx != a2->ActiveSize.cx
    || a1->ActiveSize.cy != a2->ActiveSize.cy
    || ((*(_BYTE *)&a2->AdditionalSignalInfo ^ *(_BYTE *)&a1->AdditionalSignalInfo) & 7) != 0 )
  {
    return 0;
  }
  if ( a3 )
    return 1;
  return DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&a1->VSyncFreq, &a2->VSyncFreq, 0x12Cu) != 0;
}
