void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // di
  _BYTE *v5; // rsi
  int v9; // eax
  char v10; // dl
  __int64 v11; // r8
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 StopValue; // rax
  __int64 v19; // xmm0_8
  int *v20; // r9
  char v21; // cl
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _BYTE v30[4]; // [rsp+70h] [rbp-29h] BYREF
  float v31[3]; // [rsp+74h] [rbp-25h] BYREF
  __int64 v32; // [rsp+80h] [rbp-19h] BYREF
  int v33; // [rsp+88h] [rbp-11h]
  int v34; // [rsp+90h] [rbp-9h] BYREF
  int v35; // [rsp+94h] [rbp-5h] BYREF
  int v36; // [rsp+98h] [rbp-1h] BYREF
  int v37; // [rsp+9Ch] [rbp+3h] BYREF
  int v38; // [rsp+A0h] [rbp+7h] BYREF
  int v39; // [rsp+A4h] [rbp+Bh] BYREF
  CNaturalAnimation *v40; // [rsp+A8h] [rbp+Fh] BYREF
  int v41; // [rsp+B0h] [rbp+17h]
  _BYTE v42[16]; // [rsp+B8h] [rbp+1Fh] BYREF

  v4 = 0;
  v5 = (char *)this + 588;
  *a4 = 0;
  if ( a3 != *((_QWORD *)this + 54) && (*v5 & 8) == 0 )
  {
    v9 = *((_DWORD *)this + 38);
    if ( v9 != 18 && v9 != 35 && v9 != 52 )
    {
LABEL_22:
      if ( (*v5 & 8) != 0 )
      {
        v26 = *((_QWORD *)this + 2);
        v40 = this;
        std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * const &>(
          (_QWORD *)(*(_QWORD *)(v26 + 424) + 656LL),
          (__int64)v42,
          (unsigned __int8 *)&v40);
      }
      return;
    }
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 55) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v11 + 84)) )
    {
      *v5 = v10 | 4;
    }
    if ( CNaturalAnimation::GenerateVector3Basis(this) )
      CVector3ForceEvaluator::ChangeBasis(
        (CVector3ForceEvaluator *)(*((_QWORD *)this + 55) + 16LL),
        (CNaturalAnimation *)((char *)this + 460));
    v12 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
    v13 = *((_QWORD *)this + 55);
    v31[0] = v12;
    CVector3Force::Update(v13, &v40);
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 55) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v14 + 84))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v15 + 152)) )
    {
      *a4 = 1;
      if ( (*v5 & 8) == 0 )
      {
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v32,
          (const struct D2DVector3 *)&v40,
          (CNaturalAnimation *)((char *)this + 524));
        v27 = v33;
        *(_QWORD *)((char *)this + 348) = v32;
        *((_DWORD *)this + 89) = v27;
        *((float *)this + 87) = *((float *)this + 90) + *((float *)this + 87);
        *((float *)this + 88) = *((float *)this + 91) + *((float *)this + 88);
        *((float *)this + 89) = *((float *)this + 92) + *((float *)this + 89);
        v28 = *((_DWORD *)this + 89);
        v32 = *(_QWORD *)((char *)this + 348);
        v33 = v28;
        CNaturalAnimation::PushValueToStack(this, &v32, a2);
LABEL_18:
        if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
        {
          CNaturalAnimation::PeekStackValue(this, v42, a2);
          if ( (unsigned int)dword_1803E07D0 > 4 )
          {
            if ( tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
            {
              v21 = *a4;
              v35 = v20[1];
              v36 = *v20;
              v37 = v41;
              v38 = HIDWORD(v40);
              v30[0] = v21;
              v22 = v20[2];
              v39 = (int)v40;
              v34 = v22;
              LODWORD(v40) = CBaseExpression::GetTracingCookie(this);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                v23,
                byte_18037DE34,
                v24,
                v25,
                (__int64)&v40,
                (__int64)v31,
                (__int64)&v39,
                (__int64)&v38,
                (__int64)&v37,
                (__int64)&v36,
                (__int64)&v35,
                (__int64)&v34,
                (__int64)v30);
            }
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      *a4 = 0;
    }
    v16 = *((_QWORD *)this + 45);
    v17 = *((_DWORD *)this + 92);
    *v5 |= 8u;
    *(_QWORD *)((char *)this + 348) = v16;
    *((_DWORD *)this + 89) = v17;
    StopValue = CNaturalAnimation::GetStopValue(this, v42);
    v19 = *(_QWORD *)StopValue;
    LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
    v32 = v19;
    v33 = StopValue;
    CNaturalAnimation::PushValueToStack(this, &v32, a2);
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
      CBaseExpression::NotifyAnimationCompleted(this);
    *((_BYTE *)this + 216) &= ~1u;
    goto LABEL_18;
  }
  if ( (*v5 & 8) == 0 )
    v4 = (*v5 & 0x40) != 0;
  *a4 = v4;
  v29 = *((_DWORD *)this + 89);
  v32 = *(_QWORD *)((char *)this + 348);
  v33 = v29;
  CNaturalAnimation::PushValueToStack(this, &v32, a2);
}
