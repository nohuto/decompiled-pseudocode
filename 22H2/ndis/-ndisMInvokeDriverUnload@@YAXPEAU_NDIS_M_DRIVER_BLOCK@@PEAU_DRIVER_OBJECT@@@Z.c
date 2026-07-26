/*
 * XREFs of ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C01181CC
 * Callers:
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00606B0 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMInvokeDriverUnload(struct _NDIS_M_DRIVER_BLOCK *a1, struct _DRIVER_OBJECT *a2)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDEu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  a1->MiniportDriverCharacteristics.UnloadHandler(a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDFu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
}
