__int64 __fastcall DirectComposition::GeneratedCreatePrivateMarshaler(
        DirectComposition *this,
        __int64 *a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  __int64 QuotaZInit; // rcx
  __int64 v6; // rax
  const unsigned __int64 *v7; // rdx
  int v9; // edi
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  void **v14; // rax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  const unsigned __int64 *v21; // rdx
  __int64 v22; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v23; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v25; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v26; // rcx
  void **v27; // rax
  DirectComposition::CParticleEmitterVisualMarshaler *v28; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v29; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v30; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v31; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v32; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v33; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v34; // rcx
  DirectComposition::CSceneVisualMarshaler *v35; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v36; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v37; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v38; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v39; // rcx
  DirectComposition::CTextVisualMarshaler *v40; // rcx
  DirectComposition::CSuperWetInkVisualMarshaler *v41; // rcx

  if ( (unsigned int)this > 0x7D )
  {
    v9 = 173;
    if ( (unsigned int)this > 0xAD )
    {
      if ( (unsigned int)this <= 0xBD )
      {
        if ( (_DWORD)this == 189 )
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         this,
                         (unsigned __int64)a2,
                         0x60uLL,
                         0x67744344u);
          v6 = 0LL;
          if ( QuotaZInit )
          {
            *(_DWORD *)(QuotaZInit + 36) = 189;
            v7 = &DirectComposition::CTransformGroupMarshaler::`vftable';
            goto LABEL_10;
          }
LABEL_44:
          QuotaZInit = v6;
          goto LABEL_11;
        }
        v9 = 175;
        v36 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 175);
        if ( (_DWORD)v36 )
        {
          v37 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v36 - 4);
          if ( !(_DWORD)v37 )
          {
            v41 = (DirectComposition::CSuperWetInkVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                      v37,
                                                                      (unsigned __int64)a2,
                                                                      0x188uLL,
                                                                      0x75734344u);
            v6 = 0LL;
            if ( v41 )
              v6 = DirectComposition::CSuperWetInkVisualMarshaler::CSuperWetInkVisualMarshaler(v41);
            goto LABEL_44;
          }
          v38 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v37 - 3);
          if ( !(_DWORD)v38 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v38,
                           (unsigned __int64)a2,
                           0x78uLL,
                           0x79734344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 182;
            goto LABEL_24;
          }
          v39 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v38 - 3);
          if ( !(_DWORD)v39 )
          {
            v40 = (DirectComposition::CTextVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               v39,
                                                               (unsigned __int64)a2,
                                                               0x1C8uLL,
                                                               0x76744344u);
            v6 = 0LL;
            if ( v40 )
              v6 = DirectComposition::CTextVisualMarshaler::CTextVisualMarshaler(v40);
            goto LABEL_44;
          }
          if ( (_DWORD)v39 == 3 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v39,
                           (unsigned __int64)a2,
                           0x60uLL,
                           0x33674344u);
            v6 = 0LL;
            if ( QuotaZInit )
            {
              *(_DWORD *)(QuotaZInit + 36) = 188;
              v7 = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
              goto LABEL_10;
            }
            goto LABEL_44;
          }
          return 3221225485LL;
        }
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v36,
                       (unsigned __int64)a2,
                       0x68uLL,
                       0x7A734344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vftable';
      }
      else
      {
        v9 = 190;
        v15 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 190);
        if ( (_DWORD)v15 )
        {
          v17 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v15 - 1);
          if ( !(_DWORD)v17 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v17,
                           (unsigned __int64)a2,
                           0x58uLL,
                           0x33744344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 191;
            goto LABEL_24;
          }
          v18 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v17 - 6);
          if ( !(_DWORD)v18 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v18,
                           (unsigned __int64)a2,
                           0x40uLL,
                           0x78764344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 197;
            goto LABEL_24;
          }
          if ( (_DWORD)v18 != 2 )
            return 3221225485LL;
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v18,
                         (unsigned __int64)a2,
                         0x50uLL,
                         0x67764344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 36) = 199;
          v21 = &DirectComposition::CVisualGroupMarshaler::`vftable';
          goto LABEL_64;
        }
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v15,
                       (unsigned __int64)a2,
                       0x50uLL,
                       0x74744344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
      }
    }
    else if ( (_DWORD)this == 173 )
    {
      QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                     this,
                     (unsigned __int64)a2,
                     0x58uLL,
                     0x746B4344u);
      v6 = 0LL;
      if ( !QuotaZInit )
        goto LABEL_44;
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)(QuotaZInit + 48) = 0LL;
      v14 = &DirectComposition::CSkewTransformMarshaler::`vftable';
    }
    else
    {
      v9 = 157;
      if ( (unsigned int)this > 0x9D )
      {
        v9 = 159;
        v32 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 159);
        if ( (_DWORD)v32 )
        {
          v33 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v32 - 1);
          if ( !(_DWORD)v33 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v33,
                           (unsigned __int64)a2,
                           0x40uLL,
                           0x7A7A4344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 160;
            goto LABEL_24;
          }
          v34 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v33 - 1);
          if ( !(_DWORD)v34 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v34,
                           (unsigned __int64)a2,
                           0x70uLL,
                           0x747A4344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)QuotaZInit = &DirectComposition::CSceneNodeMarshaler::`vftable';
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            *(_QWORD *)(QuotaZInit + 24) = 1LL;
            *(_DWORD *)(QuotaZInit + 36) = 161;
            *(_QWORD *)(QuotaZInit + 56) = 0LL;
            *(_QWORD *)(QuotaZInit + 64) = 0LL;
            *(_QWORD *)(QuotaZInit + 72) = 0LL;
            goto LABEL_39;
          }
          if ( (_DWORD)v34 == 5 )
          {
            v35 = (DirectComposition::CSceneVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                v34,
                                                                (unsigned __int64)a2,
                                                                0x188uLL,
                                                                0x767A4344u);
            v6 = 0LL;
            if ( v35 )
              v6 = DirectComposition::CSceneVisualMarshaler::CSceneVisualMarshaler(v35);
            goto LABEL_44;
          }
          return 3221225485LL;
        }
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v32,
                       (unsigned __int64)a2,
                       0xA8uLL,
                       0x726D4344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
      }
      else
      {
        if ( (_DWORD)this != 157 )
        {
          v10 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 142);
          if ( !(_DWORD)v10 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v10,
                           (unsigned __int64)a2,
                           0x78uLL,
                           0x67724344u);
            v6 = 0LL;
            if ( QuotaZInit )
            {
              *(_DWORD *)(QuotaZInit + 32) = 0;
              *(_QWORD *)QuotaZInit = &DirectComposition::CRegionGeometryMarshaler::`vftable';
              *(_QWORD *)(QuotaZInit + 48) = 0LL;
              *(_QWORD *)(QuotaZInit + 24) = 1LL;
              *(_DWORD *)(QuotaZInit + 36) = 142;
              *(_QWORD *)(QuotaZInit + 96) = 0LL;
              *(_QWORD *)(QuotaZInit + 104) = 0LL;
              *(_QWORD *)(QuotaZInit + 112) = 0LL;
              goto LABEL_11;
            }
            goto LABEL_44;
          }
          v11 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v10 - 6);
          if ( !(_DWORD)v11 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v11,
                           (unsigned __int64)a2,
                           0x58uLL,
                           0x6F724344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CRotateTransformMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 148;
            goto LABEL_24;
          }
          v12 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v11 - 1);
          if ( !(_DWORD)v12 )
          {
            QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v12,
                           (unsigned __int64)a2,
                           0x68uLL,
                           0x33724344u);
            v6 = 0LL;
            if ( !QuotaZInit )
              goto LABEL_44;
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            v14 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
            *(_DWORD *)(QuotaZInit + 36) = 149;
            goto LABEL_24;
          }
          v13 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v12 - 3);
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 == 1 )
            {
              QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                             v13,
                             (unsigned __int64)a2,
                             0x60uLL,
                             0x33734344u);
              v6 = 0LL;
              if ( !QuotaZInit )
                goto LABEL_44;
              *(_DWORD *)(QuotaZInit + 32) = 0;
              *(_QWORD *)(QuotaZInit + 48) = 0LL;
              v14 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
              *(_DWORD *)(QuotaZInit + 36) = 153;
              goto LABEL_24;
            }
            return 3221225485LL;
          }
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v13,
                         (unsigned __int64)a2,
                         0x58uLL,
                         0x74734344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 48) = 0LL;
          v14 = &DirectComposition::CScaleTransformMarshaler::`vftable';
          *(_DWORD *)(QuotaZInit + 36) = 152;
LABEL_24:
          *(_QWORD *)QuotaZInit = v14;
          *(_QWORD *)(QuotaZInit + 24) = 1LL;
          goto LABEL_11;
        }
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       this,
                       (unsigned __int64)a2,
                       0x98uLL,
                       0x657A4344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CSceneMeshMarshaler::`vftable';
      }
    }
    *(_DWORD *)(QuotaZInit + 36) = v9;
    goto LABEL_24;
  }
  if ( (_DWORD)this == 125 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   this,
                   (unsigned __int64)a2,
                   0x58uLL,
                   0x68714344u);
    v6 = 0LL;
    if ( !QuotaZInit )
      goto LABEL_44;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    *(_QWORD *)(QuotaZInit + 24) = 1LL;
    *(_DWORD *)(QuotaZInit + 36) = 125;
    *(_QWORD *)(QuotaZInit + 56) = 0LL;
    *(_QWORD *)(QuotaZInit + 64) = 0LL;
    *(_QWORD *)(QuotaZInit + 72) = 0LL;
    v27 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
    goto LABEL_80;
  }
  if ( (unsigned int)this > 0x54 )
  {
    if ( (unsigned int)this > 0x78 )
    {
      v29 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 121);
      if ( !(_DWORD)v29 )
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v29,
                       (unsigned __int64)a2,
                       0xD0uLL,
                       0x67714344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CParticleGeneratorMarshaler::`vftable';
        *(_DWORD *)(QuotaZInit + 36) = 121;
        goto LABEL_24;
      }
      v30 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v29 - 1);
      if ( (_DWORD)v30 )
      {
        v31 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v30 - 1);
        if ( (_DWORD)v31 )
        {
          if ( (_DWORD)v31 != 1 )
            return 3221225485LL;
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v31,
                         (unsigned __int64)a2,
                         0x58uLL,
                         0x69714344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 48) = 0LL;
          *(_QWORD *)(QuotaZInit + 24) = 1LL;
          *(_DWORD *)(QuotaZInit + 36) = 124;
          *(_QWORD *)(QuotaZInit + 56) = 0LL;
          *(_QWORD *)(QuotaZInit + 64) = 0LL;
          *(_QWORD *)(QuotaZInit + 72) = 0LL;
          v27 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
        }
        else
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v31,
                         (unsigned __int64)a2,
                         0x58uLL,
                         0x66714344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 48) = 0LL;
          *(_QWORD *)(QuotaZInit + 24) = 1LL;
          *(_DWORD *)(QuotaZInit + 36) = 123;
          *(_QWORD *)(QuotaZInit + 56) = 0LL;
          *(_QWORD *)(QuotaZInit + 64) = 0LL;
          *(_QWORD *)(QuotaZInit + 72) = 0LL;
          v27 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
        }
      }
      else
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v30,
                       (unsigned __int64)a2,
                       0x58uLL,
                       0x65714344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_DWORD *)(QuotaZInit + 36) = 122;
        *(_QWORD *)(QuotaZInit + 56) = 0LL;
        *(_QWORD *)(QuotaZInit + 64) = 0LL;
        *(_QWORD *)(QuotaZInit + 72) = 0LL;
        v27 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
      }
    }
    else
    {
      if ( (_DWORD)this == 120 )
      {
        v28 = (DirectComposition::CParticleEmitterVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                      this,
                                                                      (unsigned __int64)a2,
                                                                      0x228uLL,
                                                                      0x76714344u);
        v6 = 0LL;
        if ( v28 )
          v6 = DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(v28);
        goto LABEL_44;
      }
      v23 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 100);
      if ( (_DWORD)v23 )
      {
        v24 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v23 - 11);
        if ( !(_DWORD)v24 )
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v24,
                         (unsigned __int64)a2,
                         0x88uLL,
                         0x676D4344u);
          v6 = 0LL;
          if ( QuotaZInit )
          {
            *(_DWORD *)(QuotaZInit + 32) = 0;
            *(_QWORD *)QuotaZInit = &DirectComposition::CMeshGeometry2DMarshaler::`vftable';
            *(_QWORD *)(QuotaZInit + 48) = 0LL;
            *(_QWORD *)(QuotaZInit + 24) = 1LL;
            *(_DWORD *)(QuotaZInit + 36) = 111;
            *(_QWORD *)(QuotaZInit + 64) = 0LL;
            *(_QWORD *)(QuotaZInit + 72) = 0LL;
            *(_QWORD *)(QuotaZInit + 80) = 0LL;
            *(_QWORD *)(QuotaZInit + 88) = 0LL;
            *(_QWORD *)(QuotaZInit + 96) = 0LL;
            *(_QWORD *)(QuotaZInit + 104) = 0LL;
            *(_QWORD *)(QuotaZInit + 112) = 0LL;
            *(_QWORD *)(QuotaZInit + 120) = 0LL;
            *(_QWORD *)(QuotaZInit + 128) = 0LL;
            goto LABEL_11;
          }
          goto LABEL_44;
        }
        v25 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v24 - 4);
        if ( !(_DWORD)v25 )
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v25,
                         (unsigned __int64)a2,
                         0x50uLL,
                         0x72714344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 48) = 0LL;
          v14 = &DirectComposition::CParticleAttractorMarshaler::`vftable';
          *(_DWORD *)(QuotaZInit + 36) = 115;
          goto LABEL_24;
        }
        v26 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v25 - 2);
        if ( !(_DWORD)v26 )
        {
          QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v26,
                         (unsigned __int64)a2,
                         0x90uLL,
                         0x62714344u);
          v6 = 0LL;
          if ( !QuotaZInit )
            goto LABEL_44;
          *(_DWORD *)(QuotaZInit + 32) = 0;
          *(_QWORD *)(QuotaZInit + 48) = 0LL;
          v14 = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
          *(_DWORD *)(QuotaZInit + 36) = 117;
          goto LABEL_24;
        }
        if ( (_DWORD)v26 != 1 )
          return 3221225485LL;
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v26,
                       (unsigned __int64)a2,
                       0x58uLL,
                       0x64714344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_DWORD *)(QuotaZInit + 36) = 118;
        *(_QWORD *)(QuotaZInit + 56) = 0LL;
        *(_QWORD *)(QuotaZInit + 64) = 0LL;
        *(_QWORD *)(QuotaZInit + 72) = 0LL;
        v27 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
      }
      else
      {
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       v23,
                       (unsigned __int64)a2,
                       0xA0uLL,
                       0x626C4344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        *(_QWORD *)(QuotaZInit + 24) = 1LL;
        *(_DWORD *)(QuotaZInit + 36) = 100;
        *(_QWORD *)(QuotaZInit + 104) = 0LL;
        *(_QWORD *)(QuotaZInit + 112) = 0LL;
        *(_QWORD *)(QuotaZInit + 120) = 0LL;
        v27 = &DirectComposition::CLinearGradientLegacyMilBrushMarshaler::`vftable';
      }
    }
LABEL_80:
    *(_QWORD *)QuotaZInit = v27;
    goto LABEL_11;
  }
  if ( (_DWORD)this == 84 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   this,
                   (unsigned __int64)a2,
                   0xB8uLL,
                   0x62694344u);
    v6 = 0LL;
    if ( !QuotaZInit )
      goto LABEL_44;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    v14 = &DirectComposition::CImageLegacyMilBrushMarshaler::`vftable';
    *(_DWORD *)(QuotaZInit + 36) = 84;
    goto LABEL_24;
  }
  if ( (unsigned int)this > 0x2B )
  {
    switch ( (_DWORD)this )
    {
      case ':':
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       this,
                       (unsigned __int64)a2,
                       0x58uLL,
                       0x67654344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CEffectGroupMarshaler::`vftable';
        *(_DWORD *)(QuotaZInit + 36) = 58;
        goto LABEL_24;
      case '2':
        v22 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                this,
                (unsigned __int64)a2,
                0x188uLL,
                0x79634344u);
        v6 = 0LL;
        if ( v22 )
        {
          DirectComposition::CVisualMarshaler::CVisualMarshaler(v22, 50);
          *(_QWORD *)QuotaZInit = &DirectComposition::CCursorVisualMarshaler::`vftable';
          goto LABEL_11;
        }
        goto LABEL_44;
      case 'A':
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       this,
                       (unsigned __int64)a2,
                       0x70uLL,
                       0x64674344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 36) = 65;
        v21 = &DirectComposition::CGdiSpriteBitmapMarshaler::`vftable';
        break;
      case 'E':
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       this,
                       (unsigned __int64)a2,
                       0x50uLL,
                       0x67674344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 36) = 69;
        v21 = (const unsigned __int64 *)&DirectComposition::CGeometry2DGroupMarshaler::`vftable';
        break;
      case 'H':
        QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                       this,
                       (unsigned __int64)a2,
                       0x50uLL,
                       0x76674344u);
        v6 = 0LL;
        if ( !QuotaZInit )
          goto LABEL_44;
        *(_DWORD *)(QuotaZInit + 32) = 0;
        *(_QWORD *)(QuotaZInit + 48) = 0LL;
        v14 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
        *(_DWORD *)(QuotaZInit + 36) = 72;
        goto LABEL_24;
      default:
        return 3221225485LL;
    }
