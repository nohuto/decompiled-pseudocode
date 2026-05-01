/*
 * XREFs of ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x1804755FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___&__::_1_::dtor$1 @ 0x180475569 (_Microsoft--WRL--Details--MakeAndInitialize_ChromeManager_ChromeManager_IUnknown____ea_180475569.c)
 *     _ChromeManager_CreateInstance_::_1_::dtor$0 @ 0x180475888 (_ChromeManager_CreateInstance_--_1_--dtor$0.c)
 *     ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDivider@@AEAPEAUHWND__@@@Z @ 0x1804861C0 (--$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDiv.c)
 *     _CWRLImpWndProc_JointDivider_::s_WndProcBase_::_1_::dtor$0 @ 0x180486FCE (_CWRLImpWndProc_JointDivider_--s_WndProcBase_--_1_--dtor$0.c)
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1804871AC (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DragData_DragData_IUnknown___&_IAppLayout___&_IApplicationView___&_enum_WindowArrangementViewDragData::DragDataFlags_&__::_1_::dtor$2 @ 0x180487276 (_Microsoft--WRL--Details--MakeAndInitialize_DragData_DragData_IUnknown___-_IAppLayo_ea_180487276.c)
 *     _DragData_CreateInstance_::_1_::dtor$0 @ 0x180487623 (_DragData_CreateInstance_--_1_--dtor$0.c)
 *     ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x180489F68 (--$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVApp.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout___&__::_1_::dtor$2 @ 0x18048A034 (_Microsoft--WRL--Details--MakeAndInitialize_AppResizeData_AppResizeData_IAppLayout__ea_18048A034.c)
 *     _AppResizeData_CreateInstance_::_1_::dtor$0 @ 0x18048A2E4 (_AppResizeData_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(a1);
}
