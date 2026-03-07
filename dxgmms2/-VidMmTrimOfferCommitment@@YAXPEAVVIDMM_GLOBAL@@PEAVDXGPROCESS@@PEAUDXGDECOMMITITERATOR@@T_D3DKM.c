void __fastcall VidMmTrimOfferCommitment(
        struct VIDMM_GLOBAL *a1,
        struct DXGPROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rax
  struct VIDMM_PROCESS *v7; // rdx

  v6 = *((_QWORD *)a2 + 8);
  v7 = 0LL;
  if ( v6 )
    v7 = *(struct VIDMM_PROCESS **)(v6 + 8);
  VIDMM_GLOBAL::VidMmTrimOfferCommitment(a1, v7, a3, a4, a5, a6);
}
