__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  struct ExpressionReferenceInfo *ReferenceInfoFromNode; // r15
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _QWORD *v15; // rbx
  __int64 Elapsed; // rax
  __int64 v18; // rax
  CVisual *v19; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v21; // r10
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r10
  unsigned int v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  CVisual *v28; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  CVisual *v30; // [rsp+90h] [rbp+30h] BYREF
  __int64 v31; // [rsp+98h] [rbp+38h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h] BYREF

  v30 = this;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  ReferenceInfoFromNode = CExpression::GetReferenceInfoFromNode(a2, a3);
  if ( CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 88LL;
    QpcStopwatch::Start((QpcStopwatch *)&v32);
    v7 = v32;
  }
  v11 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD))(*(_QWORD *)a2 + 288LL))(
          a2,
          *((unsigned int *)ReferenceInfoFromNode + 5));
  if ( v11 )
  {
    if ( v7 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v32);
      CExpressionPerformanceCounter::AddDurationSample(v8, 3LL, Elapsed);
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v11 + 136LL))(
            v11,
            *(unsigned int *)ReferenceInfoFromNode,
            a5);
    v14 = v12;
    if ( v12 < 0 )
    {
      v26 = 263;
      goto LABEL_30;
    }
    if ( a6 )
    {
      if ( *((_BYTE *)a6 + 4) )
      {
        v12 = CExpressionValue::ApplyMaskToValue(a5, a6);
        v14 = v12;
        if ( v12 < 0 )
        {
          v26 = 279;
LABEL_30:
          MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18033A620, 2u, v12, v26, 0LL);
          return v14;
        }
      }
    }
    v15 = (_QWORD *)*((_QWORD *)a2 + 23);
    if ( v15 )
      v15 = (_QWORD *)v15[2];
    if ( (unsigned int)dword_1803E07D0 > 4
      && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL)
      && v15
      && (unsigned int)(*(_DWORD *)ReferenceInfoFromNode - 1) <= 1
      && (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v15 + 56LL))(v15, 196LL)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 90LL) )
    {
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
        &v30,
        (__int64)v15);
      v18 = *(_QWORD *)v11;
      v29 = v11;
      (*(void (__fastcall **)(__int64))(v18 + 8))(v11);
      v19 = v30;
      *((_BYTE *)v30 + 272) |= 8u;
      if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v11 + 200)) )
      {
        if ( CVisual::GetInteractionInternal(v19) )
        {
          InteractionInternal = CVisual::GetInteractionInternal(v19);
          if ( InteractionInternal == v21
            && (unsigned int)dword_1803E07D0 > 4
            && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
          {
            LODWORD(v32) = *(_DWORD *)ReferenceInfoFromNode;
            v31 = v25;
            v27 = v11;
            v28 = v19;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v22,
              (unsigned int)&unk_18037D989,
              v23,
              v24,
              (__int64)&v32,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v31);
          }
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
    }
    return 0;
  }
  else
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18033A620, 2u, -2147467259, 0xFFu, 0LL);
  }
  return v14;
}
