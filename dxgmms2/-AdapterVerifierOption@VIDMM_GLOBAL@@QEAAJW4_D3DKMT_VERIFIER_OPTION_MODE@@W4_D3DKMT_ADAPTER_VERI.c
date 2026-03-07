__int64 __fastcall VIDMM_GLOBAL::AdapterVerifierOption(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_VERIFIER_OPTION_MODE a2,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a3,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a4)
{
  unsigned int v4; // r10d
  int v5; // r8d

  v4 = 0;
  if ( a2 )
  {
    v5 = a3 - 1000;
    if ( !v5 )
    {
      *((_DWORD *)this + 1764) = a4->VidMmFlags.Value;
      return v4;
    }
  }
  else
  {
    v5 = a3 - 1000;
    if ( !v5 )
    {
      *((_DWORD *)this + 1764) = a4->VidMmFlags.Value;
      return v4;
    }
  }
  if ( v5 == 1 )
    *(union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *)((char *)this + 7064) = *a4;
  else
    return (unsigned int)-1073741811;
  return v4;
}
