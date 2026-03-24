/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800737D0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800AB420 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800ACD7C (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8E9C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CD010 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801D1478 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180064EAC (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180073B10 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180074560 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180074D00 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180074F50 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A9CF0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AC338 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B2544 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC514 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800D5088 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AAF4C (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B1408 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B149C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801D9B38 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        LARGE_INTEGER *this,
        struct CExpressionValueStack *a2,
        LARGE_INTEGER a3,
        bool *a4)
{
  __int64 v4; // r12
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v8; // rax
  int v11; // ecx
  char v12; // si
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // ecx
  char QuadPart; // al
  __int64 v18; // r15
  LARGE_INTEGER v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  CBaseExpression *v23; // rcx
  __int64 Elapsed; // rax
  _QWORD *v25; // r15
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  CExpressionValue *v29; // rax
  struct CExpressionValue *v30; // rdx
  LARGE_INTEGER v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  LARGE_INTEGER v34; // rdx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  CExpressionValue *v39; // rax
  CExpressionValue *v40; // rcx
  CBaseExpression *v41; // rcx
  __int64 v42; // rax
  CExpressionValue *v43; // rax
  LARGE_INTEGER v44; // rax
  bool v45; // si
  __int64 v46; // rcx
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rdx
  unsigned int TracingCookie; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // r15d
  HANDLE EventW; // rsi
  LARGE_INTEGER v55; // rax
  struct CResource *v56; // rdx
  int v57; // eax
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rax
  bool v63; // [rsp+30h] [rbp-D0h] BYREF
  char v64[7]; // [rsp+31h] [rbp-CFh] BYREF
  LARGE_INTEGER v65; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  DWORD LowPart; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v69; // [rsp+58h] [rbp-A8h] BYREF
  bool *v70; // [rsp+60h] [rbp-A0h]
  _BYTE v71[80]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+F0h] [rbp-10h]
  CBaseExpression *v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+108h] [rbp+8h]
  char v78; // [rsp+10Ch] [rbp+Ch]

  v4 = 0LL;
  v5.QuadPart = 0LL;
  v6.QuadPart = 0LL;
  *a4 = 0;
  v8 = this[38];
  v70 = a4;
  v11 = *(_DWORD *)(v8.QuadPart + 4) >> 31;
  v69 = a3;
  PerformanceCount.QuadPart = 0LL;
  v65.QuadPart = 0LL;
  if ( (_BYTE)v11 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v12 = 1;
    v4 = *(_QWORD *)(this[2].QuadPart + 272) + 88LL;
    if ( QueryPerformanceCounter(&PerformanceCount) )
      v6 = PerformanceCount;
    PerformanceCount = v6;
  }
  else
  {
    v12 = 0;
  }
  v66 = *((_DWORD *)a2 + 4);
  LowPart = this[33].LowPart;
  if ( !this[34].QuadPart )
    this[34] = a3;
  (*(void (__fastcall **)(LARGE_INTEGER *, char *))(this->QuadPart + 280))(this, v64);
  if ( BYTE4(this[17].QuadPart) && !v64[0] )
  {
    v14 = 0;
    goto LABEL_111;
  }
  this[20] = a3;
  if ( v12 )
  {
    if ( (this[26].LowPart & 2) != 0 )
    {
      v15 = *(_QWORD *)(this[2].QuadPart + 272);
      v16 = *(_DWORD *)(this[38].QuadPart + 4);
      ++*(_DWORD *)(v15 + 420);
      v13 = v16 >> 31;
      if ( (_BYTE)v13 )
        ++*(_DWORD *)(v15 + 424);
    }
  }
  if ( v4 )
  {
    if ( QueryPerformanceCounter(&v65) )
      v5 = v65;
    v65 = v5;
  }
  QuadPart = this[26].QuadPart;
  if ( (QuadPart & 0x20) != 0 )
    goto LABEL_26;
  v18 = 0LL;
  if ( !this[30].LowPart )
  {
LABEL_25:
    LOBYTE(this[26].LowPart) = QuadPart | 0x20;
LABEL_26:
    v14 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v19 = this[27];
    v20 = this[20].QuadPart;
    v63 = 0;
    v21 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v19.QuadPart + 8 * v18), a2, v20, &v63);
    v14 = v21;
    if ( v21 < 0 )
      break;
    CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(this[27].QuadPart + 8 * v18));
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= this[30].LowPart )
    {
      QuadPart = this[26].QuadPart;
      goto LABEL_25;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2CEu, 0LL);
