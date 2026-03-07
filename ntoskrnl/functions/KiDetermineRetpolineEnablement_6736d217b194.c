char __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rax
  const char *v4; // rcx
  char **v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v2 = *(const char **)(a1 + 216);
  v8 = 0LL;
  v7 = 0LL;
  if ( !v2 || (v3 = strstr(v2, "SAFEBOOT:")) == 0LL )
  {
    v4 = *(const char **)(a1 + 216);
    if ( !v4 || (v3 = strstr(v4, "MININT")) == 0LL )
    {
      v5 = (char **)(a1 + 240);
      if ( (KiFeatureSettings & 0x20000) != 0 || (*((_DWORD *)*v5 + 33) & 0x1000) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFBFFFFFFFFFFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000uLL);
      LOBYTE(v3) = KiIsPgiKernel();
      if ( !(_BYTE)v3 )
      {
        LOBYTE(v3) = (unsigned __int8)KiDetectHardwareSpecControlFeatures(
                                        (__int64)KeGetCurrentPrcb(),
                                        0,
                                        (__int64)&v7,
                                        0LL);
        if ( (KiFeatureSettings & 5) == 0 )
        {
          v3 = *v5;
          if ( *((_DWORD *)*v5 + 875) )
          {
            LOBYTE(v3) = v7;
            if ( (v7 & 1) == 0 && !(_BYTE)KiKernelCetEnabled )
            {
              if ( (KiFeatureSettings & 0x200) != 0
                || (LOBYTE(v3) = (KiFeatureSettings & 0x100) == 0, (((v7 & 0x204) == 4) & (unsigned __int8)v3) != 0) )
              {
                LOBYTE(v3) = 0;
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return (char)v3;
}
