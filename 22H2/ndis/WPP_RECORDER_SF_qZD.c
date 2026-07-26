/*
 * XREFs of WPP_RECORDER_SF_qZD @ 0x1C0084DF8
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v6; // rdx
  const wchar_t *v7; // rcx
  const wchar_t *v8; // rax
  int v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  unsigned __int16 *v13; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int16 *);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( v13 )
      v6 = *v13;
    else
      v6 = 8LL;
    if ( v13 && *v13 )
      v7 = (const wchar_t *)*((_QWORD *)v13 + 1);
    else
      v7 = L"NULL";
    v8 = v13;
    if ( !v13 )
      v8 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      0x2Fu,
      va,
      8LL,
      v8,
      2LL,
      v7,
      v6,
      va1,
      4LL,
      0LL);
  }
  LOWORD(v10) = 47;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids, v10, (__int64 *)va);
}
