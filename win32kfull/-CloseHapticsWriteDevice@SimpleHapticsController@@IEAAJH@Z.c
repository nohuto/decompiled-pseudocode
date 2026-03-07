__int64 __fastcall SimpleHapticsController::CloseHapticsWriteDevice(SimpleHapticsController *this, int a2)
{
  unsigned int v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // edi
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      IoUnregisterPlugPlayNotification(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    IoStatusBlock = 0LL;
    v6 = ZwCancelIoFile(v5, &IoStatusBlock);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1C0357118 > 2 )
      {
        LODWORD(v17) = v6;
        v16 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357118,
          byte_1C031FABE,
          v7,
          v8,
          (void **)&v16,
          (__int64)&v17);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        756,
        v9,
        "Function failed.");
    }
    v10 = ZwClose(*((HANDLE *)this + 3));
    v2 = v10;
    if ( v10 < 0 )
    {
      if ( (unsigned int)dword_1C0357118 > 2 )
      {
        LODWORD(v17) = v10;
        v16 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357118,
          byte_1C031FABE,
          v11,
          v12,
          (void **)&v16,
          (__int64)&v17);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        757,
        v2,
        "Function failed.");
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 7);
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    *((_QWORD *)this + 7) = 0LL;
  }
  return v2;
}
