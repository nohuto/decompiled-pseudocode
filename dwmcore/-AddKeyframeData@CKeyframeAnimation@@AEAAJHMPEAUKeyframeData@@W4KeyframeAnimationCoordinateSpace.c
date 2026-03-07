__int64 __fastcall CKeyframeAnimation::AddKeyframeData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  float v5; // xmm2_4
  _DWORD *v7; // rbx
  __int64 v8; // r12
  __int128 v9; // xmm1
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  HANDLE ProcessHeap; // rax
  char *v20; // rax
  __int64 *v21; // rcx
  float v22; // xmm6_4
  __int64 v23; // r15
  float *v24; // r14
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // r12
  _DWORD *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned int v33; // ecx
  int v34; // xmm1_4
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  bool v37; // al
  int v38; // eax
  int v39; // r9d
  int v40; // r8d
  int v41; // r9d
  int v42; // r8d
  int v43; // r9d
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rax
  __m128 v52; // xmm2
  __m128 v53; // rt1
  int v54; // eax
  int v55; // ebx
  BOOL v56; // eax
  char v57; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  _DWORD *v60; // rcx
  unsigned int v61; // [rsp+28h] [rbp-A1h]
  unsigned int v62; // [rsp+28h] [rbp-A1h]
  int v63; // [rsp+68h] [rbp-61h] BYREF
  int v64; // [rsp+6Ch] [rbp-5Dh] BYREF
  unsigned __int32 v65; // [rsp+70h] [rbp-59h]
  float *v66; // [rsp+78h] [rbp-51h] BYREF
  _DWORD *v67; // [rsp+80h] [rbp-49h] BYREF
  _OWORD v68[4]; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v69; // [rsp+C8h] [rbp-1h] BYREF
  int v70; // [rsp+D0h] [rbp+7h]
  char v71; // [rsp+D4h] [rbp+Bh]
  __int128 v72; // [rsp+D8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+120h] [rbp+57h]
  __int16 Response; // [rsp+140h] [rbp+77h] BYREF

  v7 = 0LL;
  g_dbgKeyFrameData = *(_OWORD *)a4;
  v8 = a2;
  v9 = *(_OWORD *)(a4 + 16);
  v67 = 0LL;
  v66 = 0LL;
  xmmword_1803E2958 = v9;
  xmmword_1803E2968 = *(_OWORD *)(a4 + 32);
  v11 = *(_DWORD *)(a4 + 4);
  if ( v11 > 65539 )
  {
    if ( v11 == 65540 )
    {
      v12 = XamlElasticInterpolation::Create(
              a5,
              (unsigned int)(int)*(float *)(a4 + 8),
              (unsigned int)(int)*(float *)(a4 + 12));
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1198;
        goto LABEL_64;
      }
      goto LABEL_7;
    }
    if ( v11 == 65541 )
    {
      v12 = XamlExponentialInterpolation::Create(a5, (int)*(float *)(a4 + 8), *(float *)(a4 + 12), &v66);
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1206;
        goto LABEL_64;
      }
    }
    else
    {
      v13 = v11 - 65542;
      if ( v11 != 65542 )
      {
        if ( v11 == 65543 )
        {
          v12 = XamlSineInterpolation::Create(a5, (unsigned int)(int)*(float *)(a4 + 8), &v66);
          v14 = v12;
          if ( v12 < 0 )
          {
            v61 = 1221;
            goto LABEL_64;
          }
          goto LABEL_7;
        }
        goto LABEL_74;
      }
      v12 = XamlPowerInterpolation::Create(a5, (unsigned int)(int)*(float *)(a4 + 8), a3, &v66);
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1214;
        goto LABEL_64;
      }
    }
  }
  else
  {
    if ( v11 == 65539 )
    {
      v12 = XamlCircleInterpolation::Create(a5, (unsigned int)(int)*(float *)(a4 + 8), &v66);
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1189;
        goto LABEL_64;
      }
      goto LABEL_7;
    }
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        if ( v11 == 2 )
        {
          v12 = StepInterpolation::Create(
                  a5,
                  (unsigned int)(int)*(float *)(a4 + 8),
                  (unsigned int)(int)*(float *)(a4 + 12),
                  (unsigned int)(int)*(float *)(a4 + 16),
                  (int)*(float *)(a4 + 20) & 1,
                  ((int)*(float *)(a4 + 20) & 2) != 0,
                  &v66);
          v14 = v12;
          if ( v12 >= 0 )
            goto LABEL_7;
          v61 = 1165;
LABEL_64:
          v39 = v12;
LABEL_65:
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v39, v61, 0LL);
          goto LABEL_30;
        }
        v13 = v11 - 65537;
        if ( v11 == 65537 )
        {
          v12 = XamlBackInterpolation::Create(a5, (unsigned int)(int)*(float *)(a4 + 8), a3, &v66);
          v14 = v12;
          if ( v12 < 0 )
          {
            v61 = 1173;
            goto LABEL_64;
          }
          goto LABEL_7;
        }
        if ( v11 == 65538 )
        {
          v12 = XamlBounceInterpolation::Create(
                  a5,
                  (unsigned int)(int)*(float *)(a4 + 8),
                  (unsigned int)(int)*(float *)(a4 + 12));
          v14 = v12;
          if ( v12 < 0 )
          {
            v61 = 1182;
            goto LABEL_64;
          }
          goto LABEL_7;
        }
