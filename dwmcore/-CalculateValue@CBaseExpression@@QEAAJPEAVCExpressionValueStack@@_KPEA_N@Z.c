__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER v5; // rdi
  __int64 v7; // rax
  bool v9; // zf
  char v10; // r12
  BOOL v11; // eax
  __int64 v12; // r12
  int v13; // esi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  CBaseExpression *v22; // rcx
  char v23; // r12
  __int64 Elapsed; // rax
  _QWORD *v25; // r15
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rax
  CExpressionValue *v30; // rax
  struct CExpressionValue *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  CExpressionValue *v40; // rax
  CExpressionValue *v41; // rcx
  __int64 v42; // rax
  CExpressionValue *v43; // rax
  bool v44; // si
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rdx
  unsigned int TracingCookie; // eax
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // r15d
  HANDLE EventW; // rsi
  __int64 v53; // rax
  struct CResource *v54; // rdx
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // r8
  __int64 v61; // rax
  char v63; // [rsp+30h] [rbp-D0h] BYREF
  bool v64; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v65; // [rsp+38h] [rbp-C8h]
  LARGE_INTEGER v66; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v70; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v71; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v72[80]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+E0h] [rbp-20h]
  __int128 v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+100h] [rbp+0h] BYREF
  int v78; // [rsp+108h] [rbp+8h]
  char v79; // [rsp+10Ch] [rbp+Ch]

  v4.QuadPart = 0LL;
  v5.QuadPart = 0LL;
  *a4 = 0;
  v7 = *((_QWORD *)this + 41);
  v70.QuadPart = (LONGLONG)a4;
  v9 = (*(_DWORD *)(v7 + 4) & 0x40000000) == 0;
  v68 = a3;
  v71.QuadPart = 0LL;
  v66.QuadPart = 0LL;
  v65 = 0LL;
  if ( !v9 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v10 = 1;
    v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 88LL;
    v11 = QueryPerformanceCounter(&PerformanceCount);
    a3 = v68;
    if ( v11 )
    {
      v5 = PerformanceCount;
      v71 = PerformanceCount;
    }
  }
  else
  {
    v10 = 0;
  }
  v67 = *((_DWORD *)a2 + 4);
  PerformanceCount.LowPart = *((_DWORD *)this + 72);
  if ( !*((_QWORD *)this + 37) )
    *((_QWORD *)this + 37) = a3;
  (*(void (__fastcall **)(CBaseExpression *, char *))(*(_QWORD *)this + 280LL))(this, &v63);
  if ( *((_BYTE *)this + 148) && !v63 )
  {
    v12 = v65;
    v13 = 0;
    goto LABEL_101;
  }
  *((_QWORD *)this + 21) = v68;
  if ( v10 )
  {
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
      v15 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL);
      ++*(_DWORD *)(v14 + 452);
      if ( (v15 & 0x40000000) != 0 )
        ++*(_DWORD *)(v14 + 456);
    }
  }
  v16 = v65;
  if ( v65 )
  {
    if ( QueryPerformanceCounter(&v66) )
      v4 = v66;
    v66 = v4;
  }
  if ( (*((_BYTE *)this + 232) & 2) == 0 )
  {
    v17 = 0LL;
    if ( *((_DWORD *)this + 66) )
    {
      while ( 1 )
      {
        v18 = *((_QWORD *)this + 30);
        v19 = *((_QWORD *)this + 21);
        v64 = 0;
        v20 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v18 + 8 * v17), a2, v19, &v64);
        v13 = v20;
        if ( v20 < 0 )
          break;
        CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * v17));
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *((_DWORD *)this + 66) )
          goto LABEL_23;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x343u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_18033A620, 2u, v13, 0x4B8u, 0LL);
      goto LABEL_96;
    }
LABEL_23:
    *((_BYTE *)this + 232) |= 2u;
    v16 = v65;
  }
  if ( !PerformanceCount.LowPart )
    CBaseExpression::NotifyAnimationStarted(this);
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, LARGE_INTEGER))(*(_QWORD *)this + 256LL))(
          this,
          a2,
          v68,
          v70);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033A620, 2u, v13, 0x4BFu, 0LL);
    goto LABEL_96;
  }
  v23 = 1;
  if ( v4.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v66);
    CExpressionPerformanceCounter::AddDurationSample(v16, 1LL, Elapsed);
    v4.QuadPart = 0LL;
    v66.QuadPart = 0LL;
  }
  v25 = &CExpressionValueStack::s_emptyValue;
  if ( v13 == 1 )
    goto LABEL_37;
  v26 = *((_DWORD *)a2 + 4);
  v23 = 0;
  if ( !v26 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_18033A620, 2u, -2147467259, 0x4D8u, 0LL);
LABEL_96:
    v12 = v65;
