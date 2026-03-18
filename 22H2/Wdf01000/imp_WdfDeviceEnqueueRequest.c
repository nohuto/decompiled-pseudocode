/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1C0007A30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Request)
{
  __int64 v3; // rbx
  __int64 Offset; // rdx
  FxDevice *v7; // rdi
  FxDevice *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  FxRequest *v10; // rcx
  FxDevice *pDevice; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  LOWORD(v3) = 0;
  pDevice = 0LL;
  pRequest = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(Offset) = 0;
  v7 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  v8 = v7;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v7 - Offset);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  LOWORD(v8) = 0;
  if ( (Device & 1) != 0 )
  {
    v8 = (FxDevice *)LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - (__int64)v8);
  }
  if ( v7->m_Type == 4098 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, (void *)Device, 0x1002u, (unsigned __int16)v8);
    v7 = pDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v10 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(v10->__vftable);
    v10 = (FxRequest *)((char *)v10 - v3);
  }
  if ( v10->m_Type == 4104 )
  {
    pRequest = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pRequest, (void *)Request, 0x1008u, v3);
    v10 = pRequest;
    v7 = pDevice;
  }
  return FxPkgIo::EnqueueRequest(v7->m_PkgIo, v7, v10);
}
