__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        LARGE_INTEGER a4)
{
  __int64 v4; // rax
  _DWORD *v8; // r15
  unsigned int v9; // ecx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  struct CExpressionValue *v12; // r14
  struct SubchannelMaskInfo *v13; // rbx
  __int64 v14; // rax
  LARGE_INTEGER v15; // rbx
  DWORD *v16; // r13
  unsigned int v17; // ecx
  __int64 v18; // r12
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  LARGE_INTEGER v24; // rbx
  __int64 v25; // r13
  int ValueFromCache; // eax
  CExpressionValueStack *v27; // rcx
  unsigned int v28; // r12d
  __int64 result; // rax
  unsigned __int64 v30; // r9
  int v31; // r9d
  int v32; // r9d
  int v33; // r12d
  unsigned int v34; // ecx
  unsigned int v35; // r14d
  __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 Elapsed; // rax
  __int64 v40; // rax
  CVisual *v41; // rbx
  struct CInteraction *InteractionInternal; // rax
  struct CInteraction *v43; // r10
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  struct SubchannelMaskInfo *v47; // r10
  __int64 v48; // rax
  unsigned int v49; // [rsp+20h] [rbp-79h]
  unsigned int v50; // [rsp+20h] [rbp-79h]
  __int64 v51; // [rsp+40h] [rbp-59h] BYREF
  CVisual *v52; // [rsp+48h] [rbp-51h] BYREF
  __int64 v53; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v54[64]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v55; // [rsp+A0h] [rbp+7h] BYREF
  int v56; // [rsp+A8h] [rbp+Fh]
  char v57; // [rsp+ACh] [rbp+13h]
  CVisual *v58; // [rsp+100h] [rbp+67h] BYREF
  struct SubchannelMaskInfo *v59; // [rsp+108h] [rbp+6Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+77h] BYREF
  LARGE_INTEGER v61; // [rsp+118h] [rbp+7Fh] BYREF

  v61 = a4;
  v4 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v4 >= *((_DWORD *)a2 + 110) )
    v8 = 0LL;
  else
    v8 = (_DWORD *)(*((_QWORD *)a2 + 54) + 24 * v4);
  v9 = *((_DWORD *)this + 4);
  if ( (unsigned int)~*((_DWORD *)this + 4) < 5 )
  {
    v33 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v9,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
    v35 = -2147418113;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033A620, 2u, v33, 0x142u, 0LL);
    return v35;
  }
  if ( *((_DWORD *)this + 12) != v9 )
  {
    v10 = (_QWORD *)((char *)this + 24);
    goto LABEL_6;
  }
  memset_0(v54, 0, sizeof(v54));
  v10 = (_QWORD *)((char *)this + 24);
  v55 = 0LL;
  v56 = 18;
  v57 = 0;
  v37 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 24, v36, v54);
  v33 = v37;
  v35 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v38,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v37,
      0x5Bu,
      0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v55);
    goto LABEL_52;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v55);
