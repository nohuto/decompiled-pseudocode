__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rcx
  unsigned int v6; // edi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v5 = (void *)*((_QWORD *)this + 10);
  v6 = v2;
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 10) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    Win32FreePool(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 1);
  if ( v9 )
  {
    Win32FreePool(v9);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v11) = v6;
    v12 = (__int64)"SimpleHapticsController::DeInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB66,
      v3,
      v4,
      (void **)&v12,
      (__int64)&v11);
  }
  return v6;
}