LABEL_74:
        if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
        {
          v63 = -2147024809;
          v64 = v41;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1803E07D0,
            (unsigned int)&unk_18037DC92,
            v40,
            v41,
            (__int64)&v64,
            (__int64)&v63);
        }
        v61 = 1234;
LABEL_79:
        v14 = -2147024809;
        v39 = -2147024809;
        goto LABEL_65;
      }
      v12 = CubicBezierInterpolation::Create(a5);
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1148;
        goto LABEL_64;
      }
    }
    else
    {
      v12 = LinearInterpolation::Create(a5, &v66);
      v14 = v12;
      if ( v12 < 0 )
      {
        v61 = 1154;
        goto LABEL_64;
      }
    }
  }
LABEL_7:
  if ( *(_DWORD *)(a4 + 24) == 1 )
  {
    memset_0(v68, 0, sizeof(v68));
    v15 = *(_DWORD *)(a1 + 152);
    v69 = 0LL;
    v70 = 18;
    v71 = 0;
    v16 = v15 - 11;
    if ( v16 )
    {
      v17 = v16 - 6;
      if ( !v17 )
      {
        v37 = *(float *)(a4 + 32) != 0.0;
        v70 = 17;
        LOBYTE(v68[0]) = v37;
        goto LABEL_12;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        LODWORD(v68[0]) = *(_DWORD *)(a4 + 32);
LABEL_12:
        v71 = 1;
LABEL_13:
        ProcessHeap = GetProcessHeap();
        v20 = (char *)HeapAlloc(ProcessHeap, 8u, 0x68uLL);
        v7 = v20;
        if ( !v20 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        *((_DWORD *)v20 + 2) = 0;
        *(_QWORD *)v20 = &KeyframeValue::`vftable';
        _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
        *((_DWORD *)v20 + 5) = 1;
        CExpressionValue::CopyFrom((CExpressionValue *)(v20 + 24), (const struct CExpressionValue *)v68);
        v21 = v69;
        v7[4] = v7[24];
        v67 = v7;
        if ( v21 )
        {
          v51 = *v21;
          v69 = 0LL;
          (*(void (__fastcall **)(__int64 *))(v51 + 16))(v21);
        }
        goto LABEL_16;
      }
      v33 = v18 - 17;
      if ( !v33 )
      {
        v34 = *(_DWORD *)(a4 + 36);
        LODWORD(v68[0]) = *(_DWORD *)(a4 + 32);
        DWORD1(v68[0]) = v34;
        v70 = 35;
        goto LABEL_12;
      }
      v35 = v33 - 17;
      if ( !v35 )
      {
        v38 = *(_DWORD *)(a4 + 40);
        *(_QWORD *)&v68[0] = *(_QWORD *)(a4 + 32);
        v70 = 52;
        DWORD2(v68[0]) = v38;
        goto LABEL_12;
      }
      v36 = v35 - 17;
      if ( !v36 )
      {
        v70 = 69;
        goto LABEL_45;
      }
      v16 = v36 - 1;
      if ( !v16 )
      {
        v70 = 70;
LABEL_45:
        v68[0] = *(_OWORD *)(a4 + 32);
        goto LABEL_12;
      }
      if ( v16 == 1 )
      {
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v72, (const struct D2DQuaternion *)(a4 + 32));
        v70 = 71;
        v68[0] = v72;
        goto LABEL_12;
      }
      if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
      {
        v64 = -2147024809;
        v63 = v45;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1803E07D0,
          (unsigned int)&unk_18037DBDC,
          v44,
          v45,
          (__int64)&v63,
          (__int64)&v64);
      }
      v62 = 1328;
    }
    else
    {
      v46 = *(_QWORD *)(a1 + 464);
      v47 = *(unsigned int *)(a4 + 32);
      if ( v47 < (*(_QWORD *)(a1 + 472) - v46) >> 3 )
      {
        v50 = *(_QWORD *)(v46 + 8 * v47);
        v70 = 11;
        v71 = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=(&v69, v50);
        goto LABEL_13;
      }
      if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
      {
        v64 = -2147024809;
        v63 = v49;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1803E07D0,
          (unsigned int)&unk_18037DB85,
          v48,
          v49,
          (__int64)&v63,
          (__int64)&v64);
      }
      v62 = 1314;
    }
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, v62, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
    goto LABEL_30;
  }
  v13 = *(_DWORD *)(a4 + 24) - 2;
  if ( *(_DWORD *)(a4 + 24) != 2 )
  {
    if ( *(_DWORD *)(a4 + 24) == 3 )
    {
      KeyframeValue::CreateStartingValueKeyframeValue(*(unsigned int *)(a1 + 152), a1, &v67);
      goto LABEL_49;
    }
    if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
    {
      v64 = -2147024809;
      v63 = v43;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1803E07D0,
        (unsigned int)&unk_18037DC3F,
        v42,
        v43,
        (__int64)&v63,
        (__int64)&v64);
    }
    v61 = 1343;
    goto LABEL_79;
  }
  KeyframeValue::CreateExpressionKeyframeValue(*(unsigned int *)(a1 + 152), a1, *(_DWORD *)(a4 + 32), &v67);
LABEL_49:
  v7 = v67;
LABEL_16:
  v22 = v5 * 1000.0;
  v23 = *(_QWORD *)(a1 + 392);
  v24 = v66;
  *(float *)&v65 = v5 * 1000.0;
  if ( COERCE_UNSIGNED_INT(fabs(v5 * 1000.0)) > 0x497FFFF0 )
  {
    v52 = 0LL;
    v52.m128_f32[0] = (float)(int)v22 - v22;
    v53.m128_f32[0] = FLOAT_N0_5;
    v65 = _mm_cmple_ss(v52, v53).m128_u32[0];
    v25 = (int)v22 - v65;
  }
  else
  {
    *(float *)&v65 = v22 + 6291456.25;
    v25 = (int)(v65 << 10) >> 11;
  }
  v26 = 3 * v8;
  *(_DWORD *)(*(_QWORD *)(v23 + 104) + 8 * v26) = v25;
  v27 = *(_QWORD *)(v23 + 104);
  if ( *(_DWORD **)(v27 + 8 * v26 + 8) != v7 )
  {
    v28 = v7;
    if ( v7 )
    {
      if ( (int)v7[2] < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
      {
        while ( 1 )
        {
          v54 = IsKernelDebuggerPresent();
          Response = 63;
          v55 = v54;
          if ( !v54 )
          {
            v56 = IsDebuggerPresent();
            v57 = Response;
            if ( v56 )
              v57 = 103;
            LOBYTE(Response) = v57;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_1803392B0,
            word_1803392B0,
            "Function: ",
            L"CMILRefCountImpl::AddReference",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            23);
          if ( v55 )
          {
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
          }
          else
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &Response,
              &Response);
            __debugbreak();
          }
          if ( (char)Response > 98 )
          {
            if ( (char)Response == 103 )
              break;
            if ( (char)Response == 105 )
              goto LABEL_124;
            if ( (char)Response != 112 )
            {
              if ( (char)Response != 116 )
                goto LABEL_123;
              goto LABEL_121;
            }
LABEL_122:
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_123:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          }
          else
          {
            if ( (char)Response == 98 || (char)Response == 66 )
            {
              __debugbreak();
              break;
            }
            if ( (char)Response == 71 )
              break;
            if ( (char)Response != 73 )
            {
              if ( (char)Response != 80 )
              {
                if ( (char)Response != 84 )
                  goto LABEL_123;
LABEL_121:
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_123;
              }
              goto LABEL_122;
            }
LABEL_124:
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          }
        }
      }
      _InterlockedIncrement(v28 + 2);
      v7 = v67;
    }
    v29 = *(_QWORD *)(v27 + 8 * v26 + 8);
    *(_QWORD *)(v27 + 8 * v26 + 8) = v28;
    if ( v29 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v29);
  }
  v30 = *(_QWORD *)(v23 + 104);
  if ( *(float **)(v30 + 8 * v26 + 16) != v24 )
  {
    if ( v24 )
      (**(void (__fastcall ***)(float *))v24)(v24);
    v31 = *(_QWORD *)(v30 + 8 * v26 + 16);
    *(_QWORD *)(v30 + 8 * v26 + 16) = v24;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
  }
  *(_BYTE *)(v23 + 140) |= 4u;
  v14 = 0;
LABEL_30:
  if ( v66 )
    (*(void (__fastcall **)(float *))(*(_QWORD *)v66 + 8LL))(v66);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v67 + 24LL))(v67);
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        v60 = v67;
        --v7[2];
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v60 + 16LL))(v60, 1LL);
      }
    }
  }
  return v14;
}
