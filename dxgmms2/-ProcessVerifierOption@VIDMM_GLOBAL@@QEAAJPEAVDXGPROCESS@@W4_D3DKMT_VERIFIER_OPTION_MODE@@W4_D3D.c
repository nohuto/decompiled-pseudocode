/*
 * XREFs of ?ProcessVerifierOption@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C00EBF50
 * Callers:
 *     ?VidMmProcessVerifierOption@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C002CD20 (-VidMmProcessVerifierOption@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessVerifierOption(
        VIDMM_GLOBAL *this,
        struct DXGPROCESS *a2,
        enum _D3DKMT_VERIFIER_OPTION_MODE a3,
        enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE a4,
        union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *a5)
{
  __int64 v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // rdx
  int v8; // r9d
  int v9; // r9d

  v5 = *((_QWORD *)a2 + 8);
  v6 = 0;
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 8);
  else
    v7 = 0LL;
  if ( a3 )
  {
    v9 = a4 - 1000;
    if ( !v9 )
    {
      *(_DWORD *)(v7 + 112) = a5->VidMmFlags.Value;
      return v6;
    }
    if ( v9 == 1 )
    {
      *(union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *)(v7 + 120) = *a5;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v8 = a4 - 1000;
  if ( !v8 )
  {
    a5->VidMmFlags.Value = *(_DWORD *)(v7 + 112);
    return v6;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  *a5 = *(union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *)(v7 + 120);
  return v6;
}
