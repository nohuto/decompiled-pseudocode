/*
 * XREFs of ?Thunk_OnHomeGestureReadyChanged_63@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180047620
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18010D050 (-OnHomeGestureReadyChanged@BamoMPCManagerClientPrincipalImpl@BamoImpl@@QEAAJ_NII_KII@Z.c)
 */

int __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnHomeGestureReadyChanged_63(
        BamoImpl::BamoMPCManagerClientPrincipalImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCManagerClientPrincipalImpl::OnHomeGestureReadyChanged(
           a1,
           **(_BYTE **)a2,
           **(_DWORD **)(a2 + 8),
           **(_DWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24),
           **(_DWORD **)(a2 + 32),
           **(_DWORD **)(a2 + 40));
}
