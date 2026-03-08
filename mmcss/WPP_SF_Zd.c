/*
 * XREFs of WPP_SF_Zd @ 0x1C0004774
 * Callers:
 *     CiDispatchInitialize @ 0x1C000E300 (CiDispatchInitialize.c)
 *     CiConfigReadDWORD @ 0x1C000E830 (CiConfigReadDWORD.c)
 *     CiConfigQueryValue @ 0x1C000ED40 (CiConfigQueryValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_Zd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // r10
  const wchar_t *v5; // r11
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = *a4;
    if ( *a4 )
    {
      v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 8LL;
  }
  v5 = L"NULL";
LABEL_6:
  if ( !a4 )
    a4 = L"\b";
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           a4,
           2LL,
           v5,
           v4,
           va,
           4LL,
           0LL);
}
