/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800119AC
 * Callers:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000DCA4 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18000DEE0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002CDC4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BF14C (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000E880 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18000EB0C (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000EE00 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800102C0 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011D80 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180011E14 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001397C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800156D8 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180019374 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001A168 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180020A90 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026B04 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AD80 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B1E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18003D57C (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x18009386C (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualIma.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180094258 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CThumbnailVisual *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  LONG v9; // eax
  LONG v10; // eax
  int BrushForCVI; // eax
  __int64 v12; // rax
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  struct tagPOINT **v17; // r14
  struct tagPOINT v18; // rcx
  struct IDwmWindow *v19; // rax
  __m128i *v20; // rbp
  __int64 v21; // r10
  unsigned int v22; // eax
  unsigned int v23; // r8d
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  char v29; // al
  double v30; // xmm1_8
  int v31; // r9d
  __int64 v32; // rax
  double v33; // xmm1_8
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  __int64 v36; // rdx
  bool v37; // r10
  int v38; // r8d
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-38h]
  struct tagPOINT v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties(this, a2);
  if ( (v2 & 4) != 0 )
  {
    v28 = *((_QWORD *)this + 46);
    if ( v28 )
    {
      v29 = *(_BYTE *)(v28 + 35);
      if ( *((_BYTE *)this + 356) != v29 )
      {
        *((_BYTE *)this + 356) = v29;
        if ( v29 )
        {
          v30 = 0.0;
          *((_QWORD *)this + 42) = *((_QWORD *)this + 23);
        }
        else
        {
          v30 = *((double *)this + 42);
        }
        CVisual::SetOpacity(this, v30);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && *((_QWORD *)this + 46) )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
    {
      CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    }
    else
    {
      v51 = *(struct tagPOINT *)(*((_QWORD *)this + 46) + 40LL);
      CVisual::SetOffset(this, &v51);
    }
    v6 = (_DWORD *)*((_QWORD *)this + 46);
    v7 = v6[13] - v6[11];
    v8 = v6[12] - v6[10];
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
    v51.x = v9;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v51.y = v10;
    BrushForCVI = (*(__int64 (__fastcall **)(CThumbnailVisual *, struct tagPOINT *))(*(_QWORD *)this + 96LL))(
                    this,
                    &v51);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 318;
      goto LABEL_77;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
  }
  if ( !*((_BYTE *)this + 356) && updated < 0 && (v2 & 4) != 0 )
  {
    v32 = *((_QWORD *)this + 46);
    if ( v32 )
    {
      if ( (*(_BYTE *)(v32 + 36) & 4) != 0 )
      {
        v33 = (double)*(unsigned __int8 *)(v32 + 72) / 255.0;
        *((double *)this + 42) = v33;
        CVisual::SetOpacity(this, v33);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)(*((_QWORD *)this + 46) + 24LL))
     || !AreAllMarginsZero((const struct _MARGINS *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 64LL))) )
  {
    v14 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v14 )
    {
      CBaseObject::Release(v14);
      *((_QWORD *)this + 48) = 0LL;
    }
    v15 = (CBaseObject *)*((_QWORD *)this + 54);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *((_QWORD *)this + 54) = 0LL;
    }
    v16 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)this + 47) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = *((_QWORD *)this + 46);
    if ( v12 )
    {
      *((_BYTE *)this + 472) = *(_DWORD *)(v12 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront(this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 363;
      goto LABEL_77;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x20000u);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush(this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 386;
        goto LABEL_77;
      }
    }
    else
    {
      v34 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v34 )
      {
        CBaseObject::Release(v34);
        *((_QWORD *)this + 48) = 0LL;
      }
      v35 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v35 )
      {
        CBaseObject::Release(v35);
        *((_QWORD *)this + 54) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *((_QWORD *)this + 47) && *((_QWORD *)this + 54) )
    {
      v36 = *((_QWORD *)this + 46);
      v37 = 0;
      if ( (*(_BYTE *)(v36 + 36) & 3) == 3 && *((_BYTE *)this + 474) )
      {
        v38 = 0;
        if ( *(_DWORD *)(v36 + 48) - *(_DWORD *)(v36 + 40) >= 0 )
          v38 = *(_DWORD *)(v36 + 48) - *(_DWORD *)(v36 + 40);
        v39 = 0;
        if ( *(_DWORD *)(v36 + 64) - *(_DWORD *)(v36 + 56) >= 0 )
          v39 = *(_DWORD *)(v36 + 64) - *(_DWORD *)(v36 + 56);
        if ( v38 == v39 )
        {
          v40 = *(_DWORD *)(v36 + 52) - *(_DWORD *)(v36 + 44);
          v41 = *(_DWORD *)(v36 + 68) - *(_DWORD *)(v36 + 60);
          v42 = 0;
          if ( v40 >= 0 )
            v42 = v40;
          v43 = 0;
          if ( v41 >= 0 )
            v43 = v41;
          if ( v42 == v43 && v38 == *((_DWORD *)this + 127) && v42 == *((_DWORD *)this + 128) )
            v37 = 1;
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        *((CSecondaryWindowRepresentation **)this + 47),
        v37,
        (CThumbnailVisual *)((char *)this + 532),
        (struct CCachedVisualImageProxy **)this + 54);
      v45 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v45 )
      {
        CBaseObject::Release(v45);
        *((_QWORD *)this + 48) = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(
                      (__int64)v45,
                      v44,
                      *((_QWORD *)this + 54),
                      *((_QWORD *)this + 50),
                      0LL,
                      (CBaseObject **)this + 48);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 422;
        goto LABEL_77;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 160LL) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic(this) )
        {
          v2 = 0x800000;
          *(_DWORD *)(*((_QWORD *)this + 46) + 36LL) |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
          *((_BYTE *)this + 474) = 0;
          CVisual::RenderRecursive(this);
        }
      }
      goto LABEL_32;
    }
    v17 = (struct tagPOINT **)((char *)this + 368);
    if ( !CWindowData::IsShellManaged(*(CWindowData **)(*((_QWORD *)this + 46) + 24LL))
      || (v18 = (*v17)[3], *(_QWORD *)(*(_QWORD *)&v18 + 416LL))
      || (v19 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v18 + 24LL) + 368LL))(*(_QWORD *)(*(_QWORD *)&v18 + 24LL))) == 0LL )
    {
LABEL_57:
      v24 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v24 )
      {
        CBaseObject::Release(v24);
        *((_QWORD *)this + 48) = 0LL;
      }
      v25 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *((_QWORD *)this + 54) = 0LL;
      }
      v26 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *((_QWORD *)this + 47) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
      goto LABEL_32;
    }
    v51 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    v19,
                    0,
                    (struct CWindowData **)&v51);
    v3 = BrushForCVI;
    if ( BrushForCVI >= 0 )
    {
      DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v17)[3] + 504LL, (char *)this + 368);
      v20 = (__m128i *)v51;
      v21 = *(_QWORD *)&v51 + 504LL;
      (*v17)[3] = v51;
      v22 = *(_DWORD *)(v21 + 24);
      v23 = v22 + 1;
      if ( v22 + 1 < v22 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      else
      {
        if ( v23 <= *(_DWORD *)(v21 + 20) )
        {
          v3 = 0;
          *(_QWORD *)(*(_QWORD *)v21 + 8LL * v22) = *v17;
          *(_DWORD *)(v21 + 24) = v23;
LABEL_55:
          if ( (v2 & 0x10) == 0 )
            OffsetRect((LPRECT)&(*v17)[7], _mm_cvtsi128_si32(v20[5]), _mm_cvtsi128_si32(_mm_srli_si128(v20[5], 8)));
          goto LABEL_57;
        }
        v27 = DynArrayImpl<0>::AddMultipleAndSet(v21, 8LL, 1LL, (char *)this + 368);
        v3 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
        if ( v3 >= 0 )
          goto LABEL_55;
      }
      v50 = 455;
      v31 = v3;
      goto LABEL_80;
    }
    v50 = 452;
LABEL_77:
    v31 = BrushForCVI;
LABEL_80:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, v50);
    goto LABEL_36;
  }
LABEL_32:
  if ( (v2 & 0x800000) != 0 )
  {
    v46 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v46 )
    {
      CBaseObject::Release(v46);
      *((_QWORD *)this + 48) = 0LL;
    }
    v47 = (CBaseObject *)*((_QWORD *)this + 54);
    if ( v47 )
    {
      CBaseObject::Release(v47);
      *((_QWORD *)this + 54) = 0LL;
    }
    v48 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( v48 )
    {
      CBaseObject::Release(v48);
      *((_QWORD *)this + 47) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    CThumbnailVisual::OnRepresentationTypeUpdated(this);
  }
  if ( *((_BYTE *)this + 472) && !*((_DWORD *)this + 68) )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
LABEL_36:
  if ( v3 < 0 )
  {
    v49 = (CBaseObject *)*((_QWORD *)this + 58);
    if ( v49 )
      CBaseObject::Release(v49);
    *((_QWORD *)this + 58) = 0LL;
  }
  return (unsigned int)v3;
}
