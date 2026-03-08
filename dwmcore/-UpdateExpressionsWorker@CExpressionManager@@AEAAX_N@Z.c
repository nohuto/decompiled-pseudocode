/*
 * XREFs of ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180053950
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18002718C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA970 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180213984 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18022FA20 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x18025FC48 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 */

void __fastcall CExpressionManager::UpdateExpressionsWorker(CExpressionManager *this, char a2)
{
  unsigned int v4; // r13d
  __int64 v5; // rdx
  unsigned int v6; // ebp
  CBaseExpression *v7; // rsi
  char v8; // al
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r15d
  unsigned int v14; // edx
  __int64 v15; // rsi
  char v16; // bp
  __int64 v17; // rcx
  int v18; // eax
  char v19; // al
  bool v20; // zf
  const char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // r14d
  unsigned int i; // r14d
  int v28; // eax
  unsigned int v29; // ecx
  char *v30; // r14
  unsigned int v31; // esi
  char *j; // r15
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r8
  int v36; // eax
  unsigned int v37; // ecx
  BOOL v38; // eax
  LARGE_INTEGER v39; // rcx
  __int64 v40; // rcx
  __int64 Elapsed; // rax
  bool v42; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  __int64 v45; // [rsp+48h] [rbp-50h] BYREF
  char v46; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = 0;
  if ( (*((_BYTE *)this + 448) & 8) == 0 )
    goto LABEL_2;
  PerformanceCount.QuadPart = 0LL;
  if ( CCommonRegistryData::LogExpressionPerfStats )
  {
    v38 = QueryPerformanceCounter(&PerformanceCount);
    v39.QuadPart = 0LL;
    if ( v38 )
      v39 = PerformanceCount;
    PerformanceCount = v39;
  }
  v12 = *((unsigned int *)this + 41);
  v13 = 0;
  if ( *((_DWORD *)this + 8 * v12 + 48) )
  {
    v14 = CBaseExpression::s_recursionLevel;
    while ( 1 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 4 * (unsigned int)v12 + 21) + 8LL * v13);
      if ( v15 )
        break;
LABEL_32:
      ++v13;
      LODWORD(v12) = *((_DWORD *)this + 41);
      if ( v13 >= *((_DWORD *)this + 8 * (unsigned int)v12 + 48) )
        goto LABEL_33;
    }
    v16 = 0;
    v17 = *((_QWORD *)this + 3);
    v18 = *(_DWORD *)(v15 + 156) + 1;
    v45 = v17;
    v46 = a2;
    *(_DWORD *)(v15 + 156) = v18;
    if ( v18 <= 1 )
    {
      v19 = 0;
      if ( a2 && *(_QWORD *)(v15 + 224) != v17 )
      {
        *(_QWORD *)(v15 + 224) = v17;
        v19 = 1;
      }
      if ( (*(_QWORD *)(v15 + 160) != v17 || v19) && v14 <= 0x10 )
      {
        v16 = 1;
        v20 = (*(_BYTE *)(v15 + 232) & 2) == 0;
        CBaseExpression::s_recursionLevel = v14 + 1;
        if ( v20 )
        {
          for ( i = 0; i < *(_DWORD *)(v15 + 264); ++i )
            CBaseExpression::InsertInOrder(
              *(CBaseExpression **)(*(_QWORD *)(v15 + 240) + 8LL * i),
              (const struct ExpressionWalkContext *)&v45);
        }
        if ( *(_DWORD *)(v15 + 212) == 90 )
        {
          v40 = *(_QWORD *)(*(_QWORD *)(v15 + 184) + 16LL);
          if ( v40 )
            CInteractionTracker::InsertDependenciesForProperty(v40, &v45, *(unsigned int *)(v15 + 192));
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 200LL))(v15, &v45);
        if ( (*(_BYTE *)(v15 + 216) & 2) != 0 )
        {
          v22 = *(_QWORD *)(v15 + 16);
          v44 = v15;
          if ( (*(_BYTE *)(v15 + 232) & 8) == 0 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xF1,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
              v21);
          v23 = *(_QWORD *)(v22 + 424) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v22 + 424) + 164LL));
          v24 = *(_DWORD *)(v23 + 192);
          v25 = v24 + 1;
          if ( v24 + 1 < v24 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)retaddr, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else if ( v25 > *(_DWORD *)(v23 + 188) )
          {
            v28 = DynArrayImpl<1>::AddMultipleAndSet(v23 + 168, 8u, v23, &v44);
            if ( v28 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC0u, 0LL);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v23 + 168) + 8LL * v24) = v15;
            *(_DWORD *)(v23 + 192) = v25;
          }
          v14 = CBaseExpression::s_recursionLevel;
          *(_QWORD *)(v15 + 160) = v45;
