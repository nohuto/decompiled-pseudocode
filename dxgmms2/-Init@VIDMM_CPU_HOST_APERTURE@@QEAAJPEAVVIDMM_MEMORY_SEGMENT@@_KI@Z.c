__int64 __fastcall VIDMM_CPU_HOST_APERTURE::Init(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_MEMORY_SEGMENT *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v9; // ecx
  __int64 v10; // rcx

  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 14) = a4;
  *((_DWORD *)this + 15) = a4;
  v5 = 4LL * a4;
  if ( !is_mul_ok(a4, 4uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x36346956u, 258LL);
  v7 = 0;
  *((_QWORD *)this + 5) = v6;
  if ( v6 )
  {
    v9 = *((_DWORD *)this + 14);
    if ( v9 != 1 )
    {
      do
      {
        v10 = v7++;
        *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v10) = v7;
        v9 = *((_DWORD *)this + 14);
      }
      while ( v7 < v9 - 1 );
    }
    *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)(v9 - 1)) = -1;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768A8);
    WdLogSingleEntry1(6LL, 111LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate space for CpuHostAperture page trackers.\n",
      111LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
