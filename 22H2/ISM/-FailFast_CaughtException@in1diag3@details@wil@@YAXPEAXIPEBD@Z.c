/*
 * XREFs of ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180072710
 * Callers:
 *     _Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch$31 @ 0x180040233 (_Microsoft--BamoImpl--BufferingMessageCallHost--SubmitBuffer_--_1_--catch$31.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::catch$15 @ 0x18004E144 (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--Bam_ea_18004E144.c)
 *     _Microsoft::Bamo::ListPrincipalSimpleCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub_wil::com_ptr_t_BamoActivatableEntityPrincipal_wil::err_returncode_policy__BamoActivatableEntityPrincipal___::InsertWorker_::_1_::catch$46 @ 0x180050884 (_Microsoft--Bamo--ListPrincipalSimpleCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamo_ea_180050884.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::catch$20 @ 0x180052043 (_GameInputProcessor--GameInputProcessor_--_1_--catch$20.c)
 *     _Microsoft::Bamo::ListPrincipalSimpleCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__BamoPenDevicePrincipal___::InsertWorker_::_1_::catch$15 @ 0x18012FB36 (_Microsoft--Bamo--ListPrincipalSimpleCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamo_ea_18012FB36.c)
 *     _Microsoft::Bamo::ListPrincipalCommon_Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal_ISMBamos_AutoBamos::BamoConnection_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy___::RemoveAt_::_1_::catch$15 @ 0x18013038E (_Microsoft--Bamo--ListPrincipalCommon_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--Bam_ea_18013038E.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking_::_1_::catch$15 @ 0x180166283 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StopTracking_--_1_--catch$15.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::catch$8 @ 0x18017C0F8 (_GameInputProcessor--_GameInputProcessor_--_1_--catch$8.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800739B8 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

void __fastcall wil::details::in1diag3::FailFast_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::ReportFailure_CaughtException(this, a2, a3, a4);
}