LABEL_27:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802CE578, 2u, v14, 0x401u, 0LL);
LABEL_107:
    v59 = *((_DWORD *)a2 + 4);
    if ( v59 > v66 )
    {
      v60 = v59 - v66;
      do
      {
        --v59;
        --v60;
      }
      while ( v60 );
      *((_DWORD *)a2 + 4) = v59;
    }
    goto LABEL_111;
  }
  if ( !LowPart )
    CBaseExpression::NotifyAnimationStarted((CBaseExpression *)this);
  v14 = (*(__int64 (__fastcall **)(LARGE_INTEGER *, struct CExpressionValueStack *, LARGE_INTEGER, bool *))(this->QuadPart + 256))(
          this,
          a2,
          v69,
          v70);
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, v14, 0x408u, 0LL);
    goto LABEL_107;
  }
  if ( v5.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v65);
    ++*(_DWORD *)(v4 + 4);
    v5.QuadPart = 0LL;
    *(_QWORD *)(v4 + 32) += Elapsed;
    v65.QuadPart = 0LL;
  }
  v25 = &CExpressionValueStack::s_emptyValue;
  if ( v14 == 1 )
  {
    v63 = 1;
LABEL_42:
    v31 = this[22];
    v77 = 18;
    v76 = 0LL;
    v78 = 0;
    *(_OWORD *)Name = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    if ( !v31.QuadPart || (v23 = *(CBaseExpression **)(v31.QuadPart + 16)) == 0LL )
    {
      v14 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, -2147024890, 0x42Bu, 0LL);
      if ( v76 )
        (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v76 + 16LL))(v76);
      goto LABEL_107;
    }
    v32 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, WCHAR *))(*(_QWORD *)v23 + 144LL))(
            v23,
            this[23].LowPart,
            Name);
    v14 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, v32, 0x42Du, 0LL);
LABEL_63:
      v41 = v76;
      if ( v76 )
      {
        v76 = 0LL;
        (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v41 + 16LL))(v41);
      }
      goto LABEL_107;
    }
    v34 = this[24];
    if ( v34.QuadPart )
    {
      if ( *(_BYTE *)(v34.QuadPart + 4) )
      {
        v35 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v34.QuadPart);
        v14 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, v35, 0x433u, 0LL);
          goto LABEL_63;
        }
      }
    }
    if ( v77 != this[18].LowPart )
    {
      v14 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802CE578, 2u, -2147024809, 0x438u, 0LL);
      goto LABEL_63;
    }
    if ( v63 )
    {
      v36 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
      v14 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_1802CE578, 2u, v36, 0x43Du, 0LL);
        goto LABEL_63;
      }
    }
    else
    {
      v38 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v38 < *((_DWORD *)a2 + 12) )
      {
        v40 = (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v38);
      }
      else
      {
        v39 = CExpressionValue::CExpressionValue((CExpressionValue *)v71);
        CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v39);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v71);
        v40 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      }
      CExpressionValue::CopyFrom(v40, (const struct CExpressionValue *)Name);
    }
    v23 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(CBaseExpression *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_60;
  }
  v26 = *((_DWORD *)a2 + 4);
  v63 = 0;
  if ( !v26 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)this);
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802CE578, 2u, -2147467259, 0x421u, 0LL);
    goto LABEL_107;
  }
  v28 = (unsigned int)(v26 - 1);
  if ( (unsigned int)v28 < *((_DWORD *)a2 + 12) )
  {
    v30 = (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v28);
  }
  else
  {
    v29 = CExpressionValue::CExpressionValue((CExpressionValue *)Name);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v29);
    CExpressionValue::~CExpressionValue((CExpressionValue *)Name);
    v30 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  if ( !CBaseExpression::IsExpressionValueValid(v23, v30) )
    goto LABEL_42;
