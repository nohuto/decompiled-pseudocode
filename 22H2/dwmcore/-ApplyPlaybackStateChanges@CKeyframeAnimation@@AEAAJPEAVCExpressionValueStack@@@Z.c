/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800ABBA8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800AB420 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800197D8 (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A9DC8 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A9ECC (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800AC8EC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x1800ACEE4 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800ACF80 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800AD0B4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801D178C (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801D1A28 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801DA470 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  struct CChannelContext *v7; // rdx
  __int64 v8; // rax
  CExpressionManager *v9; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // ecx
  __int64 v18; // rcx
  CExpressionValue *v19; // rax
  const struct CExpressionValue *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  char v26; // cl
  char v27; // al
  char v28; // cl
  __int64 v29; // rcx
  float v30; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rcx
  float v33; // xmm1_4
  __int64 v34; // rax
  LONGLONG v35; // rax
  float v36; // xmm0_4
  int v37; // eax
  __int64 v38; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _BYTE v42[80]; // [rsp+30h] [rbp-58h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v44; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 133);
  v5 = *((_DWORD *)this + 132);
  if ( v4 != v5 )
  {
    if ( v5 )
    {
      if ( !v4 )
      {
        v11 = *((_QWORD *)this + 22);
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 16);
        else
          v12 = 0LL;
        if ( v12 )
        {
          v13 = *((_DWORD *)a2 + 4);
          v14 = CKeyframeAnimation::Reset(this, 1, a2);
          v16 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x348u, 0LL);
            return v16;
          }
          v17 = *((_DWORD *)a2 + 4);
          if ( v17 == v13 + 1 )
          {
            v18 = (unsigned int)(v17 - 1);
            if ( (unsigned int)v18 < *((_DWORD *)a2 + 12) )
            {
              v20 = (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v18);
            }
            else
            {
              v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v42);
              v20 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
              CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v42);
            }
            v21 = CBaseExpression::SetOutputValue(this, v20);
            v16 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x356u, 0LL);
              return v16;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v23 = *((_QWORD *)this + 52);
        if ( v23 )
        {
          if ( (*(_BYTE *)(v23 + 112) & 4) != 0 )
          {
            v24 = CBaseExpression::NotifyAnimationCompleted(this);
            v16 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x35Fu, 0LL);
              return v16;
            }
          }
        }
        goto LABEL_30;
      }
      if ( v4 == 2 )
      {
LABEL_28:
        CKeyframeAnimation::Pause(this);
LABEL_30:
        *((_BYTE *)this + 548) &= ~1u;
        v5 = *((_DWORD *)this + 133);
        if ( v5 == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL) + 416LL) |= 2u;
          *((_BYTE *)this + 548) |= 1u;
          v5 = *((_DWORD *)this + 133);
        }
        *((_DWORD *)this + 132) = v5;
        goto LABEL_33;
      }
    }
    else if ( v4 )
    {
      CKeyframeAnimation::Play(this, a2);
      v6 = *((_QWORD *)this + 2);
      v7 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v8 = *(_QWORD *)(v6 + 456) - *((_QWORD *)this + 58);
      v9 = *(CExpressionManager **)(v6 + 272);
      v44 = v8;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v9, v7);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v44) * *((float *)this + 124))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 133) != 2 )
        goto LABEL_30;
      goto LABEL_28;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 59) = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
    goto LABEL_30;
  }
LABEL_33:
  if ( v5 )
  {
    v26 = *((_BYTE *)this + 548);
    v27 = v26 & 4;
    v28 = v26 & 2;
    if ( v28 && v27 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    if ( v28 )
    {
      v29 = *((_QWORD *)this + 61);
      if ( v29 < 0 )
      {
        v31 = *((_QWORD *)this + 61) & 1LL | (*((_QWORD *)this + 61) >> 1);
        v30 = (float)(int)v31 + (float)(int)v31;
      }
      else
      {
        v30 = (float)(int)v29;
      }
      v32 = *((_QWORD *)this + 60);
      v33 = v30 / 10000000.0;
      v34 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
      if ( v32 != v34 )
      {
        v35 = (unsigned __int64)(v34 - v32) / g_qpcFrequency.QuadPart;
        if ( v35 < 0 )
          v36 = (float)(v35 & 1 | (unsigned int)((unsigned __int64)v35 >> 1))
              + (float)(v35 & 1 | (unsigned int)((unsigned __int64)v35 >> 1));
        else
          v36 = (float)(int)v35;
        v33 = v33 + v36;
      }
      v37 = CKeyframeAnimation::TimeSeek(this, v33);
      v16 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3A8u, 0LL);
        return v16;
      }
      *((_QWORD *)this + 59) = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
    }
    else if ( v27 )
    {
      v40 = CKeyframeAnimation::ProgressSeek(this, *((float *)this + 125));
      v16 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x3B0u, 0LL);
        return v16;
      }
    }
  }
  return 0;
}
