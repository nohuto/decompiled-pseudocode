/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800561C0
 * Callers:
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18026BA60 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800573C0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180057DA8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800AB96C (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC29C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800BCCD8 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BCD94 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x1800BCE40 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800BCEB4 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800BCF6C (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1800BCFD0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800BD040 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800BD26C (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1800C149C (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800C1704 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800E8BC8 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800EDB4C (-Pause@CKeyframeAnimation@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  int v11; // r13d
  __int64 v12; // rsi
  char v13; // cl
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rsi
  unsigned int v17; // ecx
  _QWORD *v18; // r15
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  char v22; // cl
  char v23; // dl
  char v24; // al
  unsigned int v25; // ecx
  __int64 result; // rax
  unsigned int v27; // ecx
  __int64 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rsi
  char v36; // al
  __int64 v37; // xmm0_8
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  __int64 v45; // r11
  __int64 v46; // rcx
  __int64 v47; // rax
  float v48; // xmm1_4
  int v49; // ecx
  __int64 v50; // r8
  float v51; // xmm0_4
  int v52; // eax
  float v53; // xmm0_4
  int v54; // eax
  float v55; // xmm1_4
  bool v56; // cl
  int v57; // r9d
  int v58; // r10d
  float v59; // xmm1_4
  int v60; // edx
  __int64 v61; // rax
  int v62; // eax
  int v63; // edx
  __int64 v64; // rax
  int v65; // edx
  char v66; // al
  char v67; // al
  int v68; // eax
  unsigned int v69; // ecx
  char v70; // al
  unsigned int v71; // r8d
  __int64 v72; // r10
  __int64 v73; // r9
  __m128 v74; // xmm2
  __m128 v75; // rt1
  unsigned int v76; // ecx
  int v77; // r12d
  unsigned int v78; // ecx
  __int64 v79; // rdx
  int v80; // eax
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  __int64 v83; // rdx
  int v84; // r12d
  unsigned int v85; // ecx
  int v86; // r15d
  __int64 v87; // rdx
  int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // ecx
  int v91; // xmm1_4
  __int64 v92; // xmm1_8
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  unsigned int v96; // [rsp+20h] [rbp-99h]
  _QWORD *v97; // [rsp+30h] [rbp-89h]
  float v98; // [rsp+30h] [rbp-89h]
  __int128 v99; // [rsp+40h] [rbp-79h] BYREF
  __int128 v100; // [rsp+50h] [rbp-69h]
  __int128 v101; // [rsp+60h] [rbp-59h]
  __int128 v102; // [rsp+70h] [rbp-49h]
  __int64 v103; // [rsp+80h] [rbp-39h] BYREF
  int v104; // [rsp+88h] [rbp-31h]
  char v105; // [rsp+8Ch] [rbp-2Dh]
  _BYTE v106[64]; // [rsp+90h] [rbp-29h] BYREF
  __int64 v107; // [rsp+D0h] [rbp+17h] BYREF
  int v108; // [rsp+D8h] [rbp+1Fh]
  char v109; // [rsp+DCh] [rbp+23h]
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  *a4 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
  if ( *(_BYTE *)(v7 + 581) && !*(_BYTE *)(v7 + 582) )
  {
    if ( (*((_BYTE *)this + 581) & 0x10) == 0 )
      goto LABEL_95;
    if ( *((int *)this + 136) >= 0 )
    {
      CKeyframeAnimation::SetProgress(this, 1.0);
      *((_BYTE *)this + 580) &= ~2u;
    }
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
      *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
      this);
  }
  v8 = CKeyframeAnimation::ApplyPlaybackStateChanges(this, a2);
  v10 = v8;
  if ( v8 < 0 )
  {
    v96 = 1513;
    goto LABEL_159;
  }
  v11 = *((_DWORD *)a2 + 4);
  v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL) - *((_QWORD *)this + 63);
  if ( v12 < 0 )
    goto LABEL_26;
  if ( (*((_BYTE *)this + 581) & 1) != 0 )
  {
    if ( *((_DWORD *)this + 140) != 2 )
    {
      v61 = (*(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)this + 160LL))(this);
      if ( v61 )
        ++*(_DWORD *)(v61 + 40);
    }
    v13 = *((_BYTE *)this + 580);
    v14 = *((_DWORD *)this + 140);
    if ( (v13 & 6) != 0 || !*((_BYTE *)this + 148) )
    {
      if ( v14 == 2 )
      {
        v34 = *((_BYTE *)this + 581);
        if ( (v34 & 1) != 0 )
        {
          if ( v13 >= 0 && (v34 & 2) == 0 )
          {
            v35 = *((_QWORD *)this + 49);
            *((_BYTE *)this + 580) = v13 | 0x80;
            v36 = *(_BYTE *)(v35 + 140);
            if ( (v36 & 1) != 0 )
            {
              *(_BYTE *)(v35 + 140) = v36 | 2;
            }
            else
            {
              KeyframeSequence::SortKeyFrames((KeyframeSequence *)v35);
              KeyframeSequence::ConfigureTimer((KeyframeSequence *)v35);
              v71 = *(_DWORD *)(v35 + 112);
              v72 = 0LL;
              if ( v71 )
              {
                v73 = *(_QWORD *)(v35 + 104);
                do
                {
                  if ( *(_DWORD *)(*(_QWORD *)(v73 + 24 * v72 + 8) + 20LL) != 1
                    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v73 + 24 * v72 + 8) + 20LL) - 2) >= 2 )
                  {
                    ModuleFailFastForHRESULT(2147549183LL, retaddr);
                  }
                  v72 = (unsigned int)(v72 + 1);
                }
                while ( (unsigned int)v72 < v71 );
              }
              *(_BYTE *)(v35 + 140) |= 3u;
            }
          }
        }
        else
        {
          *((_DWORD *)this + 135) = 0;
          CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
          KeyframeSequence::Play(*((KeyframeSequence **)this + 49));
          v70 = *((_BYTE *)this + 581);
          *((_BYTE *)this + 580) |= 0x80u;
          *((_BYTE *)this + 581) = v70 & 0xFC | 1;
          *((_DWORD *)this + 137) = *((_DWORD *)this + 136);
          CKeyframeAnimation::OnAnimationEvent(this, 4LL, a2);
          *((_BYTE *)this + 581) |= 4u;
        }
        *((_BYTE *)this + 580) |= 0x20u;
        goto LABEL_9;
      }
    }
    else if ( v14 == 2 )
    {
      goto LABEL_9;
    }
    if ( v12 == 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v43) = 0x7FFFFFFF;
    }
    else
    {
      v39 = 1000000 * v12;
      if ( Time::s_luFreq.QuadPart == 10000000 )
        v40 = v39 / 10000000;
      else
        v40 = v39 / Time::s_luFreq.QuadPart;
      v41 = 500LL;
      if ( v40 < 0 )
        v41 = -500LL;
      v42 = (__int64)((unsigned __int128)((v41 + v40) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
      v43 = (v42 >> 63) + v42;
    }
    v44 = *((_QWORD *)this + 6);
    v97 = *(_QWORD **)(*((_QWORD *)this + 2) + 424LL);
    if ( !v44 )
      goto LABEL_120;
    v45 = v97[59];
    v46 = v97[61];
    v47 = *(_QWORD *)(v46
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(v44) ^ (0x100000001B3LL
                                      * (BYTE6(v44) ^ (0x100000001B3LL
                                                     * (BYTE5(v44) ^ (0x100000001B3LL
                                                                    * (BYTE4(v44) ^ (0x100000001B3LL
                                                                                   * (BYTE3(v44) ^ (0x100000001B3LL
                                                                                                  * (BYTE2(v44) ^ (0x100000001B3LL * (BYTE1(v44) ^ (0x100000001B3LL * ((unsigned __int8)v44 ^ 0xCBF29CE484222325uLL)))))))))))))))) & v97[64])
                    + 8);
    if ( v47 == v45 )
    {
LABEL_119:
      v47 = 0LL;
    }
    else
    {
      while ( *((_QWORD *)this + 6) != *(_QWORD *)(v47 + 16) )
      {
        if ( v47 == *(_QWORD *)(v46
                              + 16
                              * ((0x100000001B3LL
                                * (HIBYTE(v44) ^ (0x100000001B3LL
                                                * (BYTE6(v44) ^ (0x100000001B3LL
                                                               * (BYTE5(v44) ^ (0x100000001B3LL
                                                                              * (BYTE4(v44) ^ (0x100000001B3LL
                                                                                             * (BYTE3(v44) ^ (0x100000001B3LL * (BYTE2(v44) ^ (0x100000001B3LL * (BYTE1(v44) ^ (0x100000001B3LL * ((unsigned __int8)v44 ^ 0xCBF29CE484222325uLL)))))))))))))))) & v97[64])) )
          goto LABEL_119;
        v47 = *(_QWORD *)(v47 + 8);
      }
    }
    if ( v47 && v47 != v45 )
      v48 = *(float *)(v47 + 24);
    else
