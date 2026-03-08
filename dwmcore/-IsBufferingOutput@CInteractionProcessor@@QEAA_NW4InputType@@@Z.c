/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x1801ABAD0
 * Callers:
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x1801A1540 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x180209070 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801AB8A0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(CInteractionProcessor *a1, int a2)
{
  int v2; // ebx
  char v4; // bl
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = *((_DWORD *)a1 + 197);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v6);
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
  else
    v4 = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v6);
  return v4;
}
