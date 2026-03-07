__int64 __fastcall SimpleHapticsController::SetDevicePropertyData(
        SimpleHapticsController *this,
        const struct _DEVPROPKEY *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        PVOID Data)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v12; // [rsp+58h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  LODWORD(v13) = a4;
  v12 = (__int64)a2;
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v13) = 0;
    v12 = (__int64)"SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB66,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v13);
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    v10 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v8 + 8),
            &DEVPKEY_InteractiveControl_DeviceType,
            0,
            0,
            7u,
            4u,
            Data);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1C0357118 > 2 )
      {
        LODWORD(v13) = v10;
        v12 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357118,
          byte_1C031FABE,
          a3,
          a4,
          (void **)&v12,
          (__int64)&v13);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::SetDevicePropertyData",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        475,
        v9,
        "Function failed.");
    }
  }
  else
  {
    v9 = -1073741436;
  }
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v13) = v9;
    v12 = (__int64)"SimpleHapticsController::SendDeviceIOControl exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB66,
      a3,
      a4,
      (void **)&v12,
      (__int64)&v13);
  }
  return v9;
}
