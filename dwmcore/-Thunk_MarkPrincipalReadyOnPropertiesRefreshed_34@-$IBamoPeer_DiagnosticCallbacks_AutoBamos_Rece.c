/*
 * XREFs of ?Thunk_MarkPrincipalReadyOnPropertiesRefreshed_34@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801B8740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_MarkPrincipalReadyOnPropertiesRefreshed_34(
        __int64 a1,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  return Microsoft::BamoImpl::BaseBamoConnectionImpl::MarkPrincipalReadyOnPropertiesRefreshed(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
           a2,
           **(_DWORD **)a2);
}