LABEL_64:
    *(_QWORD *)(QuotaZInit + 24) = 1LL;
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)QuotaZInit = v21;
    *(_QWORD *)(QuotaZInit + 56) = 0LL;
    *(_QWORD *)(QuotaZInit + 64) = 0LL;
    *(_QWORD *)(QuotaZInit + 72) = 0LL;
    goto LABEL_11;
  }
  if ( (_DWORD)this == 43 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   this,
                   (unsigned __int64)a2,
                   0x60uLL,
                   0x6C744344u);
    v6 = 0LL;
    if ( !QuotaZInit )
      goto LABEL_44;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    v14 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
    *(_DWORD *)(QuotaZInit + 36) = 43;
    goto LABEL_24;
  }
  v4 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 3);
  if ( !(_DWORD)v4 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   v4,
                   (unsigned __int64)a2,
                   0x68uLL,
                   0x68614344u);
    v6 = 0LL;
    if ( QuotaZInit )
    {
      *(_DWORD *)(QuotaZInit + 36) = 3;
      v7 = &DirectComposition::CAnimationControllerMarshaler::`vftable';
LABEL_10:
      *(_QWORD *)(QuotaZInit + 24) = 1LL;
      *(_QWORD *)(QuotaZInit + 48) = 0LL;
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)QuotaZInit = v7;
      *(_QWORD *)(QuotaZInit + 72) = 0LL;
      *(_QWORD *)(QuotaZInit + 80) = 0LL;
      *(_QWORD *)(QuotaZInit + 88) = 0LL;
LABEL_11:
      *a2 = QuotaZInit;
      return 0LL;
    }
    goto LABEL_44;
  }
  v16 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v4 - 2);
  if ( !(_DWORD)v16 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   v16,
                   (unsigned __int64)a2,
                   0x78uLL,
                   0x72744344u);
    v6 = 0LL;
    if ( !QuotaZInit )
      goto LABEL_44;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)QuotaZInit = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    *(_QWORD *)(QuotaZInit + 24) = 1LL;
    *(_DWORD *)(QuotaZInit + 36) = 5;
LABEL_39:
    *(_QWORD *)(QuotaZInit + 80) = 0LL;
    *(_QWORD *)(QuotaZInit + 88) = 0LL;
    *(_QWORD *)(QuotaZInit + 96) = 0LL;
    goto LABEL_11;
  }
  v19 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v16 - 2);
  if ( !(_DWORD)v19 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   v19,
                   (unsigned __int64)a2,
                   0x58uLL,
                   0x77614344u);
    v6 = 0LL;
    if ( QuotaZInit )
    {
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)QuotaZInit = &DirectComposition::CAtlasedRectsGroupMarshaler::`vftable';
      *(_QWORD *)(QuotaZInit + 48) = 0LL;
      *(_QWORD *)(QuotaZInit + 24) = 1LL;
      *(_DWORD *)(QuotaZInit + 36) = 7;
      *(_QWORD *)(QuotaZInit + 64) = 0LL;
      *(_QWORD *)(QuotaZInit + 72) = 0LL;
      *(_QWORD *)(QuotaZInit + 80) = 0LL;
      goto LABEL_11;
    }
    goto LABEL_44;
  }
  v20 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v19 - 1);
  if ( !(_DWORD)v20 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   v20,
                   (unsigned __int64)a2,
                   0x70uLL,
                   0x30614344u);
    v6 = 0LL;
    if ( QuotaZInit )
    {
      *(_DWORD *)(QuotaZInit + 32) = 0;
      *(_QWORD *)QuotaZInit = &DirectComposition::CAtlasedRectsMeshMarshaler::`vftable';
      *(_QWORD *)(QuotaZInit + 48) = 0LL;
      *(_QWORD *)(QuotaZInit + 24) = 1LL;
      *(_DWORD *)(QuotaZInit + 36) = 8;
      *(_QWORD *)(QuotaZInit + 64) = 0LL;
      *(_QWORD *)(QuotaZInit + 72) = 0LL;
      *(_QWORD *)(QuotaZInit + 80) = 0LL;
      *(_QWORD *)(QuotaZInit + 88) = 0LL;
      *(_QWORD *)(QuotaZInit + 96) = 0LL;
      *(_QWORD *)(QuotaZInit + 104) = 0LL;
      goto LABEL_11;
    }
    goto LABEL_44;
  }
  if ( (_DWORD)v20 == 27 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                   v20,
                   (unsigned __int64)a2,
                   0x60uLL,
                   0x72674344u);
    v6 = 0LL;
    if ( !QuotaZInit )
      goto LABEL_44;
    *(_DWORD *)(QuotaZInit + 32) = 0;
    *(_QWORD *)(QuotaZInit + 48) = 0LL;
    v14 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
    *(_DWORD *)(QuotaZInit + 36) = 35;
    goto LABEL_24;
  }
  return 3221225485LL;
}
