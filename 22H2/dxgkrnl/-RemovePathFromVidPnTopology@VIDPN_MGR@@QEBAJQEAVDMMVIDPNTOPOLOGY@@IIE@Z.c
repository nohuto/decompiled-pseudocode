/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02E0A84
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DC790 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C02E4A50 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0006F04 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000721C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00074C4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00098DC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3EC (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DCCC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0019488 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A9B0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C005AE1C (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C005B538 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00EBAA8 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011C7C4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011CDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011CEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011E08C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C012E69C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0141140 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DFB24 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02E00A8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 Container; // rdi
  BOOLEAN v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rcx
  DMMVIDPNTARGETMODESET *v45; // rbx
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rax
  DMMVIDPNTARGETMODESET *v50; // rbx
  DMMVIDPNSOURCEMODE *v51; // rcx
  __int64 v52; // rdx
  UINT cx; // ecx
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNSOURCEMODESET *v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  struct DMMVIDPNTARGETMODESET *v68; // rbx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  __int64 v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+40h] [rbp-C0h]
  char v81; // [rsp+41h] [rbp-BFh]
  unsigned int v82; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v83; // [rsp+48h] [rbp-B8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v84; // [rsp+4Ch] [rbp-B4h]
  unsigned int v85; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v87; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTARGETMODESET *v88; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v89; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v90; // [rsp+78h] [rbp-88h] BYREF
  DXGK_ENUM_PIVOT v91; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v92[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v93; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v94[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v95[56]; // [rsp+118h] [rbp+18h] BYREF
  int v96; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v85 = a4;
  v80 = 0;
  v81 = 0;
  Path = 0LL;
  memset(&v93, 0, sizeof(v93));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v94, 0LL, 0);
  v84 = D3DKMDT_VPPS_UNPINNED;
  v13 = D3DKMDT_VPPR_UNPINNED;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(1LL, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v92,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v12,
    v79,
    1LL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath(a2, (unsigned int)v6, v5, 0LL);
  v21 = v18;
  if ( v18 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v92, v19);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v24);
    v29 = *((_QWORD *)this + 1);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v30);
      v29 = *((_QWORD *)this + 1);
    }
    v31 = *(_QWORD *)(v29 + 16);
    v32 = *(_QWORD *)(v31 + 2696);
    if ( *(_BYTE *)(v32 + 249) && *(_BYTE *)(v32 + 250)
      || (v33 = *(_QWORD **)(*(_QWORD *)(v31 + 216) + 64LL), *(_DWORD *)(v33[5] + 28LL) >= 0x4003u) )
    {
      v86 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v6, &v86);
      v21 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v86 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v86 != 1 )
        goto LABEL_46;
      v82 = 0;
      v36 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)a2, (unsigned int)v6, 0LL, &v82);
      v21 = v36;
      if ( v36 < 0 )
      {
LABEL_19:
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v25);
LABEL_30:
        v35[4] = Container & -(__int64)(Container != -88);
        v35[3] = v6;
        v35[5] = v21;
