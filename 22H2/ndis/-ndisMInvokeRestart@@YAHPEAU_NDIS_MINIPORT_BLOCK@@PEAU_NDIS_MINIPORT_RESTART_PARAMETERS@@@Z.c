/*
 * XREFs of ?ndisMInvokeRestart@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_RESTART_PARAMETERS@@@Z @ 0x1C010CB78
 * Callers:
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01329B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeRestart(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_RESTART_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  int v5; // eax
  unsigned int v6; // edi
  char v8[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xE2u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  v5 = DriverHandle->MiniportDriverCharacteristics.RestartHandler(a1->MiniportAdapterContext, a2);
  v6 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v5;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xE3u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      *(_DWORD *)v8);
  }
  return v6;
}
