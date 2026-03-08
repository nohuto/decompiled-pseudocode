/*
 * XREFs of imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C0036570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     FxValiateCx @ 0x1C00360F4 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  _WDF_TRI_STATE AutoForwardCleanupClose; // ecx
  _WDF_FILEOBJECT_CLASS FileObjectClass; // edx
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v4) >= 0 )
  {
    if ( !CxFileObjectConfig )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxFileObjectConfig->Size != 40 )
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xFu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->Size,
        40);
LABEL_21:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( (int)FxValidateObjectAttributes(ClientDriverGlobals, FileObjectAttributes, 7) < 0 )
      goto LABEL_21;
    AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    if ( AutoForwardCleanupClose && (unsigned int)(AutoForwardCleanupClose - 1) >= 2 )
    {
      WPP_IFR_SF_D(
        ClientDriverGlobals,
        2u,
        0x12u,
        0x10u,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->AutoForwardCleanupClose);
      goto LABEL_21;
    }
    CxDeviceInit->FileObject.Set = 1;
    CxDeviceInit->FileObject.AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    FileObjectClass = CxFileObjectConfig->FileObjectClass;
    if ( (FileObjectClass & 0x7FFFFFFFu) - 1 > 3 )
    {
      v11 = 17;
      goto LABEL_20;
    }
    if ( FileObjectClass < WdfFileObjectInvalid
      && (FileObjectClass & 0x7FFFFFFF) != 2
      && (FileObjectClass & 0x7FFFFFFFu) - 3 >= 2 )
    {
      v11 = 18;
LABEL_20:
      WPP_IFR_SF_D(
        ClientDriverGlobals,
        2u,
        0x12u,
        v11,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->FileObjectClass);
      goto LABEL_21;
    }
    CxDeviceInit->FileObject.Class = FileObjectClass;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&CxFileObjectConfig->Size;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&CxFileObjectConfig->EvtFileClose;
    *(_QWORD *)&CxDeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&CxFileObjectConfig->AutoForwardCleanupClose;
    if ( FileObjectAttributes )
    {
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
      CxDeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
    }
  }
}
