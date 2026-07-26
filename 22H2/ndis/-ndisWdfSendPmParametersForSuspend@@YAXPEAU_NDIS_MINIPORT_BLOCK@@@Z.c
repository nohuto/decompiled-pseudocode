/*
 * XREFs of ?ndisWdfSendPmParametersForSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8E90
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A63D4 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00A64D4 (ndisMSendPmParametersOidForSuspend.c)
 */

void __fastcall ndisWdfSendPmParametersForSuspend(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // eax
  struct _NDIS_PM_PARAMETERS v3; // [rsp+40h] [rbp-48h] BYREF
  struct _NDIS_PM_PARAMETERS v4; // [rsp+58h] [rbp-30h] BYREF

  v4 = *ndisMInitializePmParametersForSuspend(&v3, a1);
  v2 = ndisMSendPmParametersOidForSuspend(a1, &v4);
  if ( v2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xFu,
        0x15u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        v2,
        a1);
  }
}
