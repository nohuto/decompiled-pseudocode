void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  bool v3; // zf
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+84h] [rbp-7Ch] BYREF
  int v18; // [rsp+88h] [rbp-78h] BYREF
  int v19; // [rsp+8Ch] [rbp-74h] BYREF
  int v20; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+94h] [rbp-6Ch] BYREF
  int v22; // [rsp+98h] [rbp-68h] BYREF
  int v23; // [rsp+9Ch] [rbp-64h] BYREF
  int v24; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+A4h] [rbp-5Ch] BYREF
  CInteractionContextWrapper *v26; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int128 v31; // [rsp+F0h] [rbp-10h]

  *((_BYTE *)this + 80) |= 1u;
  v3 = *((_DWORD *)this + 54) == 5;
  v4 = *((_OWORD *)a2 + 1);
  v27 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v28 = v4;
  v6 = *((_OWORD *)a2 + 3);
  v29 = v5;
  v7 = *((_OWORD *)a2 + 4);
  v30 = v6;
  v31 = v7;
  if ( v3 && (_DWORD)v27 == 1 )
  {
    if ( !*((_BYTE *)this + 321) )
    {
      DWORD1(v28) = 0;
      DWORD2(v29) = 0;
      HIDWORD(v30) = 0;
    }
    if ( !*((_BYTE *)this + 322) )
    {
      DWORD2(v28) = 0;
      HIDWORD(v29) = 0;
      LODWORD(v31) = 0;
    }
    if ( !*((_BYTE *)this + 323) )
    {
      HIDWORD(v28) = 0;
      LODWORD(v29) = 0;
      *(_QWORD *)&v30 = 0LL;
      DWORD1(v31) = 0;
    }
  }
  CInteractionContextWrapper::_UpdateInteractionOutput(
    this,
    (const struct INTERACTION_CONTEXT_OUTPUT *)&v27,
    (CInteractionContextWrapper *)((char *)this + 24));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 112LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      this,
      *((_DWORD *)this + 53),
      *((_DWORD *)this + 55),
      *((_QWORD *)this + 28),
      (const struct INTERACTION_CONTEXT_OUTPUT *)&v27);
  v8 = v27;
  if ( (_DWORD)v27 == 1 )
  {
    *((_BYTE *)this + 84) = 1;
    *((_BYTE *)this + 148) = 1;
    if ( (unsigned int)dword_1803E07D0 <= 4 )
      return;
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v19 = *((_DWORD *)this + 11);
      v20 = HIDWORD(v31);
      v21 = v30;
      v22 = HIDWORD(v29);
      v23 = DWORD2(v29);
      v24 = v31;
      v25 = HIDWORD(v30);
      v16 = HIDWORD(v28);
      v17 = DWORD2(v28);
      v18 = DWORD1(v28);
      v26 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_18037F136,
        v10,
        v11,
        (__int64)&v26,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v15 = *((_BYTE *)this + 80) & 1;
      v16 = v8;
      v18 = v15;
      v17 = DWORD1(v27);
      v26 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_18037EF90,
        v13,
        v14,
        (__int64)&v26,
        (__int64)&v16,
        (__int64)&v17,
        (__int64)&v18);
    }
  }
}
