/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C0018E40
 * Callers:
 *     xxxODI_ColorInit @ 0x1C0018A90 (xxxODI_ColorInit.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0018EE0 (RtlLoadStringOrError.c)
 *     FastGetProfileStringW @ 0x1C0074270 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        PCUNICODE_STRING Source,
        __int64 a2,
        ULONG a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v9; // [rsp+28h] [rbp-E0h]
  _BYTE v10[160]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v10);
  LODWORD(v9) = a6;
  return FastGetProfileStringW(Source, a5, v9, a7);
}
