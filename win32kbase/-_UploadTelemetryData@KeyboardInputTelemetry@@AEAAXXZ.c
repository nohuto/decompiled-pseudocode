void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(
        KeyboardInputTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int KeyboardInputLatency; // eax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx

  v5 = SGDGetUserSessionState(this, a2, a3, a4);
  v6 = v5 + 14168;
  if ( *(_DWORD *)(v5 + 14176) )
  {
    KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(*(_QWORD *)v6);
    v8 = *(_DWORD *)(v6 + 12);
    v9 = v8 + *(_DWORD *)(v6 + 8);
    if ( v9 >= v8 )
    {
      v10 = *(_DWORD *)(v6 + 20);
      v11 = v10 + KeyboardInputLatency;
      if ( v11 >= v10 )
      {
        ++*(_DWORD *)(v6 + 16);
        *(_DWORD *)(v6 + 20) = v11;
        *(_DWORD *)(v6 + 12) = v9;
      }
    }
    *(_DWORD *)(v6 + 8) = 0;
  }
  if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      &unk_1C029506F);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  memset((char *)this + 56, 0, 0x80uLL);
}
