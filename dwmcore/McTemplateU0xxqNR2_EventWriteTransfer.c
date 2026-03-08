/*
 * XREFs of McTemplateU0xxqNR2_EventWriteTransfer @ 0x1801DC9B8
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0xxqNR2_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-11h]
  __int64 v10; // [rsp+50h] [rbp-9h]
  __int64 *v11; // [rsp+58h] [rbp-1h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  int *v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+84h] [rbp+2Bh]
  __int64 v18; // [rsp+B8h] [rbp+5Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF

  v19 = a4;
  v18 = a3;
  v10 = 8LL;
  v17 = 0;
  v9 = &v18;
  v12 = 8LL;
  v11 = &v19;
  v14 = 4LL;
  v13 = &a5;
  v15 = a7;
  v16 = 16 * a5;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDI,
           a3,
           5u,
           &v8);
}
