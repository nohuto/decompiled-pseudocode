void __fastcall VIDMM_GLOBAL::SetupForBuildPagingBuffer(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4)
{
  __int64 v7; // r8

  memset(a4, 0, sizeof(struct _DXGKARG_BUILDPAGINGBUFFER));
  LOBYTE(v7) = (*((_BYTE *)this + 40937) & 0x20) != 0;
  a4->hSystemContext = (HANDLE)VidSchGetDriverPagingContext(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL), a2, v7);
}
