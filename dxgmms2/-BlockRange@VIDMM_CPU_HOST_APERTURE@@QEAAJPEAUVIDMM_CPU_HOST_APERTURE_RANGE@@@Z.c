__int64 __fastcall VIDMM_CPU_HOST_APERTURE::BlockRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2)
{
  int v2; // eax
  __int64 v4; // r10
  __int64 v5; // rdx
  int v6; // r9d
  __int64 result; // rax

  v2 = *(_DWORD *)a2;
  v4 = *((unsigned int *)a2 + 1);
  v5 = *((_QWORD *)this + 5);
  v6 = v4 - v2 + 1;
  if ( v2 == *((_DWORD *)this + 16) )
    *((_DWORD *)this + 16) = *(_DWORD *)(v5 + 4 * v4);
  else
    *(_DWORD *)(v5 + 4LL * (unsigned int)(v2 - 1)) = *(_DWORD *)(v5 + 4 * v4);
  *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 1)) = v6;
  result = 0LL;
  *((_DWORD *)this + 15) -= v6;
  *((_DWORD *)this + 17) = v6;
  return result;
}
