__int64 __fastcall VidMmProbeForDecommit(
        struct VIDMM_GLOBAL *a1,
        struct DXGPROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  __int64 v4; // rax
  struct VIDMM_PROCESS *v5; // rdx

  v4 = *((_QWORD *)a2 + 8);
  v5 = 0LL;
  if ( v4 )
    v5 = *(struct VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_GLOBAL::VidMmProbeForDecommit(a1, v5, a3, a4);
}