LABEL_120:
      v48 = *(float *)&FLOAT_1_0;
    v49 = (int)(float)((float)((float)(int)v43 * *((float *)this + 132)) * v48);
    if ( *((char *)this + 580) < 0 )
    {
      if ( *((_DWORD *)this + 143) == 4 )
      {
        v50 = *((_QWORD *)this + 49);
        v51 = 0.0;
        v52 = *(_DWORD *)(v50 + 112);
        if ( v52 > 0 )
          v51 = (float)*(int *)(*(_QWORD *)(v50 + 104) + 24LL * (unsigned int)(v52 - 1)) / 1000.0;
        v53 = (float)(v51 * *((float *)this + 139)) * 1000.0;
        if ( (LODWORD(v53) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v74 = 0LL;
          v74.m128_f32[0] = (float)(int)v53 - v53;
          v75.m128_f32[0] = FLOAT_N0_5;
          v54 = (int)v53 - _mm_cmple_ss(v74, v75).m128_u32[0];
        }
        else
        {
          v98 = v53 + 6291456.25;
          v54 = (int)(LODWORD(v98) << 10) >> 11;
        }
        v55 = *(float *)(v50 + 136);
        v56 = (*(_BYTE *)(v50 + 140) & 0x10) != 0;
        if ( v55 == 1.0 )
        {
          v57 = *(_DWORD *)(v50 + 120);
          v58 = v57;
        }
        else
        {
          v58 = *(_DWORD *)(v50 + 120);
          v57 = (int)(float)((float)v58 * v55);
        }
        v59 = *(float *)(v50 + 132);
        if ( v59 == 0.0 )
          v60 = 0;
        else
          v60 = (int)(float)((float)v58 * v59);
        *(_DWORD *)(v50 + 80) = v60;
        *(_DWORD *)(v50 + 84) = v57;
        *(_DWORD *)(v50 + 88) = v58;
        *(_BYTE *)(v50 + 96) = v56;
        *(_DWORD *)(v50 + 92) = v60;
        *(_BYTE *)(v50 + 140) |= 0x20u;
        *(_DWORD *)(v50 + 92) = v54;
      }
      else
      {
        v62 = *((_DWORD *)this + 123);
        v63 = *((_DWORD *)this + 122);
        if ( v62 < v63 )
        {
          v65 = v63 - v62;
          if ( v49 < v65 )
            v65 = v49;
          *((_DWORD *)this + 123) = v65 + v62;
          v49 -= v65;
        }
        v64 = *((_QWORD *)this + 49);
        if ( (*(_BYTE *)(v64 + 140) & 2) != 0 )
          *(_DWORD *)(v64 + 92) += v49;
      }
    }
LABEL_9:
    v15 = (*((_BYTE *)this + 581) & 1) == 0;
    *((_QWORD *)this + 63) = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
    if ( !v15 && *((_DWORD *)this + 123) < *((_DWORD *)this + 122) )
    {
      v66 = *((_BYTE *)this + 580);
      if ( (v66 & 0x40) == 0 && (*((_DWORD *)this + 142) != 1 || (v66 & 0x10) != 0) )
        goto LABEL_22;
    }
    if ( (*((_BYTE *)this + 580) & 8) == 0 )
    {
      CKeyframeAnimation::ProcessExpressionKeyFrames(this, a2);
      if ( *((_QWORD *)this + 48) )
      {
        v68 = CKeyframeAnimation::SampleStartingValue(this);
        v10 = v68;
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x8FBu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v10, 0x628u, 0LL);
          goto LABEL_28;
        }
      }
      *((_BYTE *)this + 580) |= 8u;
    }
    v8 = CKeyframeAnimation::Calculate(this, a2);
    v10 = v8;
    if ( v8 < 0 )
    {
      v96 = 1579;
      goto LABEL_159;
    }
    v16 = *((_QWORD *)this + 49);
    if ( !*(_BYTE *)(v16 + 76) )
      goto LABEL_95;
    v17 = *((_DWORD *)a2 + 4);
    if ( ~v17 < 5 )
    {
      v77 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        v17,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x52u,
        0LL);
    }
    else
    {
      if ( *((_DWORD *)a2 + 12) != v17 )
      {
        v18 = (_QWORD *)((char *)a2 + 24);
LABEL_17:
        v19 = *((unsigned int *)a2 + 4);
        *((_DWORD *)a2 + 4) = v19 + 1;
        v20 = *(_DWORD *)(v16 + 72);
        v21 = *v18 + 80 * v19;
        switch ( v20 )
        {
          case 18:
            *(_DWORD *)v21 = *(_DWORD *)v16;
            *(_DWORD *)(v21 + 72) = 18;
            break;
          case 17:
            *(_BYTE *)v21 = *(_BYTE *)v16;
            *(_DWORD *)(v21 + 72) = 17;
            break;
          case 35:
            *(_DWORD *)(v21 + 72) = 35;
            *(_QWORD *)v21 = *(_QWORD *)v16;
            break;
          default:
            switch ( v20 )
            {
              case 11:
                v83 = *(_QWORD *)(v16 + 64);
                *(_DWORD *)(v21 + 72) = 11;
                *(_BYTE *)(v21 + 76) = 1;
                Microsoft::WRL::ComPtr<CPathData>::operator=(v21 + 64, v83);
                break;
              case 42:
                *(_DWORD *)(v21 + 72) = 42;
                *(_DWORD *)v21 = *(_DWORD *)v16;
                goto LABEL_21;
              case 52:
                *(_DWORD *)(v21 + 72) = 52;
                *(_QWORD *)v21 = *(_QWORD *)v16;
                *(_DWORD *)(v21 + 8) = *(_DWORD *)(v16 + 8);
                goto LABEL_21;
              case 69:
                *(_DWORD *)(v21 + 72) = 69;
                *(_OWORD *)v21 = *(_OWORD *)v16;
                goto LABEL_21;
              case 70:
                *(_DWORD *)(v21 + 72) = 70;
                *(_OWORD *)v21 = *(_OWORD *)v16;
                goto LABEL_21;
              case 71:
                *(_DWORD *)(v21 + 72) = 71;
                *(_OWORD *)v21 = *(_OWORD *)v16;
                goto LABEL_21;
              case 104:
                *(_DWORD *)(v21 + 72) = 104;
                *(_OWORD *)v21 = *(_OWORD *)v16;
                *(_QWORD *)(v21 + 16) = *(_QWORD *)(v16 + 16);
                goto LABEL_21;
              case 265:
                *(_DWORD *)(v21 + 72) = 265;
                *(_OWORD *)v21 = *(_OWORD *)v16;
                *(_OWORD *)(v21 + 16) = *(_OWORD *)(v16 + 16);
                *(_OWORD *)(v21 + 32) = *(_OWORD *)(v16 + 32);
                *(_OWORD *)(v21 + 48) = *(_OWORD *)(v16 + 48);
                goto LABEL_21;
              default:
                goto LABEL_22;
            }
            goto LABEL_22;
        }
LABEL_21:
        *(_BYTE *)(v21 + 76) = 1;
LABEL_22:
        v22 = *((_BYTE *)this + 580);
        v23 = v22;
        if ( (*((_BYTE *)this + 581) & ((unsigned __int8)v22 >> 5) & 1) != 0 && v22 < 0 )
        {
          v33 = *((_QWORD *)this + 49);
          *((_BYTE *)this + 580) = v22 & 0x7F;
          *(_BYTE *)(v33 + 140) &= ~2u;
          v23 = *((_BYTE *)this + 580);
        }
        v24 = *((_BYTE *)this + 581);
        if ( (v24 & 2) == 0 )
        {
          if ( (v24 & 1) == 0 || *((_DWORD *)this + 123) >= *((_DWORD *)this + 122) )
            goto LABEL_26;
          if ( *((_DWORD *)this + 142) == 1 && (v23 & 0x10) == 0 )
          {
            *((_BYTE *)this + 580) = v23 | 0x10;
            goto LABEL_26;
          }
          if ( (v23 & 0x40) != 0 )
            goto LABEL_26;
LABEL_95:
          v10 = 1;
          goto LABEL_28;
        }
        --*((_DWORD *)a2 + 4);
        v8 = CKeyframeAnimation::Reset(this, 1, a2);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v67 = *((_BYTE *)this + 580) & 0xFE;
          *((_BYTE *)this + 580) = v67;
          if ( (v67 & 0x20) != 0 )
          {
            CKeyframeAnimation::Play(this, a2);
            CKeyframeAnimation::Pause(this);
          }
          else
          {
            *((_QWORD *)this + 70) = 0LL;
          }
          goto LABEL_26;
        }
        v96 = 1609;
LABEL_159:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v96, 0LL);
        goto LABEL_28;
      }
      memset_0(&v99, 0, 0x40uLL);
      v18 = (_QWORD *)((char *)a2 + 24);
      v103 = 0LL;
      v104 = 18;
      v105 = 0;
      v80 = DynArray<CExpressionValue,1>::AddAndSet((char *)a2 + 24, v79, &v99);
      v77 = v80;
      if ( v80 >= 0 )
      {
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v103);
        goto LABEL_17;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        v81,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v80,
        0x5Bu,
        0LL);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v103);
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      v78,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v77,
      0x27Au,
      0LL);
    v10 = v77;
    MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v77, 0x638u, 0LL);
    goto LABEL_28;
  }
  if ( !*((_BYTE *)this + 148) )
    goto LABEL_95;
  v103 = 0LL;
  v104 = 18;
  v105 = 0;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  CExpressionValue::CopyFrom((CExpressionValue *)&v99, (CKeyframeAnimation *)((char *)this + 72));
  v27 = *((_DWORD *)a2 + 4);
  if ( ~v27 < 5 )
  {
    v84 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      v27,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x52u,
      0LL);
    v86 = -2147418113;
