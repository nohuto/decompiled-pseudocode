// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, unsigned __int8 a2)
{
  __int64 v2; // rbx
  VIDMM_APERTURE_SEGMENT *v5; // rcx
  int v6; // esi
  __int64 v8; // r9
  unsigned int *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = 0LL;
  if ( !*((_DWORD *)this + 926) )
    return 0LL;
  while ( 1 )
  {
    v5 = *(VIDMM_APERTURE_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v2);
    if ( (*((_DWORD *)v5 + 20) & 1) != 0 )
    {
      v6 = VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(v5, &v9, a2);
      if ( v6 < 0 )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 926) )
      return 0LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    v8 = *((_QWORD *)this + 3);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 37LL, v8, (unsigned int)v2, v9);
  }
  return (unsigned int)v6;
}
