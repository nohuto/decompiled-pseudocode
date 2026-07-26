/*
 * XREFs of ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0120D74
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C0076CD4 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeUninstall(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x65u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  a1->UninstallHandler();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x66u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
}