LABEL_146:
    MilInstrumentationCheckHR_MaybeFailFast(
      v85,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v84,
      0x27Au,
      0LL);
    v10 = v86;
    MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v84, 0x67Cu, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v103);
    goto LABEL_28;
  }
  if ( *((_DWORD *)a2 + 12) != v27 )
  {
    v28 = (__int64 *)((char *)a2 + 24);
    goto LABEL_35;
  }
  memset_0(v106, 0, sizeof(v106));
  v28 = (__int64 *)((char *)a2 + 24);
  v107 = 0LL;
  v108 = 18;
  v109 = 0;
  v88 = DynArray<CExpressionValue,1>::AddAndSet((char *)a2 + 24, v87, v106);
  v84 = v88;
  v86 = v88;
  if ( v88 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      v89,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v88,
      0x5Bu,
      0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v107);
    goto LABEL_146;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v107);
LABEL_35:
  v29 = *((unsigned int *)a2 + 4);
  *((_DWORD *)a2 + 4) = v29 + 1;
  v30 = *v28;
  v31 = v103;
  v32 = 80 * v29;
  switch ( v104 )
  {
    case 70:
      *(_DWORD *)(v32 + v30 + 72) = 70;
LABEL_39:
      *(_OWORD *)(v32 + v30) = v99;
      break;
    case 18:
      *(_DWORD *)(v32 + v30) = v99;
      *(_DWORD *)(v32 + v30 + 72) = 18;
      break;
    case 52:
      v37 = v99;
      *(_DWORD *)(v32 + v30 + 72) = 52;
      v38 = DWORD2(v99);
      *(_QWORD *)(v32 + v30) = v37;
      *(_DWORD *)(v32 + v30 + 8) = v38;
      break;
    default:
      switch ( v104 )
      {
        case 11:
          *(_DWORD *)(v32 + v30 + 72) = 11;
          *(_BYTE *)(v32 + v30 + 76) = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=(v30 + v32 + 64, v31);
          break;
        case 17:
          *(_BYTE *)(v32 + v30) = v99;
          *(_DWORD *)(v32 + v30 + 72) = 17;
          goto LABEL_40;
        case 35:
          v91 = DWORD1(v99);
          *(_DWORD *)(v32 + v30) = v99;
          *(_DWORD *)(v32 + v30 + 4) = v91;
          *(_DWORD *)(v32 + v30 + 72) = 35;
          goto LABEL_40;
        case 42:
          *(_DWORD *)(v32 + v30) = v99;
          *(_DWORD *)(v32 + v30 + 72) = 42;
          goto LABEL_40;
        case 69:
          *(_DWORD *)(v32 + v30 + 72) = 69;
          goto LABEL_39;
        case 71:
          *(_DWORD *)(v32 + v30 + 72) = 71;
          goto LABEL_39;
        case 104:
          v92 = v100;
          *(_OWORD *)(v32 + v30) = v99;
          *(_DWORD *)(v32 + v30 + 72) = 104;
          *(_QWORD *)(v32 + v30 + 16) = v92;
          goto LABEL_40;
        case 265:
          v93 = v100;
          *(_OWORD *)(v32 + v30) = v99;
          *(_DWORD *)(v32 + v30 + 72) = 265;
          v94 = v101;
          *(_OWORD *)(v32 + v30 + 16) = v93;
          v95 = v102;
          *(_OWORD *)(v32 + v30 + 32) = v94;
          *(_OWORD *)(v32 + v30 + 48) = v95;
          goto LABEL_40;
        default:
          goto LABEL_41;
      }
      goto LABEL_41;
  }
LABEL_40:
  *(_BYTE *)(v32 + v30 + 76) = 1;
LABEL_41:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_26:
  v25 = *((_DWORD *)a2 + 4);
  if ( v25 != v11 + 1 )
  {
    if ( v25 != v11 )
    {
      v10 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147418113, 0x699u, 0LL);
      goto LABEL_28;
    }
    goto LABEL_95;
  }
  v10 = 0;
LABEL_28:
  *a4 = *((_BYTE *)this + 580) & 1;
  result = v10;
  *((_BYTE *)this + 580) &= 0x99u;
  return result;
}
