/*
 * XREFs of WPP_RECORDER_SF_qLLS @ 0x1C007EF54
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C011C470 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLLS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  int v16; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a9[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a9;
    if ( !a9 )
      v14 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      0x3Bu,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      v14,
      v13,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
  }
  LOWORD(v16) = 59;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, v16, &a6);
}
