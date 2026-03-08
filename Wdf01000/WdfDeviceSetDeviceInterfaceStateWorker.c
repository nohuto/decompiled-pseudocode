/*
 * XREFs of WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C0049AE0
 * Callers:
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C004A0C0 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfDeviceSetDeviceInterfaceStateEx @ 0x1C004A0F0 (imp_WdfDeviceSetDeviceInterfaceStateEx.c)
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     FxIsEqualGuid @ 0x1C00229A0 (FxIsEqualGuid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall WdfDeviceSetDeviceInterfaceStateWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        BOOLEAN State,
        _WDF_TRI_STATE AutoEnableOnFirstStart)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  _SINGLE_LIST_ENTRY *i; // rdi
  BOOLEAN v13; // dl
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0
    || RefString && (int)FxValidateUnicodeString(m_Globals, RefString) < 0 )
  {
    goto LABEL_8;
  }
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_8:
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v10, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_14:
          v13 = State;
          LOBYTE(i[1].Next) = State;
          if ( i[-1].Next )
            IoSetDeviceInterfaceState((PUNICODE_STRING)&i[-2], v13);
          if ( AutoEnableOnFirstStart == WdfFalse )
            BYTE1(i[1].Next) = 0;
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_14;
      }
    }
  }
  m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
