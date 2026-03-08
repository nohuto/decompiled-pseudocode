/*
 * XREFs of imp_WdfFdoAddStaticChild @ 0x1C0021F40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C0003260 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0023720 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 */

__int64 __fastcall imp_WdfFdoAddStaticChild(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo, WDFDEVICE__ *Child)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  FxDevice *v6; // r8
  unsigned int *v7; // r9
  FxPkgPnp *m_PkgPnp; // rcx
  int v9; // ebx
  FxStaticChildDescription description; // [rsp+40h] [rbp-10h] BYREF
  FxDevice *pFdo; // [rsp+70h] [rbp+20h] BYREF
  FxDevice *pPdo; // [rsp+88h] [rbp+38h] BYREF

  *((_DWORD *)&description.Header + 1) = 0;
  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFdo = 0LL;
  pPdo = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1002u, (void **)&pFdo);
  if ( pFdo->m_Legacy || pFdo->m_PkgPnp->m_Type != 4353 )
  {
    v9 = -1073741811;
    WPP_IFR_SF_qd(pFdo->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo, -1073741811);
  }
  else
  {
    FxObjectHandleGetPtr(v3, (unsigned __int64)Child, 0x1002u, (void **)&pPdo);
    if ( pPdo->m_Legacy || !FxDevice::IsPdo(pPdo) )
    {
      v9 = -1073741811;
      WPP_IFR_SF_qd(pFdo->m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Child, -1073741811);
    }
    else
    {
      m_PkgPnp = pFdo->m_PkgPnp;
      description.Pdo = v6;
      description.Header.IdentificationDescriptionSize = 16;
      v9 = FxChildList::Add(*(FxChildList **)&m_PkgPnp[1].m_Type, &description.Header, 0LL, v7);
      if ( v9 >= 0 )
        pFdo->SetDeviceTelemetryInfoFlags(pFdo, DeviceInfoHasStaticChildren);
    }
  }
  return (unsigned int)v9;
}
