/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x180020014 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z @ 0x1800244E0 (-GetGlobalPlaybackRate@CExpressionManager@@QEAAMPEAVCChannelContext@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800BAE5C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800BC454 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800BCC10 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BCD94 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800E3CC4 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800EDB4C (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     fmod_0 @ 0x180117734 (fmod_0.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x180236760 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v3; // ecx
  int v5; // eax
  __int64 v6; // rcx
  struct CChannelContext *v7; // rdx
  __int64 v8; // rax
  CExpressionManager *v9; // rcx
  float GlobalPlaybackRate; // xmm0_4
  __int64 v11; // rax
  int v12; // ebp
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  int v16; // ecx
  __int64 v17; // rcx
  CExpressionValue *v18; // rax
  const struct CExpressionValue *v19; // rdi
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ecx
  char v25; // al
  char v26; // cl
  __int64 v27; // rcx
  float v28; // xmm1_4
  __int64 v29; // rax
  __int64 v30; // rcx
  float v31; // xmm1_4
  __int64 v32; // rax
  LONGLONG v33; // rax
  float v34; // xmm0_4
  int v35; // eax
  unsigned int v36; // ecx
  float v37; // xmm3_4
  unsigned __int8 v38; // bp
  float v39; // xmm0_4
  __int64 v40; // r14
  int v41; // r8d
  float v42; // xmm0_4
  int v43; // ecx
  __m128 v44; // xmm2
  __m128 v45; // rt1
  int v46; // edi
  int v47; // edx
  float v48; // xmm1_4
  float v49; // xmm7_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  int v52; // ecx
  __m128 v53; // xmm2
  __m128 v54; // rt1
  float v55; // xmm8_4
  float v56; // xmm1_4
  float v57; // xmm0_4
  int v58; // edx
  int v59; // eax
  int v60; // xmm1_4
  char v61; // cl
  char v62; // cl
  __int64 v63; // rdx
  char v64; // cl
  int v65; // ecx
  char v66; // al
  bool v67; // cc
  KeyframeSequence *v68; // rcx
  __int64 v69; // rcx
  float TimePositionWithinIteration; // xmm2_4
  __int64 v72; // r10
  float v73; // xmm1_4
  __int64 v74; // r8
  float v75; // xmm0_4
  int v76; // eax
  float v77; // xmm0_4
  int v78; // edi
  __m128 v79; // xmm2
  __m128 v80; // rt1
  __int64 v81; // rcx
  float v82; // xmm2_4
  int v83; // r9d
  int v84; // edx
  float v85; // xmm2_4
  int v86; // r8d
  unsigned int v87; // ecx
  unsigned int v88; // [rsp+20h] [rbp-C8h]
  _BYTE v89[96]; // [rsp+30h] [rbp-B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  __int128 v91; // [rsp+F0h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 141);
  v5 = *((_DWORD *)this + 140);
  if ( v3 != v5 )
  {
    if ( v5 )
    {
      if ( !v3 )
      {
        v11 = *((_QWORD *)this + 23);
        if ( v11 && *(_QWORD *)(v11 + 16) )
        {
          v12 = *((_DWORD *)a2 + 4);
          v13 = CKeyframeAnimation::Reset(this, 1, a2);
          v15 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x35Bu, 0LL);
            return v15;
          }
          v16 = *((_DWORD *)a2 + 4);
          if ( v16 == v12 + 1 )
          {
            v17 = (unsigned int)(v16 - 1);
            if ( (unsigned int)v17 < *((_DWORD *)a2 + 12) )
            {
              v19 = (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v17);
            }
            else
            {
              v18 = CExpressionValue::CExpressionValue((CExpressionValue *)v89);
              v19 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
              CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v18);
              CExpressionValue::~CExpressionValue((CExpressionValue *)v89);
            }
            v20 = CBaseExpression::SetOutputValue(this, v19);
            v15 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x369u, 0LL);
              return v15;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v22 = *((_QWORD *)this + 56);
        if ( v22 )
        {
          if ( *(_BYTE *)(v22 + 122) )
          {
            v23 = CBaseExpression::NotifyAnimationCompleted(this);
            v15 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x372u, 0LL);
              return v15;
            }
          }
        }
        goto LABEL_26;
      }
      if ( v3 == 2 )
      {
LABEL_7:
        CKeyframeAnimation::Pause(this);
LABEL_26:
        *((_BYTE *)this + 580) &= ~1u;
        if ( *((_DWORD *)this + 141) == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 2u;
          *((_BYTE *)this + 580) |= 1u;
        }
        v5 = *((_DWORD *)this + 141);
        *((_DWORD *)this + 140) = v5;
        goto LABEL_29;
      }
    }
    else if ( v3 )
    {
      CKeyframeAnimation::Play(this, a2);
      v6 = *((_QWORD *)this + 2);
      v7 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v8 = *(_QWORD *)(v6 + 608) - *((_QWORD *)this + 62);
      v9 = *(CExpressionManager **)(v6 + 424);
      *(_QWORD *)&v91 = v8;
      GlobalPlaybackRate = CExpressionManager::GetGlobalPlaybackRate(v9, v7);
      if ( (float)(GlobalPlaybackRate
                 * (float)((float)(int)TimeDelta::ToMilliseconds((TimeDelta *)&v91) * *((float *)this + 132))) > 0.0 )
        CKeyframeAnimation::UpdateTime(this, 0);
      if ( *((_DWORD *)this + 141) != 2 )
        goto LABEL_26;
      goto LABEL_7;
    }
    CKeyframeAnimation::Play(this, a2);
    *((_QWORD *)this + 63) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
    goto LABEL_26;
  }
