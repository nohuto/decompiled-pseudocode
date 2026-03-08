/*
 * XREFs of DpiMiracastDdiMiracastDestroyContext @ 0x1C039A39C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C0062550 (McTemplateK0pp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall DpiMiracastDdiMiracastDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  NTSTATUS result; // eax
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (_QWORD *)(a1 + 48);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0pp_EtwWriteTransfer(a1, &EventEnterDxgkDdiMiracastDestroyContext, a3, *v3, a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 3224))(*v3, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    return McTemplateK0pp_EtwWriteTransfer(v7, &EventLeaveDxgkDdiMiracastDestroyContext, v8, *v3, a2);
  return result;
}
