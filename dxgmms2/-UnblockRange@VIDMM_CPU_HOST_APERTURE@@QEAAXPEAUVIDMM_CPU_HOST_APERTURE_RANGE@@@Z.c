void __fastcall VIDMM_CPU_HOST_APERTURE::UnblockRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(this, a2);
  *((_DWORD *)this + 17) = 0;
}
