/*
 * XREFs of McTemplateU0xxxx_EventWriteTransfer @ 0x1802A6850
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1802A6068 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1802A93D0 (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0xxxx_EventWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-19h] BYREF
  va_list v4; // [rsp+48h] [rbp-9h]
  __int64 v5; // [rsp+50h] [rbp-1h]
  va_list v6; // [rsp+58h] [rbp+7h]
  __int64 v7; // [rsp+60h] [rbp+Fh]
  va_list v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  va_list v10; // [rsp+78h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+2Fh]
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  va_copy(v10, va3);
  v11 = 8LL;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, v13, 5u, &v3);
}
