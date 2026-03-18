/*
 * XREFs of ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C0031DE4
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002EB8C (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CTransformGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000CC84 (--0CTransformGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C003033C (--0CNotificationResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0030544 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00ADB7C (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00B0674 (--0CContentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B78C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B804 (--0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGdiSpriteBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D724 (--0CGdiSpriteBitmapMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGeometry2DGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D760 (--0CGeometry2DGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CLegacyMilBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020D79C (--0CLegacyMilBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D7C4 (--0CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CMeshGeometry2DMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D800 (--0CMeshGeometry2DMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CParticleBaseBehaviorMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020D858 (--0CParticleBaseBehaviorMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D890 (--0CParticleEmitterVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D8D4 (--0CSceneNodeMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTextObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020D91C (--0CTextObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CTextVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D944 (--0CTextVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CTransform3DGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D9B4 (--0CTransform3DGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ @ 0x1C020D9F0 (--0CVisualGroupMarshaler@DirectComposition@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::GeneratedCreatePrivateMarshaler(
        DirectComposition *this,
        _QWORD *a2,
        struct DirectComposition::CResourceMarshaler **a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  DirectComposition::CRegionGeometryMarshaler *v9; // rax
  DirectComposition::CTransformGroupMarshaler *v10; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v12; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  _QWORD *v14; // rax
  void **v15; // rax
  NSInstrumentation::CLeakTrackingAllocator *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  DirectComposition::CTransformGroupMarshaler *QuotaZInit; // rax
  NSInstrumentation::CLeakTrackingAllocator *v20; // rcx
  _QWORD *v21; // rax
  NSInstrumentation::CLeakTrackingAllocator *v22; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v23; // rcx
  __int64 v24; // rax
  NSInstrumentation::CLeakTrackingAllocator *v25; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  DirectComposition::CGeometry2DGroupMarshaler *v32; // rax
  DirectComposition::CGdiSpriteBitmapMarshaler *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  NSInstrumentation::CLeakTrackingAllocator *v36; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v37; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v38; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  DirectComposition::CMeshGeometry2DMarshaler *v43; // rax
  DirectComposition::CLinearGradientLegacyMilBrushMarshaler *v44; // rax
  DirectComposition::CParticleEmitterVisualMarshaler *v45; // rax
  NSInstrumentation::CLeakTrackingAllocator *v46; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v47; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  NSInstrumentation::CLeakTrackingAllocator *v58; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v59; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v60; // rcx
  __int64 v61; // rax
  DirectComposition::CSceneNodeMarshaler *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  NSInstrumentation::CLeakTrackingAllocator *v66; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v67; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v68; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v69; // rcx
  DirectComposition::CTransform3DGroupMarshaler *v70; // rax
  DirectComposition::CTextVisualMarshaler *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  DirectComposition::CVisualGroupMarshaler *v75; // rax
  _QWORD *v76; // rax

  if ( (unsigned int)this > 0x7D )
  {
    if ( (unsigned int)this > 0xAD )
    {
      if ( (unsigned int)this <= 0xBD )
      {
        if ( (_DWORD)this == 189 )
        {
          QuotaZInit = (DirectComposition::CTransformGroupMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                        this,
                                                                        (unsigned __int64)a2,
                                                                        0x60uLL,
                                                                        0x67744344u);
          if ( !QuotaZInit )
            goto LABEL_42;
          v10 = DirectComposition::CTransformGroupMarshaler::CTransformGroupMarshaler(QuotaZInit);
        }
        else
        {
          v66 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 175);
          if ( !(_DWORD)v66 )
          {
            v74 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v66,
                    (unsigned __int64)a2,
                    0x68uLL,
                    0x7A734344u);
            v6 = (_QWORD *)v74;
            if ( !v74 )
              goto LABEL_42;
            DirectComposition::CLegacyMilBrushMarshaler::CLegacyMilBrushMarshaler(v74, 175LL);
            v15 = &DirectComposition::CSolidColorLegacyMilBrushMarshaler::`vftable';
            goto LABEL_24;
          }
          v67 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v66 - 4);
          if ( !(_DWORD)v67 )
          {
            v73 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v67,
                    (unsigned __int64)a2,
                    0x188uLL,
                    0x75734344u);
            v6 = (_QWORD *)v73;
            if ( !v73 )
              goto LABEL_42;
            DirectComposition::CVisualMarshaler::CVisualMarshaler(v73, 179LL);
            v15 = &DirectComposition::CSuperWetInkVisualMarshaler::`vftable';
            goto LABEL_24;
          }
          v68 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v67 - 3);
          if ( !(_DWORD)v68 )
          {
            v72 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v68,
                    (unsigned __int64)a2,
                    0x78uLL,
                    0x79734344u);
            v6 = (_QWORD *)v72;
            if ( !v72 )
              goto LABEL_42;
            DirectComposition::CContentMarshaler::CContentMarshaler(v72, 182LL);
            v15 = &DirectComposition::CSynchronousSuperWetInkMarshaler::`vftable';
            goto LABEL_24;
          }
          v69 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v68 - 3);
          if ( (_DWORD)v69 )
          {
            if ( (_DWORD)v69 != 3 )
              return 3221225485LL;
            v70 = (DirectComposition::CTransform3DGroupMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                     v69,
                                                                     (unsigned __int64)a2,
                                                                     0x60uLL,
                                                                     0x33674344u);
            if ( !v70 )
              goto LABEL_42;
            v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CTransform3DGroupMarshaler::CTransform3DGroupMarshaler(v70);
          }
          else
          {
            v71 = (DirectComposition::CTextVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               v69,
                                                               (unsigned __int64)a2,
                                                               0x1C8uLL,
                                                               0x76744344u);
            if ( !v71 )
              goto LABEL_42;
            v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CTextVisualMarshaler::CTextVisualMarshaler(v71);
          }
        }
        goto LABEL_18;
      }
      v16 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 190);
      if ( (_DWORD)v16 )
      {
        v22 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v16 - 1);
        if ( !(_DWORD)v22 )
        {
          v76 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                            v22,
                            (unsigned __int64)a2,
                            0x58uLL,
                            0x33744344u);
          v6 = v76;
          if ( !v76 )
            goto LABEL_42;
          DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v76, 191LL);
          v15 = &DirectComposition::CTranslateTransform3DMarshaler::`vftable';
          goto LABEL_24;
        }
        v23 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v22 - 6);
        if ( !(_DWORD)v23 )
        {
          v24 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                  v23,
                  (unsigned __int64)a2,
                  0x40uLL,
                  0x78764344u);
          v6 = (_QWORD *)v24;
          if ( !v24 )
            goto LABEL_42;
          DirectComposition::CContentMarshaler::CContentMarshaler(v24, 197LL);
          v15 = &DirectComposition::CVisualBitmapMarshaler::`vftable';
          goto LABEL_24;
        }
        if ( (_DWORD)v23 != 2 )
          return 3221225485LL;
        v75 = (DirectComposition::CVisualGroupMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                            v23,
                                                            (unsigned __int64)a2,
                                                            0x50uLL,
                                                            0x67764344u);
        if ( !v75 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CVisualGroupMarshaler::CVisualGroupMarshaler(v75);
        goto LABEL_18;
      }
      v17 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v16,
                        (unsigned __int64)a2,
                        0x50uLL,
                        0x74744344u);
      v6 = v17;
      if ( !v17 )
        goto LABEL_42;
      DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v17, 190LL);
      v15 = &DirectComposition::CTranslateTransformMarshaler::`vftable';
    }
    else
    {
      if ( (_DWORD)this == 173 )
      {
        v65 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                          this,
                          (unsigned __int64)a2,
                          0x58uLL,
                          0x746B4344u);
        v6 = v65;
        if ( !v65 )
          goto LABEL_42;
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v65, 173LL);
        v15 = &DirectComposition::CSkewTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      if ( (unsigned int)this > 0x9D )
      {
        v58 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 159);
        if ( !(_DWORD)v58 )
        {
          v64 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                  v58,
                  (unsigned __int64)a2,
                  0xA8uLL,
                  0x726D4344u);
          v6 = (_QWORD *)v64;
          if ( !v64 )
            goto LABEL_42;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v64, 159LL);
          v15 = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
          goto LABEL_24;
        }
        v59 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v58 - 1);
        if ( !(_DWORD)v59 )
        {
          v63 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                  v59,
                  (unsigned __int64)a2,
                  0x40uLL,
                  0x7A7A4344u);
          v6 = (_QWORD *)v63;
          if ( !v63 )
            goto LABEL_42;
          DirectComposition::CResourceMarshaler::CResourceMarshaler(v63, 160LL);
          v15 = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
          goto LABEL_24;
        }
        v60 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v59 - 1);
        if ( (_DWORD)v60 )
        {
          if ( (_DWORD)v60 == 5 )
          {
            v61 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v60,
                    (unsigned __int64)a2,
                    0x188uLL,
                    0x767A4344u);
            v6 = (_QWORD *)v61;
            if ( !v61 )
              goto LABEL_42;
            DirectComposition::CVisualMarshaler::CVisualMarshaler(v61, 166LL);
            v15 = &DirectComposition::CSceneVisualMarshaler::`vftable';
            goto LABEL_24;
          }
          return 3221225485LL;
        }
        v62 = (DirectComposition::CSceneNodeMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                          v60,
                                                          (unsigned __int64)a2,
                                                          0x70uLL,
                                                          0x747A4344u);
        if ( !v62 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CSceneNodeMarshaler::CSceneNodeMarshaler(v62);
        goto LABEL_18;
      }
      if ( (_DWORD)this == 157 )
      {
        v57 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                this,
                (unsigned __int64)a2,
                0x98uLL,
                0x657A4344u);
        v6 = (_QWORD *)v57;
        if ( !v57 )
          goto LABEL_42;
        DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(v57, 157LL);
        v15 = &DirectComposition::CSceneMeshMarshaler::`vftable';
        goto LABEL_24;
      }
      v8 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 142);
      if ( !(_DWORD)v8 )
      {
        v9 = (DirectComposition::CRegionGeometryMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                              v8,
                                                              (unsigned __int64)a2,
                                                              0x78uLL,
                                                              0x67724344u);
        if ( !v9 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CRegionGeometryMarshaler::CRegionGeometryMarshaler(v9);
        goto LABEL_18;
      }
      v11 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v8 - 6);
      if ( !(_DWORD)v11 )
      {
        v56 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                          v11,
                          (unsigned __int64)a2,
                          0x58uLL,
                          0x6F724344u);
        v6 = v56;
        if ( !v56 )
          goto LABEL_42;
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v56, 148LL);
        v15 = &DirectComposition::CRotateTransformMarshaler::`vftable';
        goto LABEL_24;
      }
      v12 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v11 - 1);
      if ( !(_DWORD)v12 )
      {
        v55 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                          v12,
                          (unsigned __int64)a2,
                          0x68uLL,
                          0x33724344u);
        v6 = v55;
        if ( !v55 )
          goto LABEL_42;
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v55, 149LL);
        v15 = &DirectComposition::CRotateTransform3DMarshaler::`vftable';
        goto LABEL_24;
      }
      v13 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v12 - 3);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 == 1 )
        {
          v54 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                            v13,
                            (unsigned __int64)a2,
                            0x60uLL,
                            0x33734344u);
          v6 = v54;
          if ( !v54 )
            goto LABEL_42;
          DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v54, 153LL);
          v15 = &DirectComposition::CScaleTransform3DMarshaler::`vftable';
          goto LABEL_24;
        }
        return 3221225485LL;
      }
      v14 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                        v13,
                        (unsigned __int64)a2,
                        0x58uLL,
                        0x74734344u);
      v6 = v14;
      if ( !v14 )
        goto LABEL_42;
      DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v14, 152LL);
      v15 = &DirectComposition::CScaleTransformMarshaler::`vftable';
    }
LABEL_24:
    *v6 = v15;
    goto LABEL_10;
  }
  if ( (_DWORD)this == 125 )
  {
    v53 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
            this,
            (unsigned __int64)a2,
            0x58uLL,
            0x68714344u);
    v6 = (_QWORD *)v53;
    if ( !v53 )
      goto LABEL_42;
    DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(v53, 125LL);
    v15 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
    goto LABEL_24;
  }
  if ( (unsigned int)this > 0x54 )
  {
    if ( (unsigned int)this > 0x78 )
    {
      v46 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 121);
      if ( !(_DWORD)v46 )
      {
        v52 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v46,
                (unsigned __int64)a2,
                0xD0uLL,
                0x67714344u);
        v6 = (_QWORD *)v52;
        if ( !v52 )
          goto LABEL_42;
        DirectComposition::CResourceMarshaler::CResourceMarshaler(v52, 121LL);
        v15 = &DirectComposition::CParticleGeneratorMarshaler::`vftable';
        goto LABEL_24;
      }
      v47 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v46 - 1);
      if ( !(_DWORD)v47 )
      {
        v51 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v47,
                (unsigned __int64)a2,
                0x58uLL,
                0x65714344u);
        v6 = (_QWORD *)v51;
        if ( !v51 )
          goto LABEL_42;
        DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(v51, 122LL);
        v15 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
        goto LABEL_24;
      }
      v48 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v47 - 1);
      if ( !(_DWORD)v48 )
      {
        v50 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v48,
                (unsigned __int64)a2,
                0x58uLL,
                0x66714344u);
        v6 = (_QWORD *)v50;
        if ( !v50 )
          goto LABEL_42;
        DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(v50, 123LL);
        v15 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
        goto LABEL_24;
      }
      if ( (_DWORD)v48 == 1 )
      {
        v49 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                v48,
                (unsigned __int64)a2,
                0x58uLL,
                0x69714344u);
        v6 = (_QWORD *)v49;
        if ( !v49 )
          goto LABEL_42;
        DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(v49, 124LL);
        v15 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
        goto LABEL_24;
      }
      return 3221225485LL;
    }
    if ( (_DWORD)this == 120 )
    {
      v45 = (DirectComposition::CParticleEmitterVisualMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                    this,
                                                                    (unsigned __int64)a2,
                                                                    0x228uLL,
                                                                    0x76714344u);
      if ( !v45 )
        goto LABEL_42;
      v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CParticleEmitterVisualMarshaler::CParticleEmitterVisualMarshaler(v45);
    }
    else
    {
      v36 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 100);
      if ( (_DWORD)v36 )
      {
        v37 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v36 - 11);
        if ( (_DWORD)v37 )
        {
          v38 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v37 - 4);
          if ( !(_DWORD)v38 )
          {
            v42 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v38,
                    (unsigned __int64)a2,
                    0x50uLL,
                    0x72714344u);
            v6 = (_QWORD *)v42;
            if ( !v42 )
              goto LABEL_42;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v42, 115LL);
            v15 = &DirectComposition::CParticleAttractorMarshaler::`vftable';
            goto LABEL_24;
          }
          v39 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v38 - 2);
          if ( !(_DWORD)v39 )
          {
            v41 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v39,
                    (unsigned __int64)a2,
                    0x90uLL,
                    0x62714344u);
            v6 = (_QWORD *)v41;
            if ( !v41 )
              goto LABEL_42;
            DirectComposition::CResourceMarshaler::CResourceMarshaler(v41, 117LL);
            v15 = &DirectComposition::CParticleBehaviorsMarshaler::`vftable';
            goto LABEL_24;
          }
          if ( (_DWORD)v39 == 1 )
          {
            v40 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                    v39,
                    (unsigned __int64)a2,
                    0x58uLL,
                    0x64714344u);
            v6 = (_QWORD *)v40;
            if ( !v40 )
              goto LABEL_42;
            DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(v40, 118LL);
            v15 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
            goto LABEL_24;
          }
          return 3221225485LL;
        }
        v43 = (DirectComposition::CMeshGeometry2DMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                               v37,
                                                               (unsigned __int64)a2,
                                                               0x88uLL,
                                                               0x676D4344u);
        if ( !v43 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CMeshGeometry2DMarshaler::CMeshGeometry2DMarshaler(v43);
      }
      else
      {
        v44 = (DirectComposition::CLinearGradientLegacyMilBrushMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                             v36,
                                                                             (unsigned __int64)a2,
                                                                             0xA0uLL,
                                                                             0x626C4344u);
        if ( !v44 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CLinearGradientLegacyMilBrushMarshaler::CLinearGradientLegacyMilBrushMarshaler(v44);
      }
    }
    goto LABEL_18;
  }
  if ( (_DWORD)this == 84 )
  {
    v35 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
            this,
            (unsigned __int64)a2,
            0xB8uLL,
            0x62694344u);
    v6 = (_QWORD *)v35;
    if ( !v35 )
      goto LABEL_42;
    DirectComposition::CLegacyMilBrushMarshaler::CLegacyMilBrushMarshaler(v35, 84LL);
    v15 = &DirectComposition::CImageLegacyMilBrushMarshaler::`vftable';
    goto LABEL_24;
  }
  if ( (unsigned int)this > 0x2B )
  {
    switch ( (_DWORD)this )
    {
      case ':':
        v18 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                          this,
                          (unsigned __int64)a2,
                          0x58uLL,
                          0x67654344u);
        v6 = v18;
        if ( !v18 )
          goto LABEL_42;
        DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v18, 58LL);
        v15 = &DirectComposition::CEffectGroupMarshaler::`vftable';
        goto LABEL_24;
      case '2':
        v34 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                this,
                (unsigned __int64)a2,
                0x188uLL,
                0x79634344u);
        v6 = (_QWORD *)v34;
        if ( !v34 )
          goto LABEL_42;
        DirectComposition::CVisualMarshaler::CVisualMarshaler(v34, 50LL);
        v15 = &DirectComposition::CCursorVisualMarshaler::`vftable';
        goto LABEL_24;
      case 'A':
        v33 = (DirectComposition::CGdiSpriteBitmapMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                (unsigned __int64)a2,
                                                                0x70uLL,
                                                                0x64674344u);
        if ( !v33 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CGdiSpriteBitmapMarshaler::CGdiSpriteBitmapMarshaler(v33);
        break;
      case 'E':
        v32 = (DirectComposition::CGeometry2DGroupMarshaler *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                                this,
                                                                (unsigned __int64)a2,
                                                                0x50uLL,
                                                                0x67674344u);
        if ( !v32 )
          goto LABEL_42;
        v10 = (DirectComposition::CTransformGroupMarshaler *)DirectComposition::CGeometry2DGroupMarshaler::CGeometry2DGroupMarshaler(v32);
        break;
      case 'H':
        v31 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                this,
                (unsigned __int64)a2,
                0x50uLL,
                0x76674344u);
        v6 = (_QWORD *)v31;
        if ( !v31 )
          goto LABEL_42;
        DirectComposition::CContentMarshaler::CContentMarshaler(v31, 72LL);
        v15 = &DirectComposition::CGlobalDCompVisualMarshaler::`vftable';
        goto LABEL_24;
      default:
        return 3221225485LL;
    }
LABEL_18:
    v6 = v10;
    goto LABEL_10;
  }
  if ( (_DWORD)this == 43 )
  {
    v30 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
            this,
            (unsigned __int64)a2,
            0x60uLL,
            0x6C744344u);
    v6 = (_QWORD *)v30;
    if ( !v30 )
      goto LABEL_42;
    DirectComposition::CTextObjectMarshaler::CTextObjectMarshaler(v30, 43LL);
    v15 = &DirectComposition::CCompositionTextLineMarshaler::`vftable';
    goto LABEL_24;
  }
  v4 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)this - 3);
  if ( !(_DWORD)v4 )
  {
    v5 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                     v4,
                     (unsigned __int64)a2,
                     0x68uLL,
                     0x68614344u);
    v6 = v5;
    if ( v5 )
    {
      DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v5, 3LL);
      *v6 = &DirectComposition::CAnimationControllerMarshaler::`vftable';
      v6[9] = 0LL;
      v6[10] = 0LL;
      v6[11] = 0LL;
LABEL_10:
      *a2 = v6;
      return 0LL;
    }
LABEL_42:
    v6 = 0LL;
    goto LABEL_10;
  }
  v20 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v4 - 2);
  if ( !(_DWORD)v20 )
  {
    v21 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                      v20,
                      (unsigned __int64)a2,
                      0x78uLL,
                      0x72744344u);
    v6 = v21;
    if ( v21 )
    {
      DirectComposition::CNotificationResourceMarshaler::CNotificationResourceMarshaler(v21, 5LL);
      *v6 = &DirectComposition::CAnimationTriggerMarshaler::`vftable';
      v6[10] = 0LL;
      v6[11] = 0LL;
      v6[12] = 0LL;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  v25 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v20 - 2);
  if ( !(_DWORD)v25 )
  {
    v29 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v25, (unsigned __int64)a2, 0x58uLL, 0x77614344u);
    v6 = (_QWORD *)v29;
    if ( v29 )
    {
      DirectComposition::CContentMarshaler::CContentMarshaler(v29, 7LL);
      *v6 = &DirectComposition::CAtlasedRectsGroupMarshaler::`vftable';
      v6[8] = 0LL;
      v6[9] = 0LL;
      v6[10] = 0LL;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  v26 = (NSInstrumentation::CLeakTrackingAllocator *)(unsigned int)((_DWORD)v25 - 1);
  if ( !(_DWORD)v26 )
  {
    v28 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v26, (unsigned __int64)a2, 0x70uLL, 0x30614344u);
    v6 = (_QWORD *)v28;
    if ( v28 )
    {
      DirectComposition::CResourceMarshaler::CResourceMarshaler(v28, 8LL);
      *v6 = &DirectComposition::CAtlasedRectsMeshMarshaler::`vftable';
      v6[8] = 0LL;
      v6[9] = 0LL;
      v6[10] = 0LL;
      v6[11] = 0LL;
      v6[12] = 0LL;
      v6[13] = 0LL;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  if ( (_DWORD)v26 == 27 )
  {
    v27 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v26, (unsigned __int64)a2, 0x60uLL, 0x72674344u);
    v6 = (_QWORD *)v27;
    if ( !v27 )
      goto LABEL_42;
    DirectComposition::CTextObjectMarshaler::CTextObjectMarshaler(v27, 35LL);
    v15 = &DirectComposition::CCompositionGlyphRunMarshaler::`vftable';
    goto LABEL_24;
  }
  return 3221225485LL;
}
