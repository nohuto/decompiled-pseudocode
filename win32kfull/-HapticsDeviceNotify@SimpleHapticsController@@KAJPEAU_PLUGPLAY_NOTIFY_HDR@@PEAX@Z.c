__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context)
{
  int v4; // edi
  __int64 v5; // rcx
  InteractiveControlManager *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[208]; // [rsp+68h] [rbp-A0h] BYREF

  v4 = 0;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v17);
  EnterCrit(1LL, 0LL);
  v6 = InteractiveControlManager::Instance(v5);
  if ( v6 && Context && InteractiveControlManager::IsValidSimpleHapticsController(v6, Context) )
  {
    if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1
      && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 )
    {
      if ( (unsigned int)dword_1C0357118 > 4 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
      {
        v16[0] = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0357118,
          byte_1C031FAF5,
          0LL,
          0LL,
          (void **)v16);
      }
      v4 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
          {
            LODWORD(v16[0]) = v4;
            v15 = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C0357118,
              byte_1C031FABE,
              v7,
              v8,
              (void **)&v15,
              (__int64)v16);
          }
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          819,
          v4,
          "Function failed.");
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1
           && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 )
    {
      if ( (unsigned int)dword_1C0357118 > 4 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
      {
        v15 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0357118,
          byte_1C031FAF5,
          0LL,
          0LL,
          (void **)&v15);
      }
      v4 = SimpleHapticsController::OpenHapticsDevice(Context);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
        {
          LODWORD(v16[0]) = v4;
          v15 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v9,
            v10,
            (void **)&v15,
            (__int64)v16);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          824,
          v4,
          "Function failed.");
      }
    }
    else if ( *(_QWORD *)(NotificationStructure + 4) == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1
           && *(_QWORD *)(NotificationStructure + 12) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 )
    {
      if ( (unsigned int)dword_1C0357118 > 4 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
      {
        v15 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C0357118,
          byte_1C031FAF5,
          0LL,
          0LL,
          (void **)&v15);
      }
      v4 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
      if ( v4 < 0 )
      {
        if ( (unsigned int)dword_1C0357118 > 2 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
        {
          LODWORD(v16[0]) = v4;
          v15 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C0357118,
            byte_1C031FABE,
            v11,
            v12,
            (void **)&v15,
            (__int64)v16);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          830,
          v4,
          "Function failed.");
      }
    }
    LeaveEditionCrit((__int64)&v14);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v17);
    return (unsigned int)v4;
  }
  else
  {
    if ( (unsigned int)dword_1C0357118 > 4 && tlgKeywordOn((__int64)&dword_1C0357118, 0LL) )
    {
      v15 = (__int64)"SimpleHapticsController::HapticsDeviceNotify device no longer valid";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C0357118,
        byte_1C031FAF5,
        0LL,
        0LL,
        (void **)&v15);
    }
    LeaveEditionCrit((__int64)&v14);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v17);
    return 0LL;
  }
}
