__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 _a1; // r14
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v11; // edi
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL *p_FxPoolFrameworks; // r13
  FxIrpPreprocessInfo *v16; // rax
  unsigned __int16 v17; // r9
  __int64 v18; // rdi
  ULONG v19; // ecx
  void *v20; // rax
  unsigned __int8 *v21; // rcx
  __m128i v23; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  _a1 = MajorFunction;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v6, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  v11 = FxValiateCx(ClientDriverGlobals, v6);
  if ( (v11 & 0x80000000) == 0 )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( (unsigned __int8)_a1 >= 0x1Cu )
    {
      v11 = -1073741811;
      WPP_IFR_SF_dd(ClientDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1, -1073741811);
      return v11;
    }
    if ( CxDeviceInit->PreprocessInfo )
    {
      p_FxPoolFrameworks = &ClientDriverGlobals->FxPoolFrameworks;
    }
    else
    {
      v12 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      Tag = ClientDriverGlobals->Tag;
      v23.m128i_i64[0] = 0LL;
      v23.m128i_i64[1] = 64LL;
      if ( v12 )
        v14 = 0LL;
      else
        v14 = retaddr;
      p_FxPoolFrameworks = &ClientDriverGlobals->FxPoolFrameworks;
      v16 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                     ClientDriverGlobals,
                                     &ClientDriverGlobals->FxPoolFrameworks,
                                     &v23,
                                     0x2B8uLL,
                                     Tag,
                                     v14);
      if ( v16 )
        FxIrpPreprocessInfo::FxIrpPreprocessInfo(v16);
      CxDeviceInit->PreprocessInfo = v16;
      if ( !v16 )
      {
        v11 = -1073741670;
        v17 = 12;
LABEL_19:
        WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, v17, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC000009A);
        return v11;
      }
      v16->ClassExtension = 1;
    }
    if ( NumMinorFunctions )
    {
      v18 = _a1;
      if ( CxDeviceInit->PreprocessInfo->Dispatch[_a1].NumMinorFunctions )
      {
        v11 = -1073741808;
        WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return v11;
      }
      v12 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      v19 = ClientDriverGlobals->Tag;
      v23.m128i_i64[0] = 0LL;
      v23.m128i_i64[1] = 64LL;
      if ( v12 )
        v20 = 0LL;
      else
        v20 = retaddr;
      CxDeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                        ClientDriverGlobals,
                                                                                        p_FxPoolFrameworks,
                                                                                        &v23,
                                                                                        NumMinorFunctions,
                                                                                        v19,
                                                                                        v20);
      v21 = CxDeviceInit->PreprocessInfo->Dispatch[v18].MinorFunctions;
      if ( !v21 )
      {
        v11 = -1073741670;
        v17 = 14;
        goto LABEL_19;
      }
      memmove(v21, MinorFunctions, NumMinorFunctions);
      CxDeviceInit->PreprocessInfo->Dispatch[v18].NumMinorFunctions = NumMinorFunctions;
    }
    else
    {
      v18 = _a1;
    }
    CxDeviceInit->PreprocessInfo->Dispatch[v18].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
    return 0;
  }
  return v11;
}
