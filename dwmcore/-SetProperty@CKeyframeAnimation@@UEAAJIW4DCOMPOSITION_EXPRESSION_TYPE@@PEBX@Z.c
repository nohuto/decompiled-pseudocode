__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v5; // xmm2_4
  __int64 v6; // rax
  __int64 v7; // rdi
  struct _RTL_GENERIC_TABLE *v8; // rcx
  __int64 v10; // rax
  int updated; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  _QWORD *Element; // rax
  __int64 i; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // edi
  unsigned int TracingCookie; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rdx
  unsigned int v25[6]; // [rsp+30h] [rbp-18h] BYREF
  float v26; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 18 )
  {
    if ( a2 != 24 )
    {
      if ( a2 == 31 )
      {
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0LL;
      }
      if ( a2 == 33 )
      {
        v5 = *a4;
        if ( *(float *)(a1 + 532) != *a4 )
        {
          v6 = *(_QWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 580) |= 4u;
          *(float *)(a1 + 532) = fminf(1.0, fmaxf(v5, 0.0));
          v7 = *(_QWORD *)(v6 + 496);
          if ( v7 == *(_QWORD *)(v6 + 504) )
          {
            v14 = v7 + 1;
            v7 = 1LL;
            if ( v14 )
              v7 = v14;
          }
          v8 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
          if ( v8 )
          {
            Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v8, 33);
            if ( Element )
            {
              if ( Element != (_QWORD *)-8LL )
              {
                for ( i = 0LL; (unsigned int)i < *((_DWORD *)Element + 8); *(_QWORD *)(v17 + 296) = v7 )
                {
                  v17 = *(_QWORD *)(Element[1] + 8 * i);
                  i = (unsigned int)(i + 1);
                }
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 448LL) |= 2u;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 656LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL),
                  0LL,
                  8LL);
              }
            }
          }
        }
        return 0LL;
      }
      goto LABEL_38;
    }
    v10 = *(_QWORD *)(a1 + 448);
    *(float *)(a1 + 556) = fminf(fmaxf(*a4, 0.0), 1.0);
    if ( *(_BYTE *)(v10 + 122) )
    {
      if ( *(_DWORD *)(a1 + 560) )
      {
        updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0, 0, 0LL);
        v13 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, 0x864u, 0LL);
          return v13;
        }
      }
    }
    return 0LL;
  }
  if ( a3 == 42 )
  {
    if ( a2 == 16 )
    {
      v26 = *a4;
      if ( v26 <= 0.0 )
        return 0LL;
      v18 = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v26);
      v20 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x86Du, 0LL);
        return v20;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) & 0x40000000) == 0
        || (unsigned int)dword_1803E07D0 <= 4
        || !tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
      {
        return 0LL;
      }
      TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v24 = &unk_18037DAFF;
LABEL_37:
      v25[0] = TracingCookie;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1803E07D0,
        (int)v24,
        v22,
        v23,
        (__int64)v25,
        (__int64)&v26);
      return 0LL;
    }
    if ( a2 == 30 )
    {
      v26 = *a4;
      if ( v26 < 1.0 )
        return 0LL;
      CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v26);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) & 0x40000000) == 0
        || (unsigned int)dword_1803E07D0 <= 4
        || !tlgKeywordOn((__int64)&dword_1803E07D0, 4LL) )
      {
        return 0LL;
      }
      TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v24 = &unk_18037DB41;
      goto LABEL_37;
    }
  }
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x89Du, 0LL);
  return 2147942487LL;
}
