/*
 * XREFs of McTemplateU0xxxqNR3_EventWriteTransfer @ 0x1801DCAE8
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0xxxqNR3_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  __int64 *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  int *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int64 v21; // [rsp+C0h] [rbp+57h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+5Fh] BYREF

  v22 = a4;
  v21 = a3;
  v11 = 8LL;
  v20 = 0;
  v10 = &v21;
  v13 = 8LL;
  v12 = &v22;
  v15 = 8LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = a8;
  v19 = 16 * a6;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_BLT,
           a3,
           6u,
           &v9);
}
