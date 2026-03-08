/*
 * XREFs of McTemplateU0pqqNR2_EventWriteTransfer @ 0x180209BD4
 * Callers:
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x180031764 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pqqNR2_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-11h]
  __int64 v10; // [rsp+50h] [rbp-9h]
  int *v11; // [rsp+58h] [rbp-1h]
  __int64 v12; // [rsp+60h] [rbp+7h]
  int *v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+84h] [rbp+2Bh]
  __int64 v18; // [rsp+B8h] [rbp+5Fh] BYREF
  int v19; // [rsp+C0h] [rbp+67h] BYREF

  v19 = a4;
  v18 = a3;
  v10 = 8LL;
  v12 = 4LL;
  v9 = &v18;
  v14 = 4LL;
  v11 = &v19;
  v17 = 0;
  v13 = &a5;
  v15 = a7;
  v16 = a6 * a5;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, 0LL, 5u, &v8);
}
