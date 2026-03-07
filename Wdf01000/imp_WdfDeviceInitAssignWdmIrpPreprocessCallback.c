__int64 __fastcall imp_WdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  unsigned __int64 v6; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  FxIrpPreprocessInfo *PreprocessInfo; // rcx
  ULONG Tag; // ecx
  void *v13; // rax
  FX_POOL *p_FxPoolFrameworks; // r13
  FX_POOL **v15; // rax
  FxIrpPreprocessInfo *v16; // rax
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // rdi
  ULONG v19; // ecx
  void *v20; // rax
  unsigned __int8 *v21; // rcx
  __m128i v22; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = MajorFunction;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !EvtDeviceWdmIrpPreprocess )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( NumMinorFunctions && !MinorFunctions )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( MajorFunction >= 0x1Cu )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225485LL;
  }
  PreprocessInfo = DeviceInit->PreprocessInfo;
  if ( PreprocessInfo )
  {
    p_FxPoolFrameworks = &v9->FxPoolFrameworks;
  }
  else
  {
    Tag = v9->Tag;
    v13 = retaddr;
    v22.m128i_i64[0] = 0LL;
    v22.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v13 = 0LL;
    p_FxPoolFrameworks = &v9->FxPoolFrameworks;
    v15 = FxPoolAllocator(v9, &v9->FxPoolFrameworks, &v22, 0x2B8uLL, Tag, v13);
    if ( !v15 )
    {
      DeviceInit->PreprocessInfo = 0LL;
LABEL_17:
      v17 = 31;
LABEL_18:
      WPP_IFR_SF_(v9, 2u, 0x12u, v17, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
    FxIrpPreprocessInfo::FxIrpPreprocessInfo((FxIrpPreprocessInfo *)v15);
    DeviceInit->PreprocessInfo = v16;
    PreprocessInfo = v16;
    if ( !v16 )
      goto LABEL_17;
  }
  v18 = v6;
  if ( NumMinorFunctions )
  {
    if ( PreprocessInfo->Dispatch[v18].NumMinorFunctions )
    {
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x20u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225488LL;
    }
    v19 = v9->Tag;
    v20 = retaddr;
    v22.m128i_i64[0] = 0LL;
    v22.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v20 = 0LL;
    DeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                    v9,
                                                                                    p_FxPoolFrameworks,
                                                                                    &v22,
                                                                                    NumMinorFunctions,
                                                                                    v19,
                                                                                    v20);
    v21 = DeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions;
    if ( !v21 )
    {
      v17 = 33;
      goto LABEL_18;
    }
    memmove(v21, MinorFunctions, NumMinorFunctions);
    DeviceInit->PreprocessInfo->Dispatch[v18].NumMinorFunctions = NumMinorFunctions;
  }
  DeviceInit->PreprocessInfo->Dispatch[v18].EvtDevicePreprocess = EvtDeviceWdmIrpPreprocess;
  return 0LL;
}
