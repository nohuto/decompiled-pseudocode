/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051B00
 * Callers:
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F4520 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004DC0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003E618 (-clear@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCa.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180040864 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004A9B0 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800515A8 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180053828 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180098594 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180098C6C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800991A8 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x1800A42DC (-ClearAllBackdropVisualImages@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800A4A3C (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800E41D0 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800E4358 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18026ED14 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CVisual::OnChanged(CVisual *a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // r15
  __int16 *v6; // rdx
  int v7; // esi
  char v8; // r14
  __int64 v9; // rcx
  unsigned __int8 v10; // r12
  char v11; // al
  __int64 v12; // rcx
  unsigned __int8 v13; // bl
  unsigned __int8 v14; // r14
  char v15; // al
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  _BYTE *v19; // rdi
  unsigned int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // r8
  __int64 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rax
  _BYTE *v35; // rdx
  _QWORD ***v36; // r9
  unsigned int m; // ecx
  _QWORD **v38; // rdi
  _QWORD *n; // rbx
  __int64 v40; // rbx
  __int16 *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r9
  int (__fastcall **v44)(__int64, GUID *, __int64 *); // rax
  __int64 v45; // rax
  _BYTE *v46; // r8
  __int64 i; // rdx
  __int16 **v48; // rdx
  __int16 *v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // r8
  __int64 j; // rdx
  __int16 **v53; // rdx
  __int16 *v54; // rax
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // r8
  FastRegion::Internal::CRgnData **v58; // rax
  float v59; // xmm1_4
  float v60; // xmm0_4
  FastRegion::Internal::CRgnData *v61; // rcx
  __int64 v62; // rax
  _BYTE *v63; // rdx
  __int64 k; // rcx
  _QWORD **v65; // rax
  _QWORD *v66; // rax
  CVisual *v67; // rcx
  CVisual *v68; // rcx
  _QWORD *ProjectedShadowReceivers; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // r14
  __int64 v80; // rax
  int v81; // eax
  int v82; // edi
  BOOL v83; // eax
  CHAR v84; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  struct CTransform3D *Transform3DEffectNoRef; // rbx
  CHAR Response[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v89; // [rsp+68h] [rbp-98h]
  int (__fastcall ***v90)(__int64, GUID *, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  BOOL v91; // [rsp+78h] [rbp-88h]
  __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  float v93; // [rsp+88h] [rbp-78h] BYREF
  float v94; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v95; // [rsp+90h] [rbp-70h]
  CVisual *v96; // [rsp+98h] [rbp-68h]
  char v97[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v98[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v99[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v100[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v101[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v102[8]; // [rsp+C8h] [rbp-38h] BYREF
  char v103[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v104[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v105[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v106; // [rsp+E8h] [rbp-18h]
  int *v107; // [rsp+F0h] [rbp-10h]
  __int64 v108; // [rsp+F8h] [rbp-8h]
  int v109; // [rsp+100h] [rbp+0h]
  float v110; // [rsp+110h] [rbp+10h]
  float v111; // [rsp+114h] [rbp+14h]
  float v112; // [rsp+118h] [rbp+18h]
  float v113; // [rsp+11Ch] [rbp+1Ch]

  v90 = (int (__fastcall ***)(__int64, GUID *, __int64 *))a3;
  v3 = a3;
  v96 = a1;
  v4 = a2;
  v5 = (__int64)a1;
  if ( a2 != 5 )
  {
    v6 = _ImageBase;
    if ( v4 >= 1 )
    {
      switch ( v4 )
      {
        case 1:
          goto LABEL_4;
        case 3:
          v7 = 1;
          goto LABEL_16;
        case 4:
          CVisual::OnClipChanged(a1);
          break;
        case 6:
          CVisual::ClearContentTreeDataCaches(a1);
          v4 = 1;
LABEL_4:
          v7 = 4;
          goto LABEL_5;
        case 11:
          v7 = 2;
LABEL_5:
          if ( (*(_BYTE *)(v5 + 96) & 0x10) == 0
            && (*(unsigned __int8 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v5 + 248LL))(v5, v6) )
          {
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 256LL))(v5);
            LOBYTE(v6) = v8
                      && ((**(_DWORD **)(v5 + 232) & 0x20000) != 0
                       && (ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(v5),
                           *ProjectedShadowReceivers != ProjectedShadowReceivers[1])
                       || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 352LL))(v5));
            if ( (BYTE1(*(_DWORD *)(v5 + 96)) & 1) == v8 && (((*(int *)(v5 + 96) >> 8) & 0x200) != 0) == (_BYTE)v6 )
            {
              v3 = (__int64)v90;
            }
            else
            {
              v3 = (__int64)v90;
              v7 |= 0x10u;
            }
          }
          goto LABEL_16;
        case 15:
          CVisual::UpdateBackdropVisualImageForWindowBackgroundTreatment(a1);
          return 0LL;
        default:
          break;
      }
    }
    v7 = 5;
LABEL_16:
    v9 = *(_QWORD *)(v5 + 256);
    v10 = 0;
    if ( !v9 )
      goto LABEL_30;
    v11 = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v9 + 240LL))(v9, v6);
    v12 = *(_QWORD *)(v5 + 256);
    v13 = 0;
    v14 = 0;
    v6 = 0LL;
    v15 = (*(_BYTE *)(v5 + 102) ^ (32 * v11)) & 0x20;
    v89 = 0LL;
    *(_BYTE *)(v5 + 102) ^= v15;
    Response[0] = 0;
    if ( v12 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, 17LL) )
      {
        v16 = *(_QWORD *)(v5 + 256);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 203LL) )
        {
          v13 = 1;
          Response[0] = 1;
        }
        else
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 15LL) )
          {
            v14 = 1;
          }
          else
          {
            if ( *(_BYTE *)(v16 + 80) && !*(_QWORD *)(v16 + 72) )
            {
              LOBYTE(v17) = 1;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 320LL))(v16, v17);
            }
            v18 = *(_QWORD *)(v16 + 72);
            if ( v18 )
            {
              v6 = *(__int16 **)(v18 + 208);
              v13 = *(_BYTE *)(v18 + 198);
              v10 = *(_BYTE *)(v18 + 196);
              v14 = *(_BYTE *)(v18 + 197);
              v89 = v6;
              Response[0] = v13;
              goto LABEL_25;
            }
          }
          v13 = 0;
        }
      }
      v6 = v89;
    }
