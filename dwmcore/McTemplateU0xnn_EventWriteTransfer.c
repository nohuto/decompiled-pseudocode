/*
 * XREFs of McTemplateU0xnn_EventWriteTransfer @ 0x180130026
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180096FCC (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0xnn_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _BYTE v8[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  v15 = a3;
  v10 = 8LL;
  v9 = &v15;
  v11 = a5;
  v13 = a7;
  v12 = 16LL;
  v14 = 16LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_DWMUPDATEWINDOW,
           a3,
           4LL,
           v8);
}
