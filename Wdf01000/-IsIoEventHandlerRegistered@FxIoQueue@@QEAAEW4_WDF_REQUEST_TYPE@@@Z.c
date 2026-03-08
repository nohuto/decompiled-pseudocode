/*
 * XREFs of ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000FAEE
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00062F4 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0062400 (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C0085300 (-ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B9D10 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIoQueue::IsIoEventHandlerRegistered(FxIoQueue *this, _WDF_REQUEST_TYPE RequestType)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  bool v5; // zf

  if ( this->m_Type == WdfIoQueueDispatchManual || this->m_IoDefault.Method )
    return 1;
  if ( RequestType == WdfRequestTypeCreate )
    return 0;
  v2 = RequestType - 3;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 10;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v5 = this->m_IoInternalDeviceControl.Method == 0LL;
          return !v5;
        }
        return 0;
      }
      v5 = this->m_IoDeviceControl.Method == 0LL;
    }
    else
    {
      v5 = this->m_IoWrite.Method == 0LL;
    }
  }
  else
  {
    v5 = this->m_IoRead.Method == 0LL;
  }
  return !v5;
}
