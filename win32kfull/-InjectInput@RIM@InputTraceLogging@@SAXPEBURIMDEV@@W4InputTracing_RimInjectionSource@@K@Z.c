char __fastcall InputTraceLogging::RIM::InjectInput(__int64 a1, int a2, int a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  BOOL v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  unsigned __int8 *v17; // rdx
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+18h] BYREF
  __int64 v23; // [rsp+80h] [rbp+20h] BYREF
  __int64 v24; // [rsp+88h] [rbp+28h] BYREF

  LODWORD(v23) = a3;
  LODWORD(v22) = a2;
  LOBYTE(v3) = *(_BYTE *)(a1 + 48);
  if ( (_BYTE)v3 != 2 )
  {
    if ( (_BYTE)v3 )
    {
      if ( (_BYTE)v3 != 1 )
        return v3;
      if ( (unsigned int)dword_1C035C080 <= 4 )
        return v3;
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C035C080, 256LL);
      if ( !(_BYTE)v3 )
        return v3;
      v17 = (unsigned __int8 *)&unk_1C031BC21;
    }
    else
    {
      if ( (unsigned int)dword_1C035C080 <= 4 )
        return v3;
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C035C080, 256LL);
      if ( !(_BYTE)v3 )
        return v3;
      v16 = 1;
      v17 = (unsigned __int8 *)&unk_1C031BBE4;
    }
    v24 = (__int64)"InjectTouchInput";
    LODWORD(v23) = v16;
    v21 = v15;
    LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_1C035C080,
                   v17,
                   v14,
                   v15,
                   (void **)&v24,
                   (__int64)&v21,
                   (__int64)&v23);
    return v3;
  }
  v3 = *(_DWORD *)(a1 + 200);
  if ( (v3 & 0x80u) == 0 )
  {
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C035C080, 256LL);
      if ( (_BYTE)v3 )
      {
        v13 = *(_QWORD *)(v12 + 464);
        LODWORD(v23) = *(unsigned __int16 *)(v13 + 18);
        LODWORD(v22) = *(unsigned __int16 *)(v13 + 16);
        v21 = (__int64)"InjectTouchInput";
        v24 = v12;
        LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (__int64)&dword_1C035C080,
                       byte_1C031BB9E,
                       v11,
                       v12,
                       (__int64)&v24,
                       (void **)&v21,
                       (__int64)&v22,
                       (__int64)&v23);
      }
    }
  }
  else if ( (unsigned int)dword_1C035C080 > 4 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_1C035C080, 256LL);
    if ( (_BYTE)v3 )
    {
      v5 = *(_QWORD *)(v4 + 472);
      v6 = *(_DWORD *)(v5 + 360);
      v7 = (v6 & 8) != 0 && (v6 & 0x2000) == 0;
      v8 = *(_QWORD *)(v4 + 464);
      LODWORD(v23) = v7;
      LODWORD(v22) = *(unsigned __int16 *)(v8 + 18);
      LODWORD(v21) = *(unsigned __int16 *)(v8 + 16);
      v24 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(v5 + 24));
      v20 = v9;
      v19 = (__int64)"InjectTouchInput";
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (__int64)&dword_1C035C080,
                     (unsigned __int8 *)dword_1C031BB30,
                     v10,
                     v9,
                     (__int64)&v20,
                     (void **)&v19,
                     (void **)&v24,
                     (__int64)&v21,
                     (__int64)&v22,
                     (__int64)&v23);
    }
  }
  return v3;
}
