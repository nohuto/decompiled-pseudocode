__int64 __fastcall VidMmAdapterVerifierOption(
        struct VIDMM_GLOBAL *a1,
        enum _D3DKMT_VERIFIER_OPTION_MODE a2,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a3,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a4)
{
  return VIDMM_GLOBAL::AdapterVerifierOption(a1, a2, a3, a4);
}
