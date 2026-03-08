/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1802496DC
 * Callers:
 *     ??$LogValueUpdate@UD2DVector4@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVector4@@@Z @ 0x18001C77C (--$LogValueUpdate@UD2DVector4@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVect.c)
 *     ??$LogValueUpdate@UD2DVector2@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVector2@@@Z @ 0x18001E704 (--$LogValueUpdate@UD2DVector2@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVect.c)
 *     ??$LogValueUpdate@_N@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEB_N@Z @ 0x18001EB4C (--$LogValueUpdate@_N@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEB_N@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180096C84 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x180096CB8 (--$LogValueUpdate@M@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z.c)
 *     ??$LogValueUpdate@UD2DMatrix@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DMatrix@@@Z @ 0x1800DD518 (--$LogValueUpdate@UD2DMatrix@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DMatri.c)
 *     ??$LogValueUpdate@U_D3DCOLORVALUE@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBU_D3DCOLORVALUE@@@Z @ 0x1800DD914 (--$LogValueUpdate@U_D3DCOLORVALUE@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBU_D3.c)
 *     ??$LogValueUpdate@UD2DVector3@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVector3@@@Z @ 0x1800DDE24 (--$LogValueUpdate@UD2DVector3@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVect.c)
 *     ??$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQuaternion@@@Z @ 0x180248B2C (--$LogValueUpdate@UD2DQuaternion@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DQ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+50h] [rbp-49h]
  __int64 v13; // [rsp+58h] [rbp-41h]
  __int64 v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  __int64 v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  __int64 v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  __int64 v22; // [rsp+A0h] [rbp+7h]
  __int64 v23; // [rsp+A8h] [rbp+Fh]

  v22 = a10;
  v20 = a9;
  v18 = a8;
  v16 = a7;
  v14 = a6;
  v12 = a5;
  v23 = 4LL;
  v21 = 4LL;
  v19 = 4LL;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803E07D0, a2, 0LL, 0LL, 8u, &v11);
}
