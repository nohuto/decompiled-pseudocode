__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  const struct CExpressionValue *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[2]; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+40h] [rbp-39h]
  __int128 v21; // [rsp+48h] [rbp-31h] BYREF
  int v22; // [rsp+58h] [rbp-21h]
  int v23; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v24; // [rsp+60h] [rbp-19h]
  _BYTE v25[96]; // [rsp+70h] [rbp-9h] BYREF
  int v26; // [rsp+E0h] [rbp+67h] BYREF
  int v27; // [rsp+F8h] [rbp+7Fh] BYREF

  *((_BYTE *)this + 580) &= ~1u;
  if ( (*((_BYTE *)this + 216) & 2) == 0 )
    goto LABEL_12;
  v5 = CBaseExpression::NotifyAnimationDisconnected(this);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x210u, 0LL);
    return v7;
  }
  if ( *((_BYTE *)a3 + 8) && (unsigned int)(*((_DWORD *)this + 140) - 1) <= 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
    v20 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v19[1] = v8;
    v19[0] = &CExpressionValueStack::`vftable';
    v21 = 0LL;
    v9 = CKeyframeAnimation::Reset(this, 1, (struct CExpressionValueStack *)v19);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x219u, 0LL);
    }
    else
    {
      v11 = (unsigned int)(v20 - 1);
      if ( (unsigned int)v11 < v24 )
      {
        v13 = (const struct CExpressionValue *)(v21 + 80 * v11);
      }
      else
      {
        v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
        v13 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
      }
      v14 = CBaseExpression::SetOutputValue(this, v13);
      v7 = v14;
      if ( v14 >= 0 )
      {
        --v20;
        v19[0] = &CExpressionValueStack::`vftable';
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v21);
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x21Cu, 0LL);
    }
    v19[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v21);
    return v7;
  }
LABEL_11:
  CBaseExpression::EnsureExpressionIsUnregistered(this);
LABEL_12:
  *((_BYTE *)this + 232) |= 1u;
  if ( (unsigned int)dword_1803E07D0 > 5 && tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
  {
    v26 = *((_DWORD *)this + 16);
    v27 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 144LL))(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E07D0,
      (int)&unk_18037DCDE,
      v16,
      v17,
      (__int64)&v27,
      (__int64)&v26);
  }
  return 0;
}
