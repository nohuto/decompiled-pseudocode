/*
 * XREFs of ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B524
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18004B254 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001E08C (--$_Emplace_reallocate@AEBQEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@s.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004B1A0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004C414 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180053828 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008A3EC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800DFBC8 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800F0D00 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x1801ADEA8 (-ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801AE0CC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18026CE34 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

__int64 __fastcall CHitTestContext::PostSubgraph(CHitTestContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  const struct CVisual *v4; // r15
  __int64 v7; // rax
  unsigned int v9; // ebp
  struct _LIST_ENTRY **p_Blink; // rsi
  int v11; // eax
  CVisual *v12; // r10
  int WorldTransform; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  _DWORD *v19; // r8
  __int64 v20; // rcx
  _BYTE *v21; // rdx
  unsigned int j; // eax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  struct CInteraction *InteractionInternal; // rax
  __int64 v27; // r10
  __int64 v28; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  CMILMatrix *Matrix; // rax
  int v33; // eax
  _BYTE *v34; // rdx
  const struct CInteraction *v35; // rax
  bool v36; // dl
  _BYTE v37[64]; // [rsp+30h] [rbp-88h] BYREF
  int v38; // [rsp+70h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+10h] BYREF
  struct D2D_POINT_2F v41; // [rsp+D0h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = (const struct CVisual *)*((_QWORD *)this + 3);
  v40 = v3;
  v7 = *(_QWORD *)a2;
  v9 = 0;
  *a3 = 1;
  p_Blink = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v7 + 184))(a2) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v3 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        if ( (const struct CVisualTree *)i[2].Flink == a2 )
        {
          p_Blink = &i[-23].Blink;
          break;
        }
      }
    }
  }
  if ( !*((_QWORD *)this + 14) && !CVisual::IsPreserve3DRoot((CVisual *)v3, v4) && (*(_BYTE *)(v3 + 101) & 1) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) )
    {
      if ( *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((char *)this + 176) != 1
        || (Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v3)) == 0LL
        || (Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)(v3 + 140)),
            CMILMatrix::IsFacingUser(Matrix)) )
      {
        v38 = 0;
        WorldTransform = CVisual::GetWorldTransform((CVisual *)v3, a2, 4, (struct CMILMatrix *)v37, 0LL, 0LL);
        v9 = WorldTransform;
        if ( WorldTransform < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, WorldTransform, 0x10Fu, 0LL);
          return v9;
        }
        if ( CHitTestContext::GetPointInLocalSpace(
               (const struct D2D_POINT_2F *)this + 11,
               (const struct CMILMatrix *)v37,
               &v41) )
        {
          LOBYTE(v16) = *((_BYTE *)this + 240);
          v39 = 0;
          LOBYTE(v16) = v16 & 1;
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct D2D_POINT_2F *, char *))(*(_QWORD *)v3 + 296LL))(
                  v3,
                  v16,
                  &v41,
                  &v39);
          v9 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x117u, 0LL);
            return v9;
          }
          if ( v39 )
            *((_QWORD *)this + 14) = v3;
        }
      }
    }
  }
  if ( *(_DWORD *)(v3 + 208) != -1 )
  {
    v11 = *((_DWORD *)this + 44);
    if ( v11 )
      *((_DWORD *)this + 44) = v11 - 1;
  }
  if ( *((_BYTE *)p_Blink + 360) )
  {
    v33 = *((_DWORD *)this + 52);
    if ( v33 )
      *((_DWORD *)this + 52) = v33 - 1;
  }
  if ( !*((_QWORD *)this + 15) )
  {
    v12 = (CVisual *)*((_QWORD *)this + 14);
    if ( v12 == (CVisual *)v3 )
    {
      while ( v12 != *(CVisual **)(*((_QWORD *)a2 + 8) + 88LL) )
      {
        v19 = (_DWORD *)*((_QWORD *)v12 + 29);
        if ( (*v19 & 0x800000) != 0 )
        {
          v20 = (unsigned int)v19[1];
          v21 = v19 + 2;
          for ( j = 0; j < (unsigned int)v20; ++v21 )
          {
            if ( *v21 == 9 )
              break;
            ++j;
          }
          v23 = j >= (unsigned int)v20 ? 0LL : (__int64 *)((char *)v19 + v20 + 8LL * j - (((_BYTE)v20 + 15) & 7) + 15);
          v24 = *v23;
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 104);
            if ( v25 )
            {
              if ( *(_QWORD *)(v25 + 64) )
              {
                InteractionInternal = CVisual::GetInteractionInternal(v12);
                if ( InteractionInternal
                  && (v28 = *((_QWORD *)InteractionInternal + 13)) != 0
                  && *(_QWORD *)(v28 + 64)
                  && (*((_BYTE *)InteractionInternal + 192) & 4) != 0 )
                {
                  *((_QWORD *)this + 14) = 0LL;
                  *((_QWORD *)this + 21) = v27;
                }
                else
                {
                  *((_QWORD *)this + 21) = 0LL;
                }
                break;
              }
            }
          }
        }
        v12 = (CVisual *)*((_QWORD *)v12 + 11);
      }
    }
    if ( v3 == *((_QWORD *)this + 21) )
    {
      if ( v3 == *((_QWORD *)this + 20) )
      {
        v35 = CVisual::GetInteractionInternal((CVisual *)v3);
        v36 = 0;
      }
      else
      {
        v34 = (_BYTE *)*((_QWORD *)this + 18);
        if ( v34 == *((_BYTE **)this + 19) )
        {
          std::vector<CVisual *>::_Emplace_reallocate<CVisual * const &>((_QWORD *)this + 17, v34, &v40);
          v3 = v40;
        }
        else
        {
          *(_QWORD *)v34 = v3;
          *((_QWORD *)this + 18) += 8LL;
        }
        *((_QWORD *)this + 20) = v3;
        v35 = CVisual::GetInteractionInternal((CVisual *)v3);
        v36 = 1;
      }
      InputTraceLogging::DWM::MarkForFurtherEvaluation(v35, v36);
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( *((_QWORD *)this + 20) == v3 )
      *((_QWORD *)this + 20) = v4;
  }
  if ( *((_QWORD *)this + 14) )
  {
    if ( *((_QWORD *)this + 15) == v3 )
    {
      *((_QWORD *)this + 14) = 0LL;
      *((_BYTE *)this + 128) = 1;
      InputTraceLogging::GestureTargeting::ForcePalmRejection();
    }
    else
    {
      *a3 = 0;
    }
  }
  if ( *((_QWORD *)this + 15) == v3 )
    *((_QWORD *)this + 15) = 0LL;
  return v9;
}
