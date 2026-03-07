void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // eax
  unsigned int v6; // esi
  _DWORD *v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+44h] [rbp-3Ch] BYREF
  int v16; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v18[8]; // [rsp+58h] [rbp-28h] BYREF

  v18[7] = -1;
  v5 = 0;
  v18[0] = 10;
  v6 = a3;
  v18[1] = 20;
  v18[2] = 30;
  v7 = v18;
  v18[3] = 40;
  v18[4] = 50;
  v18[5] = 60;
  v18[6] = 100;
  while ( (unsigned int)a3 > *v7 )
  {
    ++v5;
    ++v7;
    if ( v5 >= 8 )
      goto LABEL_9;
  }
  v8 = (int)v5 + 8LL * a2;
  v9 = *((unsigned int *)this + 2 * v8 + 14);
  v10 = 8 * v8;
  if ( (int)v9 + 1 < (unsigned int)v9
    || (unsigned int)(*(_DWORD *)((char *)this + v10 + 60) + a3) < *(_DWORD *)((char *)this + v10 + 60)
    || (unsigned int)v9 >= 0x3E8 )
  {
    KeyboardInputTelemetry::_UploadTelemetryData(this, v9, a3, a4);
  }
  ++*((_DWORD *)this + 2 * v8 + 14);
  *(_DWORD *)((char *)this + v10 + 60) += v6;
LABEL_9:
  if ( v6 > 0xC8 && (unsigned int)dword_1C02C93D8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
    {
      v15 = *((_DWORD *)this + 46);
      v16 = v15;
      v17 = (const WCHAR *)((char *)this + 24);
      v14 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&unk_1C02953DA,
        v12,
        v13,
        &v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
