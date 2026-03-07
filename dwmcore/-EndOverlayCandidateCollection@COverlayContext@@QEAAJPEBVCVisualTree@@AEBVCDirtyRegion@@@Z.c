__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v4; // rax
  char *v5; // r15
  _QWORD *v6; // rsi
  unsigned int v7; // r14d
  CMILMatrix *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r15
  struct CCursorState::MonitorData *v11; // r13
  CMILMatrix *v12; // r12
  unsigned int j; // r14d
  __int64 v14; // rax
  CResource *v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct COcclusionInfo *OcclusionInfo; // r12
  struct MilRectF *v20; // rdx
  unsigned int v21; // eax
  unsigned __int8 IsOccluded; // al
  __int64 v23; // rdx
  unsigned __int8 v24; // r12
  __int64 i; // rax
  int OverlayCandidateIndex; // eax
  __int64 v27; // r14
  int v28; // r14d
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned int v38; // r15d
  _QWORD *v39; // rax
  __int64 v40; // r14
  struct CCursorState::MonitorData *v41; // rbx
  CCursorState *v42; // rcx
  char *v43; // r15
  char *k; // rsi
  std::_Ref_count_base *v45; // rcx
  bool v46; // [rsp+20h] [rbp-E0h] BYREF
  bool v47; // [rsp+21h] [rbp-DFh] BYREF
  char v48[8]; // [rsp+28h] [rbp-D8h] BYREF
  CMILMatrix *v49; // [rsp+30h] [rbp-D0h]
  struct CVisualTree *v50; // [rsp+38h] [rbp-C8h]
  char v51[224]; // [rsp+40h] [rbp-C0h] BYREF
  struct CCursorState::MonitorData *v52[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v53; // [rsp+130h] [rbp+30h] BYREF

  v52[0] = a3;
  v50 = a2;
  v4 = 0LL;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 62);
  v5 = (char *)a3 + 16;
  if ( *((_QWORD *)a3 + 5) != v4 )
    v5 = 0LL;
  if ( *((_BYTE *)this + 11302) && v5 )
  {
    if ( *((int *)this + 2772) > 0 )
    {
      v17 = *((_QWORD *)this + 1382);
      if ( v17 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 112LL))(v17) )
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 88);
      }
    }
    v6 = (_QWORD *)((char *)this + 88);
    v49 = (CMILMatrix *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this) + 116);
    v7 = 0;
    v8 = v49;
    while ( v7 < -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
    {
      v18 = 224LL * v7;
      OcclusionInfo = CVisual::GetOcclusionInfo(
                        *(CVisual **)(*v6 + v18 + 8),
                        v50,
                        (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey);
      if ( !OcclusionInfo )
        goto LABEL_31;
      v20 = (struct MilRectF *)(v18 + *v6 + 144LL);
      v53 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v8, v20);
      v21 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
      IsOccluded = COcclusionContext::IsOccluded((__int64)v5, (__int64)&v53, v21);
      v24 = IsOccluded;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        McTemplateU0xd_EventWriteTransfer(*v6, v23, *(_QWORD *)(*(_QWORD *)(v18 + *v6 + 16) + 40LL), IsOccluded);
      if ( v24 )
      {
LABEL_36:
        *(_QWORD *)&v53 = v18 + *v6;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 88,
          v48,
          &v53);
      }
      else
      {
LABEL_31:
        for ( i = *((_QWORD *)this + 913); i != *((_QWORD *)this + 914); i += 224LL )
        {
          if ( *(_QWORD *)(v18 + *v6 + 16) == *(_QWORD *)(i + 16) && *(_QWORD *)(v18 + *v6 + 8) != *(_QWORD *)(i + 8) )
            goto LABEL_36;
        }
        ++v7;
      }
    }
    v9 = *((_QWORD *)this + 913);
    v10 = *((_QWORD *)this + 914);
    v11 = v52[0];
    v12 = v49;
    while ( v9 != v10 )
    {
      OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                this,
                                *(const struct CVisual **)(v9 + 8),
                                *(const struct CCompositionSurfaceInfo **)(v9 + 16),
                                *(_QWORD *)(v9 + 24));
      if ( OverlayCandidateIndex == -1 )
      {
        *(_OWORD *)v52 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v12, (struct MilRectF *)(v9 + 144));
        if ( !(unsigned __int8)CDirtyRegion::DoesIntersect(v11, v52) )
        {
          v28 = -1227133513 * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) - 1;
          if ( -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
          {
            v29 = v28;
            v30 = (_DWORD *)(224LL * v28 + *v6 + 208LL);
            do
            {
              if ( *((_BYTE *)v30 - 28) && *v30 < *(_DWORD *)(v9 + 208) )
                break;
              --v28;
              --v29;
              v30 -= 56;
            }
            while ( v29 != -1 );
          }
          v31 = COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
                  (COverlayContext::OverlayPlaneInfo *)v51,
                  (const struct COverlayContext::OverlayPlaneInfo *)v9);
          v52[0] = (struct CCursorState::MonitorData *)(*v6 + 224 * (v28 + 1LL));
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace<COverlayContext::OverlayPlaneInfo>(
            (char *)this + 88,
            v48,
            v52,
            v31);
        }
      }
      else
      {
        v27 = 224LL * OverlayCandidateIndex;
        COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
          (COverlayContext::OverlayPlaneInfo *)(v27 + *v6),
          (const struct COverlayContext::OverlayPlaneInfo *)v9);
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v27 + *v6 + 32LL),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v9 + 32),
          &v46,
          &v47);
        *(_BYTE *)(v27 + *v6 + 181) |= v46;
        if ( *(_BYTE *)(v27 + *v6 + 182) && !v47 )
          *(_BYTE *)(v27 + *v6 + 182) = 0;
      }
      v9 += 224LL;
    }
    for ( j = 0; ; ++j )
    {
      while ( 1 )
      {
        if ( j >= -1227133513 * (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this);
          *((_BYTE *)this + 11306) = COverlayContext::IsCompatibleOutputScaling(
                                       this,
                                       (const struct CMILMatrix *)(v14 + 48));
          goto LABEL_15;
        }
        v32 = 224LL * j;
        if ( !COverlayContext::IsRevokable(this, (const struct COverlayContext::OverlayPlaneInfo *)(*v6 + v32))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + *v6 + 16) + 168LL))(*(_QWORD *)(v32 + *v6 + 16)) )
        {
          break;
        }
        v33 = *v6;
        if ( *(_BYTE *)(v32 + *v6 + 180) )
          *((_BYTE *)this + 11310) = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          v34 = 5LL;
