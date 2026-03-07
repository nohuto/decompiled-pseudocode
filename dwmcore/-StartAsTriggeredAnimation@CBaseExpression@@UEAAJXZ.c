__int64 __fastcall CBaseExpression::StartAsTriggeredAnimation(CBaseExpression *this)
{
  char v1; // al
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  int TracingCookie; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  CBaseExpression *v15; // [rsp+40h] [rbp+8h] BYREF
  CBaseExpression *v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 232);
  if ( (v1 & 1) != 0 )
  {
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
    {
      v16 = this;
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v13 = (unsigned __int8 *)&unk_18037E436;
      goto LABEL_17;
    }
  }
  else
  {
    if ( (v1 & 8) != 0 )
    {
      *((_DWORD *)this + 72) = 0;
      *((_BYTE *)this + 232) = v1 & 0xFD;
      *((_BYTE *)this + 216) |= 1u;
      *((_QWORD *)this + 20) = -1LL;
      *((_QWORD *)this + 21) = -1LL;
    }
    else
    {
      v3 = *((_QWORD *)this + 2);
      v15 = this;
      v4 = *(_QWORD *)(v3 + 424);
      v5 = *(_DWORD *)(v4 + 440);
      v6 = v5 + 1;
      if ( v5 + 1 < v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v6 > *(_DWORD *)(v4 + 436) )
      {
        v7 = DynArrayImpl<1>::AddMultipleAndSet(v4 + 416, 8u, v4, &v15);
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v4 + 416) + 8LL * v5) = this;
        *(_DWORD *)(v4 + 440) = v6;
      }
    }
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
    {
      v16 = this;
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v13 = (unsigned __int8 *)&unk_18037E3FF;
LABEL_17:
      LODWORD(v15) = TracingCookie;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        v13,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
  return 0LL;
}
