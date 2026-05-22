/*
 * XREFs of ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180070720
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPROPVARIANT@@I@Z @ 0x180070060 (-SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPR.c)
 */

__int64 __fastcall IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Thunk_SetConstant_8(
        __int64 a1,
        __int64 a2)
{
  return BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
           a1,
           **(_DWORD **)a2,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           **(_DWORD **)(a2 + 24));
}
