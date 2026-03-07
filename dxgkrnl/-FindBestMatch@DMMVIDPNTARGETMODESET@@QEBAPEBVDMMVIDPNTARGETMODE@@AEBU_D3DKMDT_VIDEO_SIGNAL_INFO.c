const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindBestMatch(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  const struct DMMVIDPNSOURCEMODE *v2; // rsi
  DMMVIDPNTARGETMODESET *v3; // rbx
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  int v7; // r9d

  v2 = 0LL;
  v3 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
  if ( v3 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    return v2;
  NextMode = (DMMVIDPNTARGETMODESET *)((char *)v3 - 8);
  if ( !NextMode )
    return v2;
  while ( 1 )
  {
    if ( a2->ActiveSize.cx == *((_DWORD *)NextMode + 21) && a2->ActiveSize.cy == *((_DWORD *)NextMode + 22) )
    {
      v7 = *((_DWORD *)NextMode + 30);
      if ( (((unsigned __int8)v7 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0
        && a2->VSyncFreq.Numerator * (unsigned __int64)*((unsigned int *)NextMode + 24) == a2->VSyncFreq.Denominator
                                                                                         * (unsigned __int64)*((unsigned int *)NextMode + 23)
        && (((unsigned __int16)v7 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
      {
        break;
      }
    }
    if ( !v2
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)NextMode + 72),
           0) )
    {
      v2 = NextMode;
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      return v2;
  }
  return NextMode;
}
