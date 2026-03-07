__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v4 = CBaseExpression::NotifyAnimationDisconnected(this);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1BBu, 0LL);
      return v6;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 232) |= 1u;
  if ( (unsigned int)dword_1803E07D0 > 5 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
  {
    v10 = *((_DWORD *)this + 16);
    v11 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 144LL))(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E07D0,
      (int)&unk_18037E482,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v10);
  }
  return 0;
}
