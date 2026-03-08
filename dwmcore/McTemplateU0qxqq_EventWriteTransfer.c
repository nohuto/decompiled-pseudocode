/*
 * XREFs of McTemplateU0qxqq_EventWriteTransfer @ 0x180245388
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800E0A64 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0qxqq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-19h] BYREF
  int *v5; // [rsp+48h] [rbp-9h]
  __int64 v6; // [rsp+50h] [rbp-1h]
  va_list v7; // [rsp+58h] [rbp+7h]
  __int64 v8; // [rsp+60h] [rbp+Fh]
  va_list v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  va_list v11; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+80h] [rbp+2Fh]
  int v13; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+6Fh]
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF
  va_list va1; // [rsp+C8h] [rbp+77h]
  va_list va2; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v13 = a3;
  v6 = 4LL;
  v5 = &v13;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 4LL;
  va_copy(v9, va1);
  v12 = 4LL;
  va_copy(v11, va2);
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DCOMPEVENT_PRIMITIVEGROUP_UPDATE,
           a3,
           5u,
           &v4);
}