LABEL_84:
        WdLogEvent5_WdError(v35);
        return (unsigned int)v21;
      }
      if ( v82 == -1 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v33, v25);
        WdLogEvent5_WdAssertion(v37);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v82);
      if ( !Path )
      {
        v38 = WdLogNewEntry5_WdAssertion(v33, v25);
        WdLogEvent5_WdAssertion(v38);
      }
      v39 = *((_DWORD *)Path + 29);
      if ( v39 != 254 && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v39) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !a5 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v25);
          v21 = -1071774970LL;
          goto LABEL_30;
        }
        v83 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v40);
        v13 = v83;
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v41);
        v84 = *((_DWORD *)Path + 28);
        if ( v84 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v42);
        v43 = *((_QWORD *)Path + 12);
        v44 = *(_QWORD *)(v43 + 104);
        if ( v44 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v44 + 96), 1u);
          v45 = *(DMMVIDPNTARGETMODESET **)(v43 + 104);
          v90 = v45;
          if ( v45 )
          {
            v46 = *((_QWORD *)v45 + 18);
            if ( v46 )
            {
              v81 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v95,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72));
              v96 = *(_DWORD *)(v46 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v45, v47);
            }
            v13 = v83;
          }
        }
        else
        {
          v90 = 0LL;
        }
        v48 = *((_QWORD *)Path + 11);
        v49 = *(_QWORD *)(v48 + 104);
        if ( v49 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v49 + 96), 1u);
          v50 = *(DMMVIDPNTARGETMODESET **)(v48 + 104);
          v89 = v50;
          if ( v50 )
          {
            v51 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v50 + 18);
            if ( v51 )
            {
              v80 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v51, &v93);
              DMMVIDPNTARGETMODESET::UnpinMode(v50, v52);
              if ( v93.Type != D3DKMDT_RMT_TEXT )
              {
                v93.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v93.Format.Graphics.PrimSurfSize.cx,
                                                                       v93.Format.Graphics.PrimSurfSize.cy);
                cx = v93.Format.Graphics.VisibleRegionSize.cx;
                v93.Format.Graphics.VisibleRegionSize.cx = v93.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v93.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v89 = 0LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v89, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
      }
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v91.VidPnSourceId = -1;
      v91.VidPnTargetId = -1;
      v54 = VIDPN_MGR::FormalizeVidPnChange(
              (__int64)this,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              2LL,
              1,
              &v91);
      v21 = v54;
      if ( v54 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v33, v25);
        v35[4] = v85;
        v35[3] = v6;
        v35[5] = Container & -(__int64)(Container != -88);
        v35[6] = v21;
        goto LABEL_84;
      }
    }
    if ( v80 )
    {
      v55 = *((_QWORD *)Path + 11);
      v56 = *(_QWORD *)(v55 + 104);
      if ( !v56 )
      {
        v87 = 0LL;
LABEL_52:
        v57 = WdLogNewEntry5_WdError(v33, v25);
        WdLogEvent5_WdError(v57);
        LODWORD(v21) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v87, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
      v58 = *(struct DMMVIDPNSOURCEMODESET **)(v55 + 104);
      v87 = v58;
      if ( !v58 )
        goto LABEL_52;
      v59 = 0LL;
      v33 = (_QWORD *)*((_QWORD *)v58 + 6);
      if ( v33 != (_QWORD *)((char *)v58 + 48) )
        v59 = (__int64)(v33 - 1);
      if ( !v59 )
        goto LABEL_52;
      do
      {
        if ( v93.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v59 + 72) != 2 )
          v93.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v59)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v59, (__int64)&v93) )
          break;
        v60 = *(_QWORD **)(v59 + 8);
        v59 = (__int64)(v60 - 1);
        if ( v60 == (_QWORD *)((char *)v58 + 48) )
          v59 = 0LL;
      }
      while ( v59 );
      if ( !v59 )
        goto LABEL_52;
      v61 = VIDPN_MGR::PinVidPnSourceMode(this, v58, *(_DWORD *)(v59 + 24), 1);
      v21 = v61;
      if ( v61 < 0 )
      {
        v64 = WdLogNewEntry5_WdError(v63, v62);
        *(_QWORD *)(v64 + 24) = v21;
        WdLogEvent5_WdError(v64);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v87, 0LL);
    }
    if ( v81 )
    {
      v65 = *((_QWORD *)Path + 12);
      v66 = *(_QWORD *)(v65 + 104);
      if ( !v66 )
      {
        v88 = 0LL;
LABEL_72:
        v67 = WdLogNewEntry5_WdError(v33, v25);
        WdLogEvent5_WdError(v67);
        LODWORD(v21) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v66 + 96));
      v68 = *(struct DMMVIDPNTARGETMODESET **)(v65 + 104);
      v88 = v68;
      if ( !v68 )
        goto LABEL_72;
      v69 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v68 + 24, (__int64)v94);
      if ( !v69 )
        goto LABEL_72;
      v70 = VIDPN_MGR::PinVidPnTargetMode(this, v68, *(_DWORD *)(v69 + 24), 1);
      v21 = v70;
      if ( v70 < 0 )
      {
        v73 = WdLogNewEntry5_WdError(v72, v71);
        *(_QWORD *)(v73 + 24) = v21;
        WdLogEvent5_WdError(v73);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
    }
    if ( v84 == D3DKMDT_VPPS_UNPINNED
      || (v74 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, v84, v28), v21 = v74, v74 >= 0) )
    {
      if ( v13 == D3DKMDT_VPPR_UNPINNED
        || (v77 = VIDPN_MGR::PinPathContentRotation((ADAPTER_DISPLAY **)this, Path, v13, v28), v21 = v77, v77 >= 0) )
      {
        LODWORD(v21) = 0;
        return (unsigned int)v21;
      }
    }
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
    v35[3] = v21;
    goto LABEL_84;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
  v22[3] = v6;
  v22[4] = v5;
  v22[5] = a2;
  v22[6] = v21;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v92, v23);
  return (unsigned int)v21;
}
