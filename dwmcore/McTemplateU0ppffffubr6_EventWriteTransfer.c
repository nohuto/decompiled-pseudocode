/*
 * XREFs of McTemplateU0ppffffubr6_EventWriteTransfer @ 0x18012AE22
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18008CA84 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0ppffffubr6_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-79h] BYREF
  va_list v4; // [rsp+40h] [rbp-69h]
  __int64 v5; // [rsp+48h] [rbp-61h]
  va_list v6; // [rsp+50h] [rbp-59h]
  __int64 v7; // [rsp+58h] [rbp-51h]
  va_list v8; // [rsp+60h] [rbp-49h]
  __int64 v9; // [rsp+68h] [rbp-41h]
  va_list v10; // [rsp+70h] [rbp-39h]
  __int64 v11; // [rsp+78h] [rbp-31h]
  va_list v12; // [rsp+80h] [rbp-29h]
  __int64 v13; // [rsp+88h] [rbp-21h]
  va_list v14; // [rsp+90h] [rbp-19h]
  __int64 v15; // [rsp+98h] [rbp-11h]
  va_list v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int64 v18; // [rsp+B0h] [rbp+7h]
  int v19; // [rsp+B8h] [rbp+Fh]
  int v20; // [rsp+BCh] [rbp+13h]
  va_list va; // [rsp+F0h] [rbp+47h]
  __int64 v22; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+4Fh]
  __int64 v25; // [rsp+100h] [rbp+57h] BYREF
  va_list va2; // [rsp+100h] [rbp+57h]
  __int64 v27; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+108h] [rbp+5Fh]
  __int64 v29; // [rsp+110h] [rbp+67h] BYREF
  va_list va4; // [rsp+110h] [rbp+67h]
  __int64 v31; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+118h] [rbp+6Fh]
  __int64 v33; // [rsp+120h] [rbp+77h] BYREF
  va_list va6; // [rsp+120h] [rbp+77h]
  __int64 v35; // [rsp+128h] [rbp+7Fh]
  va_list va7; // [rsp+130h] [rbp+87h] BYREF

  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v33 = va_arg(va7, _QWORD);
  v35 = va_arg(va7, _QWORD);
  v5 = 8LL;
  v20 = 0;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 4LL;
  va_copy(v8, va2);
  v11 = 4LL;
  va_copy(v10, va3);
  va_copy(v12, va4);
  va_copy(v14, va5);
  va_copy(v16, va6);
  v18 = v35;
  v19 = (unsigned __int8)v33;
  v13 = 4LL;
  v15 = 4LL;
  v17 = 1LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
           v22,
           9LL,
           v3);
}
