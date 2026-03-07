int __fastcall VidMmFreeGpuVirtualAddress(VIDMM_GLOBAL *a1, __int64 a2, struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3)
{
  __int64 v3; // rax
  struct VIDMM_PROCESS *v4; // rdx

  v3 = *(_QWORD *)(a2 + 64);
  v4 = 0LL;
  if ( v3 )
    v4 = *(struct VIDMM_PROCESS **)(v3 + 8);
  return VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a1, v4, a3, 0);
}
