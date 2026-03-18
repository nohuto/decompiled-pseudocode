/*
 * XREFs of ?GeneratedCreateResource@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A6550
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z @ 0x1C0014FEC (--0CVisualMarshaler@DirectComposition@@IEAA@W4ResTypeID@1@@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC04 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C02381A0 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0238214 (--0CSceneVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSuperWetInkVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0238274 (--0CSuperWetInkVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTextVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C02382D4 (--0CTextVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreateResource(
        DirectComposition *this,
        __int64 *a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  unsigned int v3; // edi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  __int64 v7; // rax
  __int64 Pool2; // rbx
  void **v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  __int64 v18; // rax
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v22; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v23; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void **v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  PVOID v32; // rsi
  __int64 v33; // rax
  PVOID v34; // rsi
  __int64 v35; // rax
  PVOID v36; // rsi
  __int64 v37; // rax
  PVOID v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  DirectComposition::CParticleEmitterVisualMarshaler *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 QuotaZInit; // rax
  NSInstrumentation::CLeakTrackingAllocator *v50; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v51; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v52; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v53; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v54; // rcx
  DirectComposition::CSceneVisualMarshaler *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  NSInstrumentation::CLeakTrackingAllocator *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  DirectComposition::CTextVisualMarshaler *v67; // rax
  __int64 v68; // rax
  DirectComposition::CSuperWetInkVisualMarshaler *v69; // rax
  PVOID BackTrace[20]; // [rsp+28h] [rbp-49h] BYREF

  v3 = 0;
  if ( (unsigned int)this <= 0x93 )
  {
    if ( (_DWORD)this == 147 )
    {
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, (__int64)a2, 0x60uLL, 1869759300);
      Pool2 = QuotaZInit;
      if ( QuotaZInit )
      {
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 56) = 0LL;
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_DWORD *)(QuotaZInit + 48) = 146;
        v9 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        goto LABEL_8;
      }
      return (unsigned int)-1073741801;
    }
    if ( (unsigned int)this > 0x73 )
    {
      v11 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 116);
      if ( (_DWORD)v11 )
      {
        v12 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v11 - 2);
        if ( !(_DWORD)v12 )
        {
          v46 = (DirectComposition::CParticleEmitterVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                        v12,
                                                                        (__int64)a2,
                                                                        0x230uLL,
                                                                        1987134276);
          if ( !v46 )
            return (unsigned int)-1073741801;
          v47 = DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(v46);
          goto LABEL_9;
        }
        v13 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v12 - 1);
        if ( (_DWORD)v13 )
        {
          v14 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v13 - 1);
          if ( (_DWORD)v14 )
          {
            v15 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v14 - 1);
            if ( (_DWORD)v15 )
            {
              v16 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v15 - 1);
              if ( (_DWORD)v16 )
              {
                v17 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v16 - 1);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 18 )
                  {
                    v18 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                            v17,
                            (__int64)a2,
                            0x80uLL,
                            1735541572);
                    Pool2 = v18;
                    if ( v18 )
                    {
                      *(_DWORD *)(v18 + 32) = 0;
                      *(_QWORD *)(v18 + 56) = 0LL;
                      *(_QWORD *)(v18 + 24) = 1LL;
                      *(_DWORD *)(v18 + 48) = 140;
                      *(_QWORD *)v18 = &DirectComposition::CRegionGeometryMarshaler::`vftable';
                      *(_QWORD *)(v18 + 104) = 0LL;
                      *(_QWORD *)(v18 + 112) = 0LL;
                      *(_QWORD *)(v18 + 120) = 0LL;
                      goto LABEL_10;
                    }
                    return (unsigned int)-1073741801;
                  }
                  return (unsigned int)-1073741811;
                }
                v41 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v17,
                        (__int64)a2,
                        0x60uLL,
                        1752253252);
                Pool2 = v41;
                if ( v41 )
                {
                  *(_DWORD *)(v41 + 32) = 0;
                  *(_QWORD *)(v41 + 56) = 0LL;
                  *(_QWORD *)(v41 + 24) = 1LL;
                  *(_DWORD *)(v41 + 48) = 122;
                  *(_QWORD *)(v41 + 64) = 0LL;
                  *(_QWORD *)(v41 + 72) = 0LL;
                  *(_QWORD *)(v41 + 80) = 0LL;
                  v9 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
                  goto LABEL_8;
                }
              }
              else
              {
                v42 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v16,
                        (__int64)a2,
                        0x60uLL,
                        1769030468);
                Pool2 = v42;
                if ( v42 )
                {
                  *(_DWORD *)(v42 + 32) = 0;
                  *(_QWORD *)(v42 + 56) = 0LL;
                  *(_QWORD *)(v42 + 24) = 1LL;
                  *(_DWORD *)(v42 + 48) = 121;
                  *(_QWORD *)(v42 + 64) = 0LL;
                  *(_QWORD *)(v42 + 72) = 0LL;
                  *(_QWORD *)(v42 + 80) = 0LL;
                  v9 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
                  goto LABEL_8;
                }
              }
            }
            else
            {
              v43 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v15, (__int64)a2, 0x60uLL, 1718698820);
              Pool2 = v43;
              if ( v43 )
              {
                *(_DWORD *)(v43 + 32) = 0;
                *(_QWORD *)(v43 + 56) = 0LL;
                *(_QWORD *)(v43 + 24) = 1LL;
                *(_DWORD *)(v43 + 48) = 120;
                *(_QWORD *)(v43 + 64) = 0LL;
                *(_QWORD *)(v43 + 72) = 0LL;
                *(_QWORD *)(v43 + 80) = 0LL;
                v9 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
                goto LABEL_8;
              }
            }
          }
          else
          {
            v44 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v14, (__int64)a2, 0x60uLL, 1701921604);
            Pool2 = v44;
            if ( v44 )
            {
              *(_DWORD *)(v44 + 32) = 0;
              *(_QWORD *)(v44 + 56) = 0LL;
              *(_QWORD *)(v44 + 24) = 1LL;
              *(_DWORD *)(v44 + 48) = 119;
              *(_QWORD *)(v44 + 64) = 0LL;
              *(_QWORD *)(v44 + 72) = 0LL;
              *(_QWORD *)(v44 + 80) = 0LL;
              v9 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
              goto LABEL_8;
            }
          }
        }
        else
        {
          v45 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v13, (__int64)a2, 0xD8uLL, 1735476036);
          Pool2 = v45;
          if ( v45 )
          {
            *(_DWORD *)(v45 + 32) = 0;
            *(_QWORD *)(v45 + 56) = 0LL;
            *(_QWORD *)(v45 + 24) = 1LL;
            *(_DWORD *)(v45 + 48) = 118;
            v9 = &DirectComposition::CParticleGeneratorMarshaler::`vftable';
            goto LABEL_8;
          }
        }
      }
      else
      {
        v48 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v11, (__int64)a2, 0x60uLL, 1685144388);
        Pool2 = v48;
        if ( v48 )
        {
          *(_DWORD *)(v48 + 32) = 0;
          *(_QWORD *)(v48 + 56) = 0LL;
          *(_QWORD *)(v48 + 24) = 1LL;
          *(_DWORD *)(v48 + 48) = 115;
          *(_QWORD *)(v48 + 64) = 0LL;
          *(_QWORD *)(v48 + 72) = 0LL;
          *(_QWORD *)(v48 + 80) = 0LL;
          v9 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
          goto LABEL_8;
        }
      }
      return (unsigned int)-1073741801;
    }
    if ( (_DWORD)this == 115 )
    {
      v40 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, (__int64)a2, 0x98uLL, 1651589956);
      Pool2 = v40;
      if ( v40 )
      {
        *(_DWORD *)(v40 + 32) = 0;
        *(_QWORD *)(v40 + 56) = 0LL;
        *(_QWORD *)(v40 + 24) = 1LL;
        *(_DWORD *)(v40 + 48) = 114;
        v9 = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
        goto LABEL_8;
      }
      return (unsigned int)-1073741801;
    }
    if ( (_DWORD)this == 56 )
    {
      v26 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, (__int64)a2, 0x60uLL, 1734689604);
      Pool2 = v26;
      if ( v26 )
      {
        *(_DWORD *)(v26 + 32) = 0;
        *(_QWORD *)(v26 + 56) = 0LL;
        *(_QWORD *)(v26 + 24) = 1LL;
        *(_DWORD *)(v26 + 48) = 55;
        v9 = &DirectComposition::CEffectGroupMarshaler::`vftable';
        goto LABEL_8;
      }
      return (unsigned int)-1073741801;
    }
    if ( (_DWORD)this != 4 )
    {
      if ( (_DWORD)this != 33 )
      {
        if ( (_DWORD)this != 41 )
        {
          if ( (_DWORD)this != 48 )
          {
            switch ( (_DWORD)this )
            {
              case '?':
                v31 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        this,
                        (__int64)a2,
                        0x78uLL,
                        1684489028);
                Pool2 = v31;
                if ( v31 )
                {
                  *(_DWORD *)(v31 + 32) = 0;
                  *(_QWORD *)(v31 + 56) = 0LL;
                  *(_QWORD *)(v31 + 24) = 1LL;
                  *(_DWORD *)(v31 + 48) = 62;
                  *(_QWORD *)v31 = &DirectComposition::CGdiSpriteBitmapMarshaler::`vftable';
                  *(_QWORD *)(v31 + 64) = 0LL;
                  *(_QWORD *)(v31 + 72) = 0LL;
                  *(_QWORD *)(v31 + 80) = 0LL;
                  goto LABEL_10;
                }
                return (unsigned int)-1073741801;
              case 'F':
                v30 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        this,
                        (__int64)a2,
                        0x58uLL,
                        1986478916);
                Pool2 = v30;
                if ( v30 )
                {
                  *(_DWORD *)(v30 + 32) = 0;
                  *(_QWORD *)(v30 + 56) = 0LL;
                  *(_QWORD *)(v30 + 24) = 1LL;
                  *(_DWORD *)(v30 + 48) = 69;
                  v9 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
                  goto LABEL_8;
                }
                break;
              case 'q':
                v29 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        this,
                        (__int64)a2,
                        0x58uLL,
                        1920025412);
                Pool2 = v29;
                if ( v29 )
                {
                  *(_DWORD *)(v29 + 32) = 0;
                  *(_QWORD *)(v29 + 56) = 0LL;
                  *(_QWORD *)(v29 + 24) = 1LL;
                  *(_DWORD *)(v29 + 48) = 112;
                  v9 = &DirectComposition::CParticleAttractorMarshaler::`vftable';
                  goto LABEL_8;
                }
                break;
              default:
                return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741801;
          }
          v32 = gpLeakTrackingAllocator;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79634344) == 0x79634344
            && (v33 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v33) != 2036548420 )
            {
              if ( ++v33 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_57;
            }
            Pool2 = ExAllocatePool2(261LL, 416LL);
            if ( !Pool2 )
              return (unsigned int)-1073741801;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
            {
              if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v32,
                                       Pool2,
                                       BackTrace) )
              {
LABEL_63:
                ExFreePoolWithTag((PVOID)Pool2, 0);
                return (unsigned int)-1073741801;
              }
LABEL_59:
              DirectComposition::CVisualMarshaler::CVisualMarshaler(Pool2, 47);
              *(_QWORD *)Pool2 = &DirectComposition::CCursorVisualMarshaler::`vftable';
              goto LABEL_10;
            }
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v32,
                                     Pool2,
                                     BackTrace) )
              goto LABEL_63;
            Pool2 += 16LL;
          }
          else
          {
LABEL_57:
            Pool2 = ExAllocatePool2(261LL, 400LL);
          }
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          goto LABEL_59;
        }
        v34 = gpLeakTrackingAllocator;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6C744344) == 0x6C744344
          && (v35 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v35) != 1819558724 )
          {
            if ( ++v35 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_70;
          }
          Pool2 = ExAllocatePool2(261LL, 120LL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v34,
                                     Pool2,
                                     BackTrace) )
              goto LABEL_63;
LABEL_72:
            *(_DWORD *)(Pool2 + 32) = 0;
            v9 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
            *(_QWORD *)(Pool2 + 56) = 0LL;
            *(_QWORD *)(Pool2 + 24) = 1LL;
            *(_DWORD *)(Pool2 + 48) = 40;
            goto LABEL_8;
          }
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v34,
                                   Pool2,
                                   BackTrace) )
            goto LABEL_63;
          Pool2 += 16LL;
        }
        else
        {
LABEL_70:
          Pool2 = ExAllocatePool2(261LL, 104LL);
        }
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        goto LABEL_72;
      }
      v36 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72674344) == 0x72674344
        && (v37 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v37) != 1919370052 )
        {
          if ( ++v37 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_83;
        }
        Pool2 = ExAllocatePool2(261LL, 120LL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v36,
                                   Pool2,
                                   BackTrace) )
            goto LABEL_63;
LABEL_85:
          *(_DWORD *)(Pool2 + 32) = 0;
          v9 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
          *(_QWORD *)(Pool2 + 56) = 0LL;
          *(_QWORD *)(Pool2 + 24) = 1LL;
          *(_DWORD *)(Pool2 + 48) = 32;
          goto LABEL_8;
        }
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v36,
                                 Pool2,
                                 BackTrace) )
          goto LABEL_63;
        Pool2 += 16LL;
      }
      else
      {
LABEL_83:
        Pool2 = ExAllocatePool2(261LL, 104LL);
      }
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      goto LABEL_85;
    }
    v38 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72744344) == 0x72744344
      && (v39 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v39) != 1920222020 )
      {
        if ( ++v39 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_96;
      }
      Pool2 = ExAllocatePool2(261LL, 128LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v38,
                                 Pool2,
                                 BackTrace) )
          goto LABEL_63;
LABEL_98:
        *(_DWORD *)(Pool2 + 32) = 0;
        *(_QWORD *)Pool2 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
        *(_QWORD *)(Pool2 + 56) = 0LL;
        *(_QWORD *)(Pool2 + 24) = 1LL;
        *(_DWORD *)(Pool2 + 48) = 3;
        goto LABEL_105;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v38,
                               Pool2,
                               BackTrace) )
        goto LABEL_63;
      Pool2 += 16LL;
    }
    else
    {
LABEL_96:
      Pool2 = ExAllocatePool2(261LL, 112LL);
    }
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    goto LABEL_98;
  }
  if ( (unsigned int)this > 0xAC )
  {
    v19 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 178);
    if ( (_DWORD)v19 )
    {
      v20 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v19 - 3);
      if ( !(_DWORD)v20 )
      {
        v68 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v20, (__int64)a2, 0x80uLL, 2037596996);
        Pool2 = v68;
        if ( v68 )
        {
          *(_DWORD *)(v68 + 32) = 0;
          *(_QWORD *)(v68 + 56) = 0LL;
          *(_QWORD *)(v68 + 24) = 1LL;
          *(_DWORD *)(v68 + 48) = 180;
          v9 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
          goto LABEL_8;
        }
        return (unsigned int)-1073741801;
      }
      v21 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v20 - 3);
      if ( (_DWORD)v21 )
      {
        v22 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v21 - 3);
        if ( (_DWORD)v22 )
        {
          v23 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v22 - 1);
          if ( (_DWORD)v23 )
          {
            v24 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v23 - 1);
            if ( (_DWORD)v24 )
            {
              v63 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v24 - 1);
              if ( (_DWORD)v63 )
              {
                if ( (_DWORD)v63 != 6 )
                  return (unsigned int)-1073741811;
                v64 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v63,
                        (__int64)a2,
                        0x48uLL,
                        2021016388);
                Pool2 = v64;
                if ( v64 )
                {
                  *(_DWORD *)(v64 + 32) = 0;
                  *(_QWORD *)(v64 + 56) = 0LL;
                  *(_QWORD *)(v64 + 24) = 1LL;
                  *(_DWORD *)(v64 + 48) = 195;
                  v9 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
                  goto LABEL_8;
                }
              }
              else
              {
                v65 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v63,
                        (__int64)a2,
                        0x60uLL,
                        863257412);
                Pool2 = v65;
                if ( v65 )
                {
                  *(_DWORD *)(v65 + 32) = 0;
                  *(_QWORD *)(v65 + 56) = 0LL;
                  *(_QWORD *)(v65 + 24) = 1LL;
                  *(_DWORD *)(v65 + 48) = 189;
                  v9 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
                  goto LABEL_8;
                }
              }
            }
            else
            {
              v25 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v24, (__int64)a2, 0x58uLL, 1953776452);
              Pool2 = v25;
              if ( v25 )
              {
                *(_DWORD *)(v25 + 32) = 0;
                *(_QWORD *)(v25 + 56) = 0LL;
                *(_QWORD *)(v25 + 24) = 1LL;
                *(_DWORD *)(v25 + 48) = 188;
                v9 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
                goto LABEL_8;
              }
            }
            return (unsigned int)-1073741801;
          }
          v27 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v23, (__int64)a2, 0x68uLL, 1735672644);
          Pool2 = v27;
          if ( !v27 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v27 + 32) = 0;
          *(_QWORD *)(v27 + 56) = 0LL;
          *(_QWORD *)(v27 + 24) = 1LL;
          *(_DWORD *)(v27 + 48) = 187;
          v28 = &DirectComposition::CTransformGroupMarshaler::`vftable';
        }
        else
        {
          v66 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v22, (__int64)a2, 0x68uLL, 862405444);
          Pool2 = v66;
          if ( !v66 )
            return (unsigned int)-1073741801;
          *(_DWORD *)(v66 + 32) = 0;
          *(_QWORD *)(v66 + 56) = 0LL;
          *(_QWORD *)(v66 + 24) = 1LL;
          *(_DWORD *)(v66 + 48) = 186;
          v28 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
        }
        *(_QWORD *)Pool2 = v28;
        *(_QWORD *)(Pool2 + 80) = 0LL;
        *(_QWORD *)(Pool2 + 88) = 0LL;
        *(_QWORD *)(Pool2 + 96) = 0LL;
        goto LABEL_10;
      }
      v67 = (DirectComposition::CTextVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                         v21,
                                                         (__int64)a2,
                                                         0x1D0uLL,
                                                         1987330884);
      if ( !v67 )
        return (unsigned int)-1073741801;
      v47 = DirectComposition::CTextVisualMarshaler::CTextVisualMarshaler(v67);
    }
    else
    {
      v69 = (DirectComposition::CSuperWetInkVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                v19,
                                                                (__int64)a2,
                                                                0x190uLL,
                                                                1970488132);
      if ( !v69 )
        return (unsigned int)-1073741801;
      v47 = DirectComposition::CSuperWetInkVisualMarshaler::CSuperWetInkVisualMarshaler(v69);
    }
LABEL_9:
    Pool2 = v47;
    if ( v47 )
      goto LABEL_10;
    return (unsigned int)-1073741801;
  }
  if ( (_DWORD)this == 172 )
  {
    v62 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, (__int64)a2, 0x60uLL, 1953186628);
    Pool2 = v62;
    if ( v62 )
    {
      *(_DWORD *)(v62 + 32) = 0;
      *(_QWORD *)(v62 + 56) = 0LL;
      *(_QWORD *)(v62 + 24) = 1LL;
      *(_DWORD *)(v62 + 48) = 171;
      v9 = &DirectComposition::CSkewTransformMarshaler::`vftable';
      goto LABEL_8;
    }
    return (unsigned int)-1073741801;
  }
  v5 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 148);
  if ( !(_DWORD)v5 )
  {
    v61 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v5, (__int64)a2, 0x70uLL, 863126340);
    Pool2 = v61;
    if ( v61 )
    {
      *(_DWORD *)(v61 + 32) = 0;
      *(_QWORD *)(v61 + 56) = 0LL;
      *(_QWORD *)(v61 + 24) = 1LL;
      *(_DWORD *)(v61 + 48) = 147;
      v9 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
      goto LABEL_8;
    }
    return (unsigned int)-1073741801;
  }
  v6 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v5 - 3);
  if ( (_DWORD)v6 )
  {
    v50 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v6 - 1);
    if ( (_DWORD)v50 )
    {
      v51 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v50 - 4);
      if ( (_DWORD)v51 )
      {
        v52 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v51 - 2);
        if ( (_DWORD)v52 )
        {
          v53 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v52 - 1);
          if ( (_DWORD)v53 )
          {
            v54 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v53 - 1);
            if ( (_DWORD)v54 )
            {
              if ( (_DWORD)v54 == 5 )
              {
                v55 = (DirectComposition::CSceneVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    v54,
                                                                    (__int64)a2,
                                                                    0x190uLL,
                                                                    1987724100);
                if ( !v55 )
                  return (unsigned int)-1073741801;
                v47 = DirectComposition::CSceneVisualMarshaler::CSceneVisualMarshaler(v55);
                goto LABEL_9;
              }
              return (unsigned int)-1073741811;
            }
            v56 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v54, (__int64)a2, 0x78uLL, 1954169668);
            Pool2 = v56;
            if ( !v56 )
              return (unsigned int)-1073741801;
            *(_DWORD *)(v56 + 32) = 0;
            *(_QWORD *)(v56 + 56) = 0LL;
            *(_QWORD *)(v56 + 24) = 1LL;
            *(_DWORD *)(v56 + 48) = 159;
            *(_QWORD *)v56 = &DirectComposition::CSceneNodeMarshaler::`vftable';
            *(_QWORD *)(v56 + 64) = 0LL;
            *(_QWORD *)(v56 + 72) = 0LL;
            *(_QWORD *)(v56 + 80) = 0LL;
LABEL_105:
            *(_QWORD *)(Pool2 + 88) = 0LL;
            *(_QWORD *)(Pool2 + 96) = 0LL;
            *(_QWORD *)(Pool2 + 104) = 0LL;
            goto LABEL_10;
          }
          v57 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v53, (__int64)a2, 0x48uLL, 2054832964);
          Pool2 = v57;
          if ( v57 )
          {
            *(_DWORD *)(v57 + 32) = 0;
            *(_QWORD *)(v57 + 56) = 0LL;
            *(_QWORD *)(v57 + 24) = 1LL;
            *(_DWORD *)(v57 + 48) = 158;
            v9 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
            goto LABEL_8;
          }
        }
        else
        {
          v58 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v52, (__int64)a2, 0xB0uLL, 1919763268);
          Pool2 = v58;
          if ( v58 )
          {
            *(_DWORD *)(v58 + 32) = 0;
            *(_QWORD *)(v58 + 56) = 0LL;
            *(_QWORD *)(v58 + 24) = 1LL;
            *(_DWORD *)(v58 + 48) = 157;
            v9 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
            goto LABEL_8;
          }
        }
      }
      else
      {
        v59 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v51, (__int64)a2, 0xA0uLL, 1702511428);
        Pool2 = v59;
        if ( v59 )
        {
          *(_DWORD *)(v59 + 32) = 0;
          *(_QWORD *)(v59 + 56) = 0LL;
          *(_QWORD *)(v59 + 24) = 1LL;
          *(_DWORD *)(v59 + 48) = 155;
          v9 = &DirectComposition::CSceneMeshMarshaler::`vftable';
          goto LABEL_8;
        }
      }
    }
    else
    {
      v60 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v50, (__int64)a2, 0x68uLL, 863191876);
      Pool2 = v60;
      if ( v60 )
      {
        *(_DWORD *)(v60 + 32) = 0;
        *(_QWORD *)(v60 + 56) = 0LL;
        *(_QWORD *)(v60 + 24) = 1LL;
        *(_DWORD *)(v60 + 48) = 151;
        v9 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
        goto LABEL_8;
      }
    }
    return (unsigned int)-1073741801;
  }
  v7 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v6, (__int64)a2, 0x60uLL, 1953710916);
  Pool2 = v7;
  if ( !v7 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 24) = 1LL;
  *(_DWORD *)(v7 + 48) = 150;
  v9 = &DirectComposition::CScaleTransformMarshaler::`vftable';
LABEL_8:
  *(_QWORD *)Pool2 = v9;
LABEL_10:
  *a2 = Pool2;
  return v3;
}
