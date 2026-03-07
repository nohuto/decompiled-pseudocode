void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v2; // r10d
  __int64 v3; // rax
  __int64 v6; // rdx
  int v7; // ecx

  v2 = *(_DWORD *)a2;
  v3 = *((unsigned int *)a2 + 1);
  if ( *(_DWORD *)a2 == -1 || (_DWORD)v3 == -1 )
  {
    WdLogSingleEntry1(1LL, this);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Attempting to free invalid page range in CpuHostAperture 0x%p",
      this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *(_DWORD *)(v6 + 4 * v3);
    *(_DWORD *)(v6 + 4LL * (unsigned int)v3) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v7;
    *((_DWORD *)this + 16) = v2;
    *(_DWORD *)a2 = -1;
    *((_DWORD *)a2 + 1) = -1;
  }
}