LABEL_97:
    v59 = *((_DWORD *)a2 + 4);
    if ( v59 > v67 )
    {
      v60 = v59 - v67;
      do
      {
        --v59;
        --v60;
      }
      while ( v60 );
      *((_DWORD *)a2 + 4) = v59;
    }
    goto LABEL_101;
  }
  v29 = (unsigned int)(v26 - 1);
  if ( (unsigned int)v29 < *((_DWORD *)a2 + 12) )
  {
    v31 = (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v29);
  }
  else
  {
    v30 = CExpressionValue::CExpressionValue((CExpressionValue *)Name);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v30);
    CExpressionValue::~CExpressionValue((CExpressionValue *)Name);
    v31 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  if ( !CBaseExpression::IsExpressionValueValid(v22, v31) )
  {
LABEL_37:
    v32 = *((_QWORD *)this + 23);
    v78 = 18;
    v77 = 0LL;
    v79 = 0;
    *(_OWORD *)Name = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    if ( !v32 || (v22 = *(CBaseExpression **)(v32 + 16)) == 0LL )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033A620, 2u, -2147024890, 0x4E2u, 0LL);
      goto LABEL_44;
    }
    v33 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, WCHAR *))(*(_QWORD *)v22 + 136LL))(
            v22,
            *((unsigned int *)this + 48),
            Name);
    v13 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033A620, 2u, v33, 0x4E4u, 0LL);
      goto LABEL_44;
    }
    v35 = *((_QWORD *)this + 25);
    if ( v35 )
    {
      if ( *(_BYTE *)(v35 + 4) )
      {
        v36 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v35);
        v13 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033A620, 2u, v36, 0x4EAu, 0LL);
LABEL_44:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v77);
          goto LABEL_96;
        }
      }
    }
    if ( v78 != *((_DWORD *)this + 38) )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033A620, 2u, -2147024809, 0x4EFu, 0LL);
      goto LABEL_44;
    }
    if ( v23 )
    {
      v37 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
      v13 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, &dword_18033A620, 2u, v37, 0x4F4u, 0LL);
        goto LABEL_44;
      }
    }
    else
    {
      v39 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v39 < *((_DWORD *)a2 + 12) )
      {
        v41 = (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v39);
      }
      else
      {
        v40 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v40);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
        v41 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      }
      CExpressionValue::CopyFrom(v41, (const struct CExpressionValue *)Name);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v77);
  }
  if ( *((_DWORD *)a2 + 4) != v67 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033A620, 2u, -2147467259, 0x508u, 0LL);
    goto LABEL_96;
  }
  v12 = v65;
  if ( v65 )
  {
    v4.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v70) )
      v4 = v70;
    v66 = v4;
  }
  v42 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v42 < *((_DWORD *)a2 + 12) )
  {
    v25 = (_QWORD *)(*((_QWORD *)a2 + 3) + 80 * v42);
  }
  else
  {
    v43 = CExpressionValue::CExpressionValue((CExpressionValue *)v72);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v43);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v72);
  }
  v44 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
    v44 = (unsigned __int8)CExpressionValue::operator==((char *)this + 72) == 0;
  switch ( *((_DWORD *)v25 + 18) )
  {
    case 0xB:
      v47 = v25[8];
      *((_DWORD *)this + 36) = 11;
      *((_BYTE *)this + 148) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 136, v47);
      break;
    case 0x11:
      *((_BYTE *)this + 72) = *(_BYTE *)v25;
      *((_DWORD *)this + 36) = 17;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x12:
      *((_DWORD *)this + 18) = *(_DWORD *)v25;
      *((_DWORD *)this + 36) = 18;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x23:
      *((_DWORD *)this + 36) = 35;
      *((_QWORD *)this + 9) = *v25;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x2A:
      *((_DWORD *)this + 36) = 42;
      *((_DWORD *)this + 18) = *(_DWORD *)v25;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x34:
      *((_DWORD *)this + 36) = 52;
      *((_QWORD *)this + 9) = *v25;
      *((_DWORD *)this + 20) = *((_DWORD *)v25 + 2);
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x45:
      *((_DWORD *)this + 36) = 69;
      goto LABEL_74;
    case 0x46:
      *((_DWORD *)this + 36) = 70;
      goto LABEL_74;
    case 0x47:
      *((_DWORD *)this + 36) = 71;
LABEL_74:
      v45 = *(_OWORD *)v25;
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 72) = v45;
      break;
    case 0x68:
      *((_DWORD *)this + 36) = 104;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v25;
      *((_QWORD *)this + 11) = v25[2];
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x109:
      *((_DWORD *)this + 36) = 265;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v25;
      *(_OWORD *)((char *)this + 88) = *((_OWORD *)v25 + 1);
      *(_OWORD *)((char *)this + 104) = *((_OWORD *)v25 + 2);
      v46 = *((_OWORD *)v25 + 3);
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 120) = v46;
      break;
    default:
      break;
  }
  if ( v44 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v49 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v51 = v49;
    v13 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x276u, 0LL);
      goto LABEL_91;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 216) & 3) == 3 )
  {
    v53 = *((_QWORD *)this + 23);
    if ( !v53 || (v54 = *(struct CResource **)(v53 + 16)) == 0LL )
    {
      v13 = -2147024890;
      v51 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, -2147024890, 0x287u, 0LL);
      goto LABEL_91;
    }
    v55 = CBaseExpression::SetOutputValueOnTarget(this, v54);
    v51 = v55;
    v13 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x288u, 0LL);
LABEL_91:
      MilInstrumentationCheckHR_MaybeFailFast(v57, &dword_18033A620, 2u, v51, 0x515u, 0LL);
      goto LABEL_97;
    }
  }
  if ( v4.QuadPart )
  {
    v58 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v66);
    CExpressionPerformanceCounter::AddDurationSample(v12, 5LL, v58);
  }
  --*((_DWORD *)a2 + 4);
  v13 = 0;
LABEL_101:
  if ( v5.QuadPart )
  {
    v61 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v71);
    CExpressionPerformanceCounter::AddDurationSample(v12, 0LL, v61);
  }
  return (unsigned int)v13;
}
