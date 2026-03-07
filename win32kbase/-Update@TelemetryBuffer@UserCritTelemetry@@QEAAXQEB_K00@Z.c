void __fastcall UserCritTelemetry::TelemetryBuffer::Update(
        UserCritTelemetry::TelemetryBuffer *this,
        const unsigned __int64 *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // [rsp+C8h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+E8h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+F8h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+100h] [rbp-48h] BYREF
  __int64 v31; // [rsp+108h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-38h] BYREF
  unsigned __int64 v33; // [rsp+118h] [rbp-30h] BYREF
  __int64 v34; // [rsp+120h] [rbp-28h] BYREF
  unsigned __int64 v35; // [rsp+128h] [rbp-20h] BYREF
  __int64 v36; // [rsp+130h] [rbp-18h] BYREF
  int v37; // [rsp+138h] [rbp-10h]
  const unsigned __int16 *v38; // [rsp+140h] [rbp-8h] BYREF
  int v39; // [rsp+148h] [rbp+0h]
  __int64 v40; // [rsp+150h] [rbp+8h] BYREF
  int v41; // [rsp+158h] [rbp+10h]
  const unsigned __int16 *v42; // [rsp+160h] [rbp+18h] BYREF
  int v43; // [rsp+168h] [rbp+20h]
  UserCritTelemetry::TelemetryBuffer *v44; // [rsp+170h] [rbp+28h] BYREF
  int v45; // [rsp+178h] [rbp+30h]
  const unsigned __int16 *v46; // [rsp+180h] [rbp+38h] BYREF
  int v47; // [rsp+188h] [rbp+40h]
  int v48; // [rsp+1C8h] [rbp+80h] BYREF

  if ( *((_WORD *)this + 2196) == 60 )
  {
    if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x402000000000LL) )
    {
      v8 = *((_QWORD *)this + 546);
      v36 = (__int64)this + 2880;
      v32 = *((_QWORD *)this + 548);
      v37 = 1440;
      v38 = L"<";
      v39 = 2;
      if ( v8 )
        v9 = *((_QWORD *)this + 547) / v8;
      else
        v9 = 0LL;
      v33 = v9;
      v34 = *((_QWORD *)this + 547);
      v35 = v8;
      v10 = *((_QWORD *)this + 543);
      v40 = (__int64)this + 1440;
      v23 = *((_QWORD *)this + 545);
      v41 = 1440;
      v42 = L"<";
      v43 = 2;
      if ( v10 )
        v11 = *((_QWORD *)this + 544) / v10;
      else
        v11 = 0LL;
      v24 = v11;
      v12 = *((_QWORD *)this + 544);
      v26 = v10;
      v13 = *((_QWORD *)this + 540);
      v25 = v12;
      v27 = *((_QWORD *)this + 542);
      v44 = this;
      v45 = 1440;
      v46 = L"<";
      v47 = 2;
      if ( v13 )
        v14 = *((_QWORD *)this + 541) / v13;
      else
        v14 = 0LL;
      v28 = v14;
      v29 = *((_QWORD *)this + 541);
      v30 = v13;
      v48 = 1;
      v31 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v13,
        (int)&unk_1C029480D,
        1440LL,
        (__int64)L"<",
        (__int64)&v31,
        (__int64)&v48,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64 *)&v46,
        (__int64 *)&v44,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64 *)&v42,
        &v40,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64 *)&v38,
        &v36);
    }
    memset(this, 0, 0x1128uLL);
    *((_WORD *)this + 2196) = 0;
    *((_BYTE *)this + 4394) = 0;
  }
  if ( !*((_BYTE *)this + 4394) )
  {
    if ( !UserCritTelemetry::TelemetryBuffer::ShouldBuffer(0, (__int64)a3, (__int64)a4)
      && !UserCritTelemetry::TelemetryBuffer::ShouldBuffer(1, v15, v16)
      && !UserCritTelemetry::TelemetryBuffer::ShouldBuffer(2, v17, v18) )
    {
      return;
    }
    *((_BYTE *)this + 4394) = 1;
  }
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 0LL, a2, a3, a4);
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 1LL, v19, a3, a4);
  UserCritTelemetry::TelemetryBuffer::UpdateCurrentSlot(this, 2LL, v20, a3, a4);
  if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x2000000000LL) )
  {
    v22 = *((unsigned __int16 *)this + 2196);
    v31 = *((_QWORD *)this + 3 * v22 + 362);
    v30 = *((_QWORD *)this + 3 * v22 + 361);
    v29 = *((_QWORD *)this + 3 * v22 + 360);
    v28 = *((_QWORD *)this + 3 * v22 + 182);
    v27 = *((_QWORD *)this + 3 * v22 + 181);
    v26 = *((_QWORD *)this + 3 * v22 + 180);
    v25 = *((_QWORD *)this + 3 * v22 + 2);
    v24 = *((_QWORD *)this + 3 * v22 + 1);
    v23 = *((_QWORD *)this + 3 * v22);
    LOWORD(v48) = v22;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v26,
      (int)&unk_1C0294725,
      v22,
      v21,
      (__int64)&v48,
      (__int64)&v23,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v27,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)&v30,
      (__int64)&v31);
  }
  ++*((_WORD *)this + 2196);
}
