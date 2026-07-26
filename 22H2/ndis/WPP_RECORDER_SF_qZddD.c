/*
 * XREFs of WPP_RECORDER_SF_qZddD @ 0x1C0035C1C
 * Callers:
 *     ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00351E4 (-ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZddD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v7; // rdx
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rax
  int v10; // [rsp+20h] [rbp-88h]
  __int64 v11; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v13; // [rsp+E0h] [rbp+38h]
  __int64 v14; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v16; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( v13 )
      v7 = *v13;
    else
      v7 = 8LL;
    if ( v13 && *v13 )
      v8 = (const wchar_t *)*((_QWORD *)v13 + 1);
    else
      v8 = L"NULL";
    v9 = v13;
    if ( !v13 )
      v9 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      0x24u,
      va,
      8LL,
      v9,
      2LL,
      v8,
      v7,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      0LL);
  }
  LOWORD(v10) = 36;
  return WppAutoLogTrace(a1, 4LL, 9LL, &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids, v10, (__int64 *)va);
}
