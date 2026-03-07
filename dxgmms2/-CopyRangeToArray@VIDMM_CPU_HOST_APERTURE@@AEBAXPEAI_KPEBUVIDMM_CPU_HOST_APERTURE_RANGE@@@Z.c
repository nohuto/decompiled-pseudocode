// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
        VIDMM_CPU_HOST_APERTURE *this,
        unsigned int *a2,
        __int64 a3,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a4)
{
  unsigned int v4; // edi
  unsigned int *v5; // rbp
  int v6; // r15d
  unsigned int *i; // rbx

  v4 = *(_DWORD *)a4;
  v5 = &a2[a3];
  v6 = *((_DWORD *)a4 + 1);
  for ( i = a2; ; ++i )
  {
    if ( i == v5 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 47LL, this, a4, 0LL);
    }
    *i = v4;
    if ( v4 == v6 )
      break;
    v4 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v4);
  }
}
