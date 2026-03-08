/*
 * XREFs of imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0049EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000153C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     FxIsEqualGuid @ 0x1C00229A0 (FxIsEqualGuid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C004F4B8 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned int v10; // ebp
  FxPkgPnp *m_PkgPnp; // rbx
  _FX_DRIVER_GLOBALS *v12; // rdx
  _SINGLE_LIST_ENTRY *i; // rsi
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF
  FxString *pString; // [rsp+80h] [rbp+18h] BYREF

  pDevice = 0LL;
  pString = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !RefString || (result = FxValidateUnicodeString(m_Globals, RefString), (int)result >= 0) )
    {
      if ( pDevice->m_Legacy )
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xEu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device, -1073741808);
        return 3221225488LL;
      }
      else
      {
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
        v10 = -1073741772;
        m_PkgPnp = pDevice->m_PkgPnp;
        FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v12, 0LL);
        for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
        {
          if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
          {
            if ( RefString )
            {
              if ( RefString->Length == LOWORD(i[-4].Next)
                && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
              {
LABEL_13:
                if ( i[-1].Next )
                  v10 = FxDuplicateUnicodeString(
                          pString->m_Globals,
                          (const _UNICODE_STRING *)&i[-2],
                          &pString->m_UnicodeString);
                else
                  v10 = -1073741436;
                break;
              }
            }
            else if ( !LOWORD(i[-4].Next) )
            {
              goto LABEL_13;
            }
          }
        }
        m_PkgPnp->m_DeviceInterfaceLock.m_OwningThread = 0LL;
        KeSetEvent(&m_PkgPnp->m_DeviceInterfaceLock.m_Event.m_Event, 0, 0);
        KeLeaveCriticalRegion();
        return v10;
      }
    }
  }
  return result;
}