LABEL_25:
    if ( dword_1803E0760 )
    {
      if ( v10 != ((*(_BYTE *)(v5 + 102) & 4) != 0) )
      {
        v70 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v97, "m_fIsBackdropBlur=%d", v10);
        v71 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v98, "Visual-IsBackdropBlurFlagChanged");
        DwmDbg::Backdrops::LogBrushEtwEvent(v71, v5, v70);
        v6 = v89;
        v13 = Response[0];
      }
      v19 = (_BYTE *)(v5 + 272);
      if ( v14 != ((*(_BYTE *)(v5 + 272) & 2) != 0) )
      {
        v72 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v99, "m_fHasBlurredWallpaperBackdropInput=%d", v14);
        v73 = DwmDbg::DbgString::DbgString(
                (DwmDbg::DbgString *)v100,
                "Visual-HasBlurredWallpaperBackdropInputFlagChanged");
        DwmDbg::Backdrops::LogBrushEtwEvent(v73, v5, v72);
        v6 = v89;
        v13 = Response[0];
      }
    }
    else
    {
      v19 = (_BYTE *)(v5 + 272);
    }
    *(_BYTE *)(v5 + 102) &= ~4u;
    *v19 ^= (*v19 ^ (2 * v14)) & 2;
    *(_BYTE *)(v5 + 102) |= 4 * (v10 & 1);
    if ( (v6 != 0LL) != (*v19 & 1) )
    {
      if ( dword_1803E0760 )
      {
        v74 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v101, "m_fHasBackdropInput=%d", v6 != 0LL);
        v75 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v102, "Visual-HasBackdropInputFlagChanged");
        DwmDbg::Backdrops::LogBrushEtwEvent(v75, v5, v74);
        v6 = v89;
        v13 = Response[0];
      }
      v67 = *(CVisual **)(v5 + 88);
      if ( v6 )
      {
        if ( v67 )
          CVisual::PropagateBackdropUpdates(v67, 1, 0);
        *v19 |= 1u;
      }
      else
      {
        if ( v67 )
          CVisual::PropagateBackdropUpdates(v67, -1, 0);
        *v19 &= ~1u;
        CVisual::ClearAllBackdropVisualImages((CVisual *)v5);
      }
    }
    if ( v13 != ((*v19 & 4) != 0) )
    {
      if ( dword_1803E0760 )
      {
        v76 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v103, "m_fHasWindowBackdropInput=%d", v13);
        v77 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v104, "Visual-HasWindowBackdropInputFlagChanged");
        DwmDbg::Backdrops::LogBrushEtwEvent(v77, v5, v76);
        v13 = Response[0];
      }
      v68 = *(CVisual **)(v5 + 88);
      if ( v13 )
      {
        if ( v68 )
          CVisual::PropagateBackdropUpdates(v68, 0, 1);
        *v19 |= 4u;
      }
      else
      {
        if ( v68 )
          CVisual::PropagateBackdropUpdates(v68, 0, -1);
        *v19 &= ~4u;
      }
    }
    v3 = (__int64)v90;
    if ( *(int (__fastcall ****)(__int64, GUID *, __int64 *))(v5 + 256) == v90 && v4 == 1 )
    {
      v44 = *v90;
      v92 = 0LL;
      if ( (*v44)((__int64)v90, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec27, &v92) >= 0 )
      {
        CVisual::GetEffectiveSize((CVisual *)v5, &v93, &v94);
        v58 = (FastRegion::Internal::CRgnData **)(*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v92 + 24LL))(
                                                   v92,
                                                   &v93);
        if ( v58 )
        {
          FastRegion::Internal::CRgnData::BeginIterator(*v58, (struct FastRegion::CRegion::Iterator *)v105);
          while ( (unsigned __int64)v107 < v106 )
          {
            v111 = (float)*v107;
            v59 = (float)v107[2];
            v110 = (float)*(int *)(v108 + 8LL * v109);
            v60 = (float)*(int *)(v108 + 8LL * v109 + 4);
            v113 = v59;
            v112 = v60;
            CVisual::AddAdditionalDirtyRect((CVisual *)v5);
            FastRegion::Internal::CRgnData::StepIterator(v61, (struct FastRegion::CRegion::Iterator *)v105);
          }
          v7 &= ~4u;
        }
      }
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v92);
    }