LABEL_60:
  if ( *((_DWORD *)a2 + 4) != v66 + 1 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, &dword_1802CE578, 2u, -2147467259, 0x451u, 0LL);
    goto LABEL_107;
  }
  if ( v4 )
  {
    v5.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v69) )
      v5 = v69;
    v65 = v5;
  }
  v42 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v42 < *((_DWORD *)a2 + 12) )
  {
    v25 = (_QWORD *)(*((_QWORD *)a2 + 3) + 80 * v42);
  }
  else
  {
    v43 = CExpressionValue::CExpressionValue((CExpressionValue *)v71);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v43);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v71);
  }
  v44 = this[38];
  v45 = 0;
  v46 = *(_DWORD *)(v44.QuadPart + 4) >> 31;
  if ( *(int *)(v44.QuadPart + 4) < 0 )
    v45 = (unsigned __int8)CExpressionValue::operator==(&this[8]) == 0;
  switch ( *((_DWORD *)v25 + 18) )
  {
    case 0xB:
      v49 = v25[8];
      this[17].LowPart = 11;
      BYTE4(this[17].QuadPart) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=(&this[16], v49);
      break;
    case 0x11:
      LOBYTE(this[8].LowPart) = *(_BYTE *)v25;
      this[17].LowPart = 17;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x12:
      this[8].LowPart = *(_DWORD *)v25;
      this[17].LowPart = 18;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x23:
      this[17].LowPart = 35;
      this[8] = *(LARGE_INTEGER *)v25;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x2A:
      this[17].LowPart = 42;
      this[8].LowPart = *(_DWORD *)v25;
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x34:
      this[17].LowPart = 52;
      this[8] = *(LARGE_INTEGER *)v25;
      this[9].LowPart = *((_DWORD *)v25 + 2);
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x45:
      this[17].LowPart = 69;
      goto LABEL_82;
    case 0x46:
      this[17].LowPart = 70;
      goto LABEL_82;
    case 0x47:
      this[17].LowPart = 71;
LABEL_82:
      v47 = *(_OWORD *)v25;
      BYTE4(this[17].QuadPart) = 1;
      *(_OWORD *)&this[8].LowPart = v47;
      break;
    case 0x68:
      this[17].LowPart = 104;
      *(_OWORD *)&this[8].LowPart = *(_OWORD *)v25;
      this[10] = (LARGE_INTEGER)v25[2];
      BYTE4(this[17].QuadPart) = 1;
      break;
    case 0x109:
      this[17].LowPart = 265;
      *(_OWORD *)&this[8].LowPart = *(_OWORD *)v25;
      *(_OWORD *)&this[10].LowPart = *((_OWORD *)v25 + 1);
      *(_OWORD *)&this[12].LowPart = *((_OWORD *)v25 + 2);
      v48 = *((_OWORD *)v25 + 3);
      BYTE4(this[17].QuadPart) = 1;
      *(_OWORD *)&this[14].LowPart = v48;
      break;
    default:
      break;
  }
  if ( v45 )
  {
    CBaseExpression::LogSetOutputValue((CBaseExpression *)this);
    TracingCookie = CBaseExpression::GetTracingCookie((CBaseExpression *)this);
    v51 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v53 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x201u, 0LL);
      goto LABEL_101;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (this[26].LowPart & 3) != 3 )
    goto LABEL_100;
  v55 = this[22];
  if ( !v55.QuadPart || (v56 = *(struct CResource **)(v55.QuadPart + 16)) == 0LL )
  {
    v14 = -2147024890;
    v53 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, -2147024890, 0x212u, 0LL);
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(v46, &dword_1802CE578, 2u, v53, 0x45Eu, 0LL);
    goto LABEL_107;
  }
  v57 = CBaseExpression::SetOutputValueOnTarget((CBaseExpression *)this, v56);
  v53 = v57;
  if ( v57 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v57, 0x213u, 0LL);
  else
LABEL_100:
    v53 = 0;
LABEL_101:
  v14 = v53;
  if ( v53 < 0 )
    goto LABEL_99;
  if ( v5.QuadPart )
  {
    v58 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v65);
    ++*(_DWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 64) += v58;
  }
  --*((_DWORD *)a2 + 4);
  v14 = 0;
LABEL_111:
  if ( v6.QuadPart )
  {
    v61 = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    ++*(_DWORD *)v4;
    *(_QWORD *)(v4 + 24) += v61;
  }
  return (unsigned int)v14;
}