LABEL_29:
  if ( !v5 )
    return 0;
  v25 = *((_BYTE *)this + 580);
  v26 = v25 & 4;
  if ( (v25 & 2) == 0 )
  {
    if ( v26 )
    {
      v37 = *((float *)this + 133);
      if ( v37 < 0.0 || v37 > 1.0 )
      {
        v15 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA50,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
          (const char *)0x80070057LL,
          v88);
        MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, -2147024809, 0x3C3u, 0LL);
        return v15;
      }
      v38 = *((_BYTE *)this + 581);
      if ( (v38 & 1) != 0 && (v38 & 2) == 0 )
      {
        v39 = 0.0;
        v40 = *((_QWORD *)this + 49);
        v41 = *(_DWORD *)(v40 + 112);
        if ( v41 > 0 )
          v39 = (float)*(int *)(*(_QWORD *)(v40 + 104) + 24LL * (unsigned int)(v41 - 1)) / 1000.0;
        v42 = v39 * 1000.0;
        *(float *)&v91 = v42;
        if ( (LODWORD(v42) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v44 = 0LL;
          v44.m128_f32[0] = (float)(int)v42 - v42;
          v45.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v91) = _mm_cmple_ss(v44, v45).m128_u32[0];
          v43 = (int)v42 - v91;
        }
        else
        {
          *(float *)&v91 = v42 + 6291456.25;
          v43 = (int)((_DWORD)v91 << 10) >> 11;
        }
        v46 = *((_DWORD *)this + 136);
        v47 = 0;
        if ( v46 > 0 )
          v43 *= v46 + 1;
        if ( *((_DWORD *)this + 134) == 1 && *((_DWORD *)this + 122) )
          v47 = *((_DWORD *)this + 122);
        v48 = 0.0;
        v49 = (float)(v47 + v43) * v37;
        v50 = v49 - (float)v47;
        if ( v41 > 0 )
          v48 = (float)*(int *)(*(_QWORD *)(v40 + 104) + 24LL * (unsigned int)(v41 - 1)) / 1000.0;
        v51 = v48 * 1000.0;
        *(float *)&v91 = v51;
        if ( (LODWORD(v51) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v53 = 0LL;
          v53.m128_f32[0] = (float)(int)v51 - v51;
          v54.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v91) = _mm_cmple_ss(v53, v54).m128_u32[0];
          v52 = (int)v51 - v91;
        }
        else
        {
          *(float *)&v91 = v51 + 6291456.25;
          v52 = (int)((_DWORD)v91 << 10) >> 11;
        }
        v55 = v50 / (float)v52;
        v56 = fmod_0(v50, (double)v52);
        if ( v56 == 0.0 )
          v57 = fmaxf(0.0, v55 - 1.0);
        else
          v57 = v55;
        v58 = (int)v57;
        *((_DWORD *)this + 135) = (int)v57;
        if ( v46 > 0 )
          *((_DWORD *)this + 137) = v46 - v58;
        v59 = *((_DWORD *)this + 143);
        v60 = (int)FLOAT_1_0;
        if ( v59 )
        {
          if ( v59 == 2 )
          {
            v61 = *((_BYTE *)this + 581) >> 3;
            if ( (v58 & 1) != 0 )
              v61 = ~(*((_BYTE *)this + 581) >> 3);
          }
          else
          {
            v61 = 0;
          }
        }
        else
        {
          v61 = v38 >> 3;
        }
        if ( v46 >= 0 && v58 == v46 && *((float *)this + 138) != 1.0 )
          v60 = *((_DWORD *)this + 138);
        *(_BYTE *)(v40 + 140) ^= (*(_BYTE *)(v40 + 140) ^ (8 * v61)) & 8;
        v62 = 16;
        v63 = *((_QWORD *)this + 49);
        if ( *((float *)this + 132) >= 0.0 )
          v62 = 0;
        v64 = *(_BYTE *)(v63 + 140) & 0xEF | v62;
        *(_BYTE *)(v63 + 140) = v64;
        *(_BYTE *)(v63 + 96) = (v64 & 0x10) != 0;
        *(_DWORD *)(*((_QWORD *)this + 49) + 132LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 49) + 136LL) = v60;
        if ( *((_DWORD *)this + 134) == 1 && (v65 = *((_DWORD *)this + 122)) != 0 )
        {
          if ( (float)v65 < v49 )
          {
            *((_DWORD *)this + 123) = v65;
            TimePositionWithinIteration = CKeyframeAnimation::GetTimePositionWithinIteration(this, v49 - (float)v65);
            KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 49));
            *(_DWORD *)(v72 + 92) = (int)TimePositionWithinIteration;
          }
          else
          {
            *((_BYTE *)this + 580) &= ~0x40u;
            v66 = 0;
            v67 = *((_DWORD *)this + 123) < v65;
            v68 = (KeyframeSequence *)*((_QWORD *)this + 49);
            if ( !v67 )
              v66 = 64;
            *((_BYTE *)this + 580) |= v66;
            *((_DWORD *)this + 123) = (int)v49;
            KeyframeSequence::ConfigureTimer(v68);
            *(_DWORD *)(v69 + 92) = 0;
          }
        }
        else
        {
          if ( v49 == 0.0 )
          {
            v73 = 0.0;
          }
          else
          {
            v74 = *((_QWORD *)this + 49);
            v75 = 0.0;
            v76 = *(_DWORD *)(v74 + 112);
            if ( v76 > 0 )
              v75 = (float)*(int *)(*(_QWORD *)(v74 + 104) + 24LL * (unsigned int)(v76 - 1)) / 1000.0;
            v77 = v75 * 1000.0;
            *(float *)&v91 = v77;
            if ( (LODWORD(v77) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v79 = 0LL;
              v79.m128_f32[0] = (float)(int)v77 - v77;
              v80.m128_f32[0] = FLOAT_N0_5;
              LODWORD(v91) = _mm_cmple_ss(v79, v80).m128_u32[0];
              v78 = (int)v77 - v91;
            }
            else
            {
              *(float *)&v91 = v77 + 6291456.25;
              v78 = (int)((_DWORD)v91 << 10) >> 11;
            }
            v73 = fmod_0(v49, (double)v78);
            if ( v73 == 0.0 )
              v73 = (float)v78;
          }
          v81 = *((_QWORD *)this + 49);
          v82 = *(float *)(v81 + 136);
          if ( v82 == 1.0 )
          {
            v83 = *(_DWORD *)(v81 + 120);
            v84 = v83;
          }
          else
          {
            v84 = *(_DWORD *)(v81 + 120);
            v83 = (int)(float)((float)v84 * v82);
          }
          v85 = *(float *)(v81 + 132);
          if ( v85 == 0.0 )
            v86 = 0;
          else
            v86 = (int)(float)((float)v84 * v85);
          *(_BYTE *)(v81 + 96) = (*(_BYTE *)(v81 + 140) & 0x10) != 0;
          *(_DWORD *)(v81 + 80) = v86;
          *(_DWORD *)(v81 + 84) = v83;
          *(_DWORD *)(v81 + 88) = v84;
          *(_DWORD *)(v81 + 92) = v86;
          *(_BYTE *)(v81 + 140) |= 0x20u;
          *(_DWORD *)(v81 + 92) = (int)v73;
          *((_BYTE *)this + 580) |= 0x40u;
        }
      }
    }
    return 0;
  }
  if ( v26 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v27 = *((_QWORD *)this + 65);
  if ( v27 < 0 )
  {
    v29 = *((_QWORD *)this + 65) & 1LL | (*((_QWORD *)this + 65) >> 1);
    v28 = (float)(int)v29 + (float)(int)v29;
  }
  else
  {
    v28 = (float)(int)v27;
  }
  v30 = *((_QWORD *)this + 64);
  v31 = v28 / 10000000.0;
  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  if ( v30 != v32 )
  {
    v33 = (unsigned __int64)(v32 - v30) / g_qpcFrequency.QuadPart;
    if ( v33 < 0 )
      v34 = (float)(v33 & 1 | (unsigned int)((unsigned __int64)v33 >> 1))
          + (float)(v33 & 1 | (unsigned int)((unsigned __int64)v33 >> 1));
    else
      v34 = (float)(int)v33;
    v31 = v31 + v34;
  }
  v35 = CKeyframeAnimation::TimeSeek(this, v31);
  v15 = v35;
  if ( v35 >= 0 )
  {
    *((_QWORD *)this + 63) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x3BBu, 0LL);
  return v15;
}