LABEL_60:
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(*(_QWORD *)(v32 + v33 + 16) + 40LL),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            *(unsigned int *)(*(_QWORD *)(v32 + v33 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v32 + v33 + 16) + 40LL)) << 32),
            v34);
        }
LABEL_61:
        v52[0] = (struct CCursorState::MonitorData *)(v32 + *v6);
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 88,
          v48,
          v52);
      }
      v33 = *v6;
      if ( !*(_BYTE *)(v32 + *v6 + 180) && !*(_BYTE *)(v32 + v33 + 178) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) == 0 )
          goto LABEL_61;
        v34 = 6LL;
        goto LABEL_60;
      }
    }
  }
  if ( *((_QWORD *)this + 914) != *((_QWORD *)this + 913) || *((_BYTE *)this + 11025) || *((_QWORD *)this + 1396) )
  {
    *((_BYTE *)this + 11306) = 0;
    *((_BYTE *)this + 11310) = 1;
  }
LABEL_15:
  *((_BYTE *)this + 11302) = 0;
  **((_DWORD **)this + 1397) = 0;
  *((_BYTE *)this + 11311) = 0;
  *((_DWORD *)this + 2818) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 11248, 16LL);
  if ( !*((_BYTE *)this + 11312) && *((_QWORD *)this + 1379) )
  {
    v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    v36 = v35;
    if ( v35 )
    {
      v37 = *((_QWORD *)this + 1379);
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 56LL))(v35);
      v39 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 48LL))(v36, v48);
      v40 = *(_QWORD *)(v37 + 720);
      if ( v40 )
      {
        CCursorState::FindMonitorData(*(_QWORD *)(v37 + 720), v52, *v39, v38);
        v41 = v52[0];
        if ( v52[0] != *(struct CCursorState::MonitorData **)(v40 + 88) )
        {
          EnterCriticalSection(&g_CursorManager);
          CCursorState::EnsureHardwareOverlayCleared(v42, v41);
          v43 = *(char **)(v40 + 88);
          for ( k = (char *)v41 + 144; k != v43; k += 144 )
            CCursorState::MonitorData::operator=(k - 144, k);
          v45 = *(std::_Ref_count_base **)(*(_QWORD *)(v40 + 88) - 40LL);
          if ( v45 )
            std::_Ref_count_base::_Decref(v45);
          *(_QWORD *)(v40 + 88) -= 144LL;
          LeaveCriticalSection(&g_CursorManager);
        }
      }
    }
    v15 = (CResource *)*((_QWORD *)this + 1379);
    *((_QWORD *)this + 1379) = 0LL;
    if ( v15 )
      CResource::InternalRelease(v15);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0d_EventWriteTransfer(v15, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
