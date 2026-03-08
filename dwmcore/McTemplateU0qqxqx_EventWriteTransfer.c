/*
 * XREFs of McTemplateU0qqxqx_EventWriteTransfer @ 0x180129EC6
 * Callers:
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x18009C3AC (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qqxqx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  _BYTE v8[16]; // [rsp+30h] [rbp-31h] BYREF
  int *v9; // [rsp+40h] [rbp-21h]
  __int64 v10; // [rsp+48h] [rbp-19h]
  int *v11; // [rsp+50h] [rbp-11h]
  __int64 v12; // [rsp+58h] [rbp-9h]
  char *v13; // [rsp+60h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+7h]
  char *v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+78h] [rbp+17h]
  char *v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+C0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 4LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v14 = 8LL;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v17 = &a7;
  v18 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_DCOMPEVENT_RESOURCE,
           a3,
           6LL,
           v8);
}
