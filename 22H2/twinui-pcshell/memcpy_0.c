/*
 * XREFs of memcpy_0 @ 0x180091307
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     memcpy_s @ 0x180020C5C (memcpy_s.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18002FC90 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180039F70 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18003A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x180043C18 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180044E50 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800575A4 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18005FD20 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x1800618F8 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x180061AAC (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x180061BA0 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA-AV-.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE00 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     memcpy_s_1 @ 0x1800AF714 (memcpy_s_1.c)
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x180108894 (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A3D4 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x18011631C (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x180119270 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 *     ??$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@Z @ 0x180119310 (--$_Reallocate_grow_by@V_lambda_319d5e083f45f90dcdce5dce53cbb275_@@D@-$basic_string@DU-$char_tra.c)
 *     ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x1801193E8 (--$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@-$basic_string@GU-$char_tra.c)
 *     ??$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@@Z @ 0x1801194D0 (--$_Reallocate_grow_by@V_lambda_9013ee9e23efe4882b67eff5b0ecf103_@@$$V@-$basic_string@DU-$char_t.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x180119584 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18011A27C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180125EB0 (-_Become_small@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180128500 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?xsgetn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z @ 0x180129560 (-xsgetn@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA_JPEAD_J@Z.c)
 *     ?xsputn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEBD_J@Z @ 0x1801296B0 (-xsputn@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAA_JPEBD_J@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     CreateNewEventEntry @ 0x1801ADBAC (CreateNewEventEntry.c)
 *     ??$_MergeThem@VCCompareRecoveredWindows@@@?$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@V?$CSimpleArrayStandardMergeHelper@UENUMERATED_WINDOW@@@@@@QEAAXAEBVCCompareRecoveredWindows@@_K1@Z @ 0x1801CB1C4 (--$_MergeThem@VCCompareRecoveredWindows@@@-$CTSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CTPo.c)
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1802453F4 (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x180245508 (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z @ 0x180246134 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z.c)
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180249AB0 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x180267A1C (--$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@-$basic_string@GU-$c.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180267B18 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x180269F98 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1802C5FB0 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x1803ACA60 (-IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z.c)
 *     ??$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@Z @ 0x1803EC190 (--$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@-$basic_string@_WU-$char_tr.c)
 *     ??$_MergeThem@VCDropFeedbackItemComparator@@@?$CTSimpleArray@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIDropFeedbackItem@@@WRL@Microsoft@@@@@@QEAAXAEBVCDropFeedbackItemComparator@@_K1@Z @ 0x180490AFC (--$_MergeThem@VCDropFeedbackItemComparator@@@-$CTSimpleArray@V-$ComPtr@UIDropFeedbackItem@@@WRL@.c)
 *     ??$_MergeThem@VCBucketComparator@@@?$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUBUCKET@@@@V?$CSimpleArrayStandardCompareHelper@PEAUBUCKET@@@@V?$CSimpleArrayStandardMergeHelper@PEAUBUCKET@@@@@@QEAAXAEBVCBucketComparator@@_K1@Z @ 0x1804F6B2C (--$_MergeThem@VCBucketComparator@@@-$CTSimpleArray@PEAUBUCKET@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@P.c)
 *     DPA_Clone @ 0x1804F74F0 (DPA_Clone.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