LABEL_30:
    if ( v7 )
    {
      LODWORD(v89) = v4;
      v20 = v7 | 0x10;
      if ( (v7 & 1) == 0 )
        v20 = v7;
      v91 = !(v7 & 1);
      v21 = *(_QWORD *)(v5 + 24);
      *(_DWORD *)Response = v20;
      if ( (v21 & 2) != 0 )
        v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v21) = v21 & 1;
      if ( (_DWORD)v21 )
      {
        v78 = 0LL;
        v79 = (unsigned int)v21;
        do
        {
          v80 = CPtrArrayBase::operator[](v5 + 24, v78);
          if ( v80 != *(_QWORD *)(v5 + 88) )
            (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v80 + 72LL))(v80, v91, v5);
          ++v78;
          --v79;
        }
        while ( v79 );
        v20 = *(_DWORD *)Response;
        v3 = (__int64)v90;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v5 + 160LL))(v5, v6);
      *(_BYTE *)(v5 + 96) |= v20;
      v23 = v22;
      if ( (v20 & 0xC) != 0 )
      {
        v20 = v20 & 0xFFFFFF73 | 0x80;
        *(_DWORD *)Response = v20;
        if ( v22 )
          ++*(_DWORD *)(v22 + 28);
      }
      if ( (v20 & 2) != 0 )
      {
        v20 = v20 & 0xFFFFFFBD | 0x40;
        *(_DWORD *)Response = v20;
      }
      v24 = *(_QWORD *)(v5 + 88);
      if ( (*(_BYTE *)(v5 + 103) & 1) != 0 )
      {
        do
        {
          if ( !v24 || (v20 & *(char *)(v24 + 96)) == v20 )
            break;
          *(_BYTE *)(v24 + 96) |= v20;
          v25 = *(_QWORD *)(v24 + 24);
          if ( (v25 & 2) != 0 )
            v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v25) = v25 & 1;
          v26 = (__int64 *)(v24 + 88);
          if ( (_DWORD)v25 )
          {
            v55 = 0LL;
            v95 = (unsigned int)v25;
            do
            {
              v56 = CPtrArrayBase::operator[](v24 + 24, v55);
              if ( v56 != *v26 )
              {
                (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v56 + 72LL))(v56, v91, v24);
                v57 = v95;
              }
              ++v55;
              v95 = v57 - 1;
            }
            while ( v57 != 1 );
            v20 = *(_DWORD *)Response;
          }
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 160LL))(v24);
          if ( v27 && v23 != v27 )
          {
            if ( (v20 & 0x80u) != 0 )
              ++*(_DWORD *)(v27 + 24);
            v23 = v27;
          }
          v28 = v24;
          v24 = *v26;
        }
        while ( (*(_BYTE *)(v28 + 103) & 1) != 0 );
        v5 = (__int64)v96;
        v4 = (int)v89;
        v3 = (__int64)v90;
      }
    }
    if ( v4 == 2 )
    {
      v40 = *(_QWORD *)(v5 + 240);
      if ( v40 )
      {
        v89 = *(__int16 **)(v5 + 240);
        if ( *(int *)(v40 + 8) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
        {
          while ( 1 )
          {
            v81 = IsKernelDebuggerPresent();
            strcpy(Response, "?");
            v82 = v81;
            if ( !v81 )
            {
              v83 = IsDebuggerPresent();
              v84 = Response[0];
              if ( v83 )
                v84 = 103;
              Response[0] = v84;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
              word_1803392B0,
              word_1803392B0,
              "Function: ",
              L"CMILRefCountImpl::AddReference",
              ", ",
              L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              23);
            if ( v82 )
            {
              DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "(No kernel debugger is present.) Respond with:\n"
                "  g                    -- Go (continue)\n"
                "  eb 0x%p 'p';g  -- terminate Process\n"
                "  eb 0x%p 't';g  -- terminate Thread\n"
                " or regular debugging.\n",
                Response,
                Response);
              __debugbreak();
            }
            v6 = _ImageBase;
            switch ( Response[0] )
            {
              case 'B':
              case 'b':
                __debugbreak();
                goto LABEL_71;
              case 'G':
              case 'g':
                goto LABEL_71;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_177;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_177;
              default:
LABEL_177:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_71:
        _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
        v41 = v89;
        if ( (__int16 *)v3 == v89 )
        {
          *(_QWORD *)(v5 + 584) = 0LL;
          v42 = *(_QWORD *)(v5 + 232);
          if ( *(int *)v42 < 0 )
          {
            v45 = *(unsigned int *)(v42 + 4);
            v46 = (_BYTE *)(v42 + 8);
            for ( i = 0LL; (unsigned int)i < (unsigned int)v45; ++v46 )
            {
              if ( *v46 == 1 )
                break;
              i = (unsigned int)(i + 1);
            }
            if ( (unsigned int)i >= (unsigned int)v45 )
              v48 = 0LL;
            else
              v48 = (__int16 **)(v45 + 15 + v42 + 8 * i - (((_BYTE)v45 + 15) & 7));
            v6 = *v48;
            if ( v6 )
            {
              v49 = *(__int16 **)v6;
              if ( *(__int16 **)v6 != v6 )
              {
                do
                {
                  *((_QWORD *)v49 - 14) = 0LL;
                  v49 = *(__int16 **)v49;
                }
                while ( v49 != v6 );
                v41 = v89;
              }
            }
          }
          *(_BYTE *)(v5 + 497) = 1;
          v43 = *(_QWORD *)(v5 + 232);
          if ( *(int *)v43 < 0 )
          {
            v50 = *(unsigned int *)(v43 + 4);
            v51 = (_BYTE *)(v43 + 8);
            for ( j = 0LL; (unsigned int)j < (unsigned int)v50; ++v51 )
            {
              if ( *v51 == 1 )
                break;
              j = (unsigned int)(j + 1);
            }
            if ( (unsigned int)j >= (unsigned int)v50 )
              v53 = 0LL;
            else
              v53 = (__int16 **)(v50 + 15 + v43 + 8 * j - (((_BYTE)v50 + 15) & 7));
            v6 = *v53;
            if ( v6 )
            {
              v54 = *(__int16 **)v6;
              if ( *(__int16 **)v6 != v6 )
              {
                do
                {
                  *((_BYTE *)v54 - 199) = 1;
                  v54 = *(__int16 **)v54;
                }
                while ( v54 != v6 );
                v41 = v89;
              }
            }
          }
        }
        if ( v41 )
          (*(void (__fastcall **)(__int16 *, __int16 *))(*(_QWORD *)v41 + 16LL))(v41, v6);
      }
      if ( CVisual::GetTransform3DEffectNoRef((CVisual *)v5) )
      {
        v90 = 0LL;
        Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)v5);
        if ( v90 )
          ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v90)[2])(v90);
        if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                    (__int64)Transform3DEffectNoRef,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &v90) >= 0
          && (int (__fastcall ***)(__int64, GUID *, __int64 *))v3 == v90 )
        {
          CVisual::OnInnerTransformChanged((CVisual *)v5);
        }
        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v90);
      }
    }
    else if ( v3 )
    {
      v29 = *(_DWORD **)(v5 + 232);
      if ( (*v29 & 0x1000000) != 0 )
      {
        v62 = (unsigned int)v29[1];
        v63 = v29 + 2;
        for ( k = 0LL; (unsigned int)k < (unsigned int)v62; ++v63 )
        {
          if ( *v63 == 8 )
            break;
          k = (unsigned int)(k + 1);
        }
        if ( (unsigned int)k >= (unsigned int)v62 )
          v65 = 0LL;
        else
          v65 = (_QWORD **)((char *)v29 + v62 + 8 * k - (((_BYTE)v62 + 15) & 7) + 15);
        v66 = *v65;
        if ( v66 && v3 == *v66 )
          CVisual::OnOuterTransformChanged((CVisual *)v5);
      }
    }
    return 0LL;
  }
  v31 = (__int64 *)((char *)a1 + 352);
  v32 = 0xAAAAAAAAAAAAAAABuLL * ((v31[1] - *v31) >> 3);
  if ( v32 )
    detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
      v31,
      0LL,
      v32);
  v33 = *(_QWORD *)(v5 + 232);
  if ( *(int *)v33 < 0 )
  {
    v34 = *(unsigned int *)(v33 + 4);
    v35 = (_BYTE *)(v33 + 8);
    v36 = 0LL;
    for ( m = 0; m < (unsigned int)v34; ++v35 )
    {
      if ( *v35 == 1 )
        break;
      ++m;
    }
    if ( m < (unsigned int)v34 )
      v36 = (_QWORD ***)(v33 + v34 + 15 + 8LL * m - (((_BYTE)v34 + 15) & 7));
    v38 = *v36;
    if ( *v36 )
    {
      for ( n = *v38; n != v38; n = (_QWORD *)*n )
        detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(n - 43);
    }
  }
  return 0LL;
}
