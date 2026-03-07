__int64 __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v16; // r14
  int _a2; // edi
  FxPkgIo *m_PkgIo; // r15
  unsigned int v19; // r8d
  unsigned __int16 v20; // r9
  FxIoQueue *v21; // rdi
  int v22; // esi
  const void *ObjectHandleUnchecked; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  FxDevice *pDevice; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+90h] [rbp+18h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  pQueue = 0LL;
  m_Globals = pDevice->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, QueueAttributes, 6);
  if ( (int)result >= 0 )
  {
    Size = Config->Size;
    if ( ((Config->Size - 80) & 0xFFFFFFE7) != 0 || Size == 104 )
    {
      WPP_IFR_SF_DDDDd(m_Globals, v11, v12, v13, traceGuid, Size);
      return 3221225476LL;
    }
    else
    {
      DefaultQueue = Config->DefaultQueue;
      v16 = Queue;
      if ( !DefaultQueue && !Queue )
      {
        _a2 = -1073741582;
        WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, 0xC00000F2);
        return (unsigned int)_a2;
      }
      m_PkgIo = pDevice->m_PkgIo;
      if ( DefaultQueue )
      {
        if ( pDevice->m_Legacy )
        {
          if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
          {
            v19 = 12;
            v20 = 12;
LABEL_14:
            _a2 = -1073741436;
LABEL_15:
            WPP_IFR_SF_qd(m_Globals, 2u, v19, v20, WPP_FxIoQueueApi_cpp_Traceguids, Device, _a2);
            return (unsigned int)_a2;
          }
        }
        else if ( pDevice->m_CurrentPnpState != WdfDevStatePnpInit )
        {
          v20 = 13;
          v19 = 12;
          goto LABEL_14;
        }
      }
      _a2 = FxPkgIo::CreateQueue(
              m_PkgIo,
              Config,
              QueueAttributes,
              *(FxDriver **)&DriverGlobals[-7].DriverName[8],
              &pQueue);
      if ( _a2 < 0 )
      {
        v20 = 14;
        v19 = 13;
        goto LABEL_15;
      }
      v21 = pQueue;
      if ( Config->DefaultQueue && (v22 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v22 < 0) )
      {
        WPP_IFR_SF_qq(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, Device);
        FxObject::ClearEvtCallbacks(v21);
        ((void (*)(void))v21->DeleteObject)();
        return (unsigned int)v22;
      }
      else
      {
        if ( m_Globals->FxVerboseOn )
        {
          ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v21);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, ObjectHandleUnchecked);
        }
        if ( v16 )
          *v16 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(v21);
        return 0LL;
      }
    }
  }
  return result;
}