LABEL_30:
          CBaseExpression::s_recursionLevel = --v14;
LABEL_31:
          --*(_DWORD *)(v15 + 156);
          goto LABEL_32;
        }
        v17 = v45;
        v14 = CBaseExpression::s_recursionLevel;
      }
    }
    *(_QWORD *)(v15 + 160) = v17;
    if ( !v16 )
      goto LABEL_31;
    goto LABEL_30;
  }
LABEL_33:
  *((_DWORD *)this + 8 * (unsigned int)v12 + 48) = 0;
  v26 = 1 - *((_DWORD *)this + 41);
  *((_BYTE *)this + 448) &= ~8u;
  *((_DWORD *)this + 41) = v26;
  if ( CCommonRegistryData::LogExpressionPerfStats )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    CExpressionPerformanceCounter::AddDurationSample((char *)this + 88, 2LL, Elapsed);
  }
LABEL_2:
  v5 = *((unsigned int *)this + 41);
  v6 = 0;
  *(_QWORD *)((char *)this + 452) = 0LL;
  if ( *((_DWORD *)this + 8 * v5 + 48) )
  {
    do
    {
      v7 = *(CBaseExpression **)(*((_QWORD *)this + 4 * (unsigned int)v5 + 21) + 8LL * v6);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)v7 + 56LL))(v7, 92LL) )
        {
          v8 = *((_BYTE *)v7 + 580);
          if ( (v8 & 1) != 0 || (v8 & 6) != 0 )
          {
            v11 = *((_QWORD *)v7 + 6);
            if ( v11 )
            {
              ++*(_DWORD *)(v11 + 84);
              *(_BYTE *)(*((_QWORD *)v7 + 2) + 1273LL) = 1;
            }
          }
        }
        v9 = *((_QWORD *)this + 3);
        v42 = 0;
        CBaseExpression::CalculateValue(v7, (CExpressionManager *)((char *)this + 32), v9, &v42);
        *((_BYTE *)this + 448) |= 2 * v42;
      }
      else
      {
        ++v4;
      }
      v10 = *((unsigned int *)this + 41);
      ++v6;
      LODWORD(v5) = *((_DWORD *)this + 41);
    }
    while ( v6 < *((_DWORD *)this + 8 * v10 + 48) );
    if ( v4 > 0x100 )
    {
      v30 = (char *)this + 32 * v10;
      v31 = 0;
      for ( j = (char *)this + 32 * (unsigned int)(1 - v10); v31 < *((_DWORD *)v30 + 48); ++v31 )
      {
        v33 = *(_QWORD *)(*((_QWORD *)v30 + 21) + 8LL * v31);
        v44 = v33;
        if ( v33 )
        {
          v34 = *((_DWORD *)j + 48);
          v35 = v34 + 1;
          if ( (unsigned int)v35 < v34 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else if ( (unsigned int)v35 > *((_DWORD *)j + 47) )
          {
            v36 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(j + 168), 8u, v35, &v44);
            if ( v36 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xC0u, 0LL);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)j + 21) + 8LL * v34) = v33;
            *((_DWORD *)j + 48) = v35;
          }
        }
      }
      *((_DWORD *)v30 + 48) = 0;
      *((_DWORD *)this + 41) = 1 - *((_DWORD *)this + 41);
    }
  }
}
