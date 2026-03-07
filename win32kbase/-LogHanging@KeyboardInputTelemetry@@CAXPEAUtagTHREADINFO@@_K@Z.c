void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // r8
  size_t *v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r11d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+44h] [rbp-44h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int16 v14[16]; // [rsp+50h] [rbp-38h] BYREF

  if ( (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(a2) > 0x2710 )
  {
    v3 = *((_QWORD *)a1 + 53);
    v4 = v3 ? (size_t *)(v3 + 976) : (size_t *)L"Unknown";
    RtlStringCchCopyW(v14, 0x10uLL, v4);
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v8 = *((_QWORD *)a1 + 53);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 56);
      else
        v9 = v7;
      v11 = v9;
      v10 = v8;
      if ( v8 )
        v7 = *(_DWORD *)(v8 + 56);
      else
        v10 = 0LL;
      v12 = v7;
      v13 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1C029500B,
        v5,
        v6,
        &v13,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
