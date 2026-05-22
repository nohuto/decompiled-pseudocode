/*
 * XREFs of ?Thunk_OnHomeGestureDetected_57@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800475E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z @ 0x18010CF24 (-OnHomeGestureDetected@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJII_KI@Z.c)
 */

int __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnHomeGestureDetected_57(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureDetected(
           a1,
           **(_DWORD **)a2,
           **(_DWORD **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
