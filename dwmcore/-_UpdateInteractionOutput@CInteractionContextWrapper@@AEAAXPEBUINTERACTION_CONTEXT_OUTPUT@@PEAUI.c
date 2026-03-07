void __fastcall CInteractionContextWrapper::_UpdateInteractionOutput(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        struct InteractionOutput *a3)
{
  int v6; // ecx
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm6_4
  float v10; // xmm7_4
  const struct MANIPULATION_TRANSFORM *v11; // r14
  const struct DEVICE_INFO *v12; // rax
  const struct tagRECT *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  const struct MANIPULATION_TRANSFORM *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  float v21; // [rsp+B8h] [rbp-80h] BYREF
  float v22; // [rsp+BCh] [rbp-7Ch] BYREF
  int v23; // [rsp+C0h] [rbp-78h] BYREF
  int v24; // [rsp+C4h] [rbp-74h] BYREF
  int v25; // [rsp+C8h] [rbp-70h] BYREF
  int v26; // [rsp+CCh] [rbp-6Ch] BYREF
  int v27; // [rsp+D0h] [rbp-68h] BYREF
  int v28; // [rsp+D4h] [rbp-64h] BYREF
  int v29; // [rsp+D8h] [rbp-60h] BYREF
  int v30; // [rsp+DCh] [rbp-5Ch] BYREF
  int v31; // [rsp+E0h] [rbp-58h] BYREF
  int v32; // [rsp+E4h] [rbp-54h] BYREF
  int v33; // [rsp+E8h] [rbp-50h] BYREF
  int v34; // [rsp+ECh] [rbp-4Ch] BYREF
  int v35; // [rsp+F0h] [rbp-48h] BYREF
  int v36; // [rsp+F4h] [rbp-44h] BYREF
  CInteractionContextWrapper *v37; // [rsp+F8h] [rbp-40h] BYREF
  __int128 v38; // [rsp+100h] [rbp-38h] BYREF
  int v39; // [rsp+110h] [rbp-28h]
  _QWORD v40[3]; // [rsp+118h] [rbp-20h] BYREF
  __int64 v41; // [rsp+130h] [rbp-8h]
  __int64 v42; // [rsp+138h] [rbp+0h]

  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a3 + 11) = *((_DWORD *)a2 + 4);
  v6 = *(_DWORD *)a2;
  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) == 0 && v6 != 3 )
  {
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 19) == 2 )
      {
        if ( *((float *)a2 + 10) == 0.0 )
        {
          if ( *((float *)a2 + 11) != 0.0 )
            *((_DWORD *)a3 + 5) = 2;
        }
        else
        {
          *((_DWORD *)a3 + 5) = 1;
        }
      }
      else if ( *((_DWORD *)a2 + 19) == 1 )
      {
        *((_DWORD *)a3 + 5) = 0;
      }
      *((float *)a3 + 2) = *((float *)a2 + 5) + *((float *)a3 + 2);
      *((float *)a3 + 3) = *((float *)a2 + 6) + *((float *)a3 + 3);
      v7 = *((float *)a2 + 7);
      if ( v7 != 0.0 )
        *((float *)a3 + 4) = v7 * *((float *)a3 + 4);
      *((_DWORD *)a3 + 6) = *((_DWORD *)a2 + 15);
      *((_DWORD *)a3 + 7) = *((_DWORD *)a2 + 16);
      v8 = *((_DWORD *)a2 + 17);
      *((_DWORD *)a3 + 9) = 0;
      *((_DWORD *)a3 + 8) = v8;
      *((_DWORD *)a3 + 12) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a3 + 13) = *((_DWORD *)a2 + 13);
    }
  }
  v9 = *((float *)a3 + 2);
  v10 = *((float *)a3 + 3);
  v11 = 0LL;
  v22 = v9;
  v21 = v10;
  v38 = 0LL;
  v39 = 0;
  if ( !CCommonRegistryData::m_fDisableInteractionOutputPrediction
    && !CCommonRegistryData::m_cForceDisableInteractionOutputPrediction
    && (*((_DWORD *)this + 58) & 0x180000) == 0 )
  {
    v12 = CPointerDeviceCache::Query(*((_QWORD *)this + 30));
    v13 = (const struct tagRECT *)(((unsigned __int64)v12 + 16) & -(__int64)(*((_BYTE *)v12 + 48) != 0));
    if ( (int)NtDCompositionGetFrameStatistics(v40, 0LL) >= 0 )
    {
      v14 = 1000LL * v40[2] / v41;
      v15 = 1000LL * v40[0] / v41;
      if ( *(_DWORD *)a2 == 1 && (v14 || v15 || 1000 * v42 / v41) )
      {
        v16 = OutputPredictionInteractionContext(*((_QWORD *)this + 2), 1000LL, v14, v15, 1000 * v42 / v41, &v38);
        v17 = (const struct MANIPULATION_TRANSFORM *)&v38;
        if ( v16 < 0 )
          v17 = 0LL;
        v11 = v17;
      }
      CInteractionContextTransformHelper::CalculatePrediction(
        (CInteractionContextWrapper *)((char *)this + 328),
        a2,
        v11,
        v13,
        *((_DWORD *)this + 79),
        *((float *)a3 + 2),
        *((float *)a3 + 3),
        &v22,
        &v21);
      v9 = v22;
      v10 = v21;
    }
  }
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v20 = *((unsigned int *)a3 + 4);
    v23 = *((_DWORD *)a3 + 11);
    v24 = *((_DWORD *)a3 + 10);
    v25 = *((_DWORD *)a3 + 9);
    v26 = *((_DWORD *)a3 + 8);
    v27 = *((_DWORD *)a3 + 7);
    v28 = *((_DWORD *)a3 + 6);
    v30 = DWORD1(v38);
    v31 = v38;
    v32 = *((_DWORD *)a2 + 11);
    v33 = *((_DWORD *)a2 + 10);
    v35 = *((_DWORD *)a3 + 3);
    v36 = *((_DWORD *)a3 + 2);
    v29 = v20;
    v34 = v20;
    v37 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      byte_18037F016,
      v18,
      v19,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  *((float *)a3 + 2) = v9;
  *((float *)a3 + 3) = v10;
}