LABEL_6:
  v11 = *((unsigned int *)this + 4);
  v59 = 0LL;
  *((_DWORD *)this + 4) = v11 + 1;
  v12 = (struct CExpressionValue *)(*v10 + 80 * v11);
  v13 = 0LL;
  if ( v8[4] == 1 )
  {
    v13 = (struct SubchannelMaskInfo *)*((_QWORD *)a2 + 25);
    v59 = v13;
  }
  if ( v8[2] == 1 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(a2, v8[3], v12, (bool *)&v61);
    v28 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      v50 = 393;
    }
    else
    {
      if ( LOBYTE(v61.LowPart) )
        return 0LL;
      ValueFromCache = CExpressionValueStack::QueryObjectPropertyValue(v27, a2, a3, v30, v12, v13);
      v28 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v50 = 403;
      }
      else
      {
        ValueFromCache = CExpression::StoreValueToCache(a2, v8[3], v12);
        v28 = ValueFromCache;
        if ( ValueFromCache >= 0 )
          return 0LL;
        v50 = 409;
      }
    }
    goto LABEL_77;
  }
  if ( v8[2] == 2 )
  {
    v14 = *((unsigned int *)a3 + 1);
    v15.QuadPart = 0LL;
    v61.QuadPart = 0LL;
    v58 = 0LL;
    if ( (unsigned int)v14 >= *((_DWORD *)a2 + 110) )
      v16 = 0LL;
    else
      v16 = (DWORD *)(*((_QWORD *)a2 + 54) + 24 * v14);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 41) + 4LL) & 0x40000000) != 0 || CCommonRegistryData::LogExpressionPerfStats )
    {
      v58 = (CVisual *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 88LL);
      v15.QuadPart = 0LL;
      if ( QueryPerformanceCounter(&PerformanceCount) )
        v15 = PerformanceCount;
      v61 = v15;
    }
    v18 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD))(*(_QWORD *)a2 + 288LL))(a2, v16[5]);
    if ( v18 )
    {
      if ( v15.QuadPart )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v61);
        CExpressionPerformanceCounter::AddDurationSample(v58, 3LL, Elapsed);
      }
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CExpressionValue *))(*(_QWORD *)v18 + 136LL))(
              v18,
              *v16,
              v12);
      v20 = v19;
      if ( v19 < 0 )
      {
        v49 = 263;
      }
      else
      {
        if ( !v59 || !*((_BYTE *)v59 + 4) || (v19 = CExpressionValue::ApplyMaskToValue(v12, v59), v20 = v19, v19 >= 0) )
        {
          v21 = *((_QWORD *)a2 + 23);
          if ( v21 )
            v22 = *(_QWORD *)(v21 + 16);
          else
            v22 = 0LL;
          if ( (unsigned int)dword_1803E07D0 > 4
            && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL)
            && v22
            && *v16 - 1 <= 1
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 56LL))(v22, 196LL)
            && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 90LL) )
          {
            wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(&v58, v22);
            v40 = *(_QWORD *)v18;
            v53 = v18;
            (*(void (__fastcall **)(__int64))(v40 + 8))(v18);
            v41 = v58;
            *((_BYTE *)v58 + 272) |= 8u;
            if ( InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v18 + 200)) )
            {
              if ( CVisual::GetInteractionInternal(v41) )
              {
                InteractionInternal = CVisual::GetInteractionInternal(v41);
                if ( InteractionInternal == v43
                  && (unsigned int)dword_1803E07D0 > 4
                  && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
                {
                  v61.LowPart = *v16;
                  v59 = v47;
                  v51 = v18;
                  v52 = v41;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    v44,
                    (unsigned int)&unk_18037D989,
                    v45,
                    v46,
                    (__int64)&v61,
                    (__int64)&v52,
                    (__int64)&v51,
                    (__int64)&v59);
                }
              }
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v53);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v58);
          }
          v23 = *((_QWORD *)a2 + 41);
          v24.QuadPart = 0LL;
          v61.QuadPart = 0LL;
          v25 = 0LL;
          if ( (*(_DWORD *)(v23 + 4) & 0x40000000) != 0 )
          {
            v25 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 88LL;
            if ( QueryPerformanceCounter(&v61) )
              v24 = v61;
            v61 = v24;
          }
          ValueFromCache = CExpression::StoreValueToCache(a2, v8[3], v12);
          v28 = ValueFromCache;
          if ( ValueFromCache >= 0 )
          {
            if ( v24.QuadPart )
            {
              v48 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v61);
              CExpressionPerformanceCounter::AddDurationSample(v25, 4LL, v48);
            }
            return 0LL;
          }
          v50 = 359;
          goto LABEL_77;
        }
        v49 = 279;
      }
      v31 = v19;
    }
    else
    {
      v20 = -2147467259;
      v31 = -2147467259;
      v49 = 255;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18033A620, 2u, v31, v49, 0LL);
    ValueFromCache = CExpression::ReadValueFromCache(a2, v8[3], v12, (bool *)&v61);
    v28 = ValueFromCache;
    if ( ValueFromCache >= 0 )
    {
      if ( !LOBYTE(v61.LowPart) )
      {
        v28 = v20;
        v50 = 380;
        v32 = v20;
LABEL_43:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v27, &dword_18033A620, 2u, v32, v50, 0LL);
        goto LABEL_44;
      }
      return 0LL;
    }
    v50 = 376;
LABEL_77:
    v32 = ValueFromCache;
    goto LABEL_43;
  }
  v28 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(v8[2] - 1, &dword_18033A620, 2u, -2147418113, 0x19Fu, 0LL);
LABEL_44:
  result = v28;
  if ( v12 )
    --*((_DWORD *)this + 4);
  return result;
}
