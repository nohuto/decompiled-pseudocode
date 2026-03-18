/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AF934
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03AC7B8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C03B63B0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0001D80 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0001EC4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0002F04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006D74 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0007078 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C000A568 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A660 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0020028 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C002304C (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0023660 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C0067BDC (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0068378 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00693CC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0069AD0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0069BB4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C017249C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0199DD4 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C019A618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C019A86C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01ACA84 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01B0208 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01B06C0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C03AF65C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C03AF778 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // r12
  __int64 v7; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 Container; // rdi
  __int64 v19; // rdx
  int NumPathsFromSource; // eax
  int v21; // eax
  unsigned int v22; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v23; // r9d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DMMVIDPNTARGETMODESET *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // ecx
  __int128 v38; // xmm0
  struct DMMVIDPNTARGETMODESET *v39; // rax
  DMMVIDPNSOURCEMODESET *v40; // rbx
  DMMVIDPNSOURCEMODE *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  UINT cx; // ecx
  int v46; // eax
  struct DMMVIDPNTARGETMODESET *v47; // rax
  char *v48; // r14
  __int64 v49; // rdi
  struct DMMVIDPNTARGETMODESET *v50; // rcx
  char *v51; // rax
  int v52; // eax
  struct DMMVIDPNTARGETMODESET *v53; // rax
  __int64 v54; // rax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  __int64 v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+40h] [rbp-C0h]
  char v61; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v62; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v64; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v66; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v67[24]; // [rsp+68h] [rbp-98h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v68; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v69[72]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-8h]
  __int128 v71; // [rsp+108h] [rbp+8h]
  __int128 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+130h] [rbp+30h]
  char v75; // [rsp+13Ch] [rbp+3Ch]
  __int64 v76; // [rsp+140h] [rbp+40h]
  __int64 v77; // [rsp+148h] [rbp+48h]
  int v78; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v7 = a3;
  v60 = 0;
  v61 = 0;
  Path = 0LL;
  memset(&v68, 0, sizeof(v68));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v69, 0);
  v62 = D3DKMDT_VPPR_UNPINNED;
  v64 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == -1 )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v67,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v10,
    v59,
    1LL);
  v11 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v5, 0LL);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17[3] = v7;
    v17[4] = v5;
    v17[5] = a2;
    v17[6] = v16;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v67);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v67);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v19 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 2920LL) + 289LL) )
  {
    if ( !v19 )
      WdLogSingleEntry0(1LL);
    v19 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 2920LL) + 290LL) )
      goto LABEL_20;
  }
  if ( !v19 )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) >= 0x4003u )
  {
LABEL_20:
    v65 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v65);
    v16 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      v65 = 0LL;
      goto LABEL_45;
    }
    if ( NumPathsFromSource < 0 )
      goto LABEL_33;
    if ( v65 != 1 )
      goto LABEL_45;
    v62 = D3DKMDT_VPPR_UNINITIALIZED;
    v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, (char *)(unsigned int)v7, 0LL, (unsigned int *)&v62);
    v16 = v21;
    if ( v21 < 0 )
    {
LABEL_33:
      WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), v16);
      return (unsigned int)v16;
    }
    if ( v62 == -1 )
      WdLogSingleEntry0(1LL);
    Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v62);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v22 = *((_DWORD *)Path + 29);
    v23 = D3DKMDT_VPPR_UNPINNED;
    if ( v22 == 254 || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v22) - 2) & 0xFFFFFFFD) != 0 )
    {
      v62 = v23;
      goto LABEL_45;
    }
    if ( !a5 )
    {
      v16 = -1071774970LL;
      goto LABEL_33;
    }
    v62 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v24);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v25, v26, v27);
    v64 = *((_DWORD *)Path + 28);
    if ( v64 != D3DKMDT_VPPS_UNPINNED )
      DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v28, v29, v30);
    v31 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v66 = v31;
    if ( v31 )
    {
      v34 = *((_QWORD *)v31 + 18);
      if ( v34 )
      {
        v35 = *(_OWORD *)(v34 + 72);
        v74 = *(_DWORD *)(v34 + 128);
        v36 = *(_OWORD *)(v34 + 88);
        v75 = *(_BYTE *)(v34 + 140);
        v76 = *(_QWORD *)(v34 + 144);
        v77 = *(_QWORD *)(v34 + 152);
        v37 = *(_DWORD *)(v34 + 160);
        v70 = v35;
        v78 = v37;
        v38 = *(_OWORD *)(v34 + 104);
        v61 = 1;
        v71 = v36;
        *(_QWORD *)&v36 = *(_QWORD *)(v34 + 120);
        v72 = v38;
        v73 = v36;
        DMMVIDPNTARGETMODESET::UnpinMode(v31, v34, v32, v33);
      }
    }
    v39 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v63 = (__int64)v39;
    v40 = v39;
    if ( v39 )
    {
      v41 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v39 + 18);
      if ( v41 )
      {
        v60 = 1;
        DMMVIDPNSOURCEMODE::Serialize(v41, &v68);
        DMMVIDPNSOURCEMODESET::UnpinMode(v40, v42, v43, v44);
        if ( v68.Type != D3DKMDT_RMT_TEXT )
        {
          v68.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                 v68.Format.Graphics.PrimSurfSize.cx,
                                                                 v68.Format.Graphics.PrimSurfSize.cy);
          cx = v68.Format.Graphics.VisibleRegionSize.cx;
          v68.Format.Graphics.VisibleRegionSize.cx = v68.Format.Graphics.VisibleRegionSize.cy;
          *(_QWORD *)(&v68.Format.Text + 3) = cx;
        }
      }
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v63, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v66, 0LL);
  }
LABEL_45:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
  {
    v63 = -1LL;
    v46 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            2LL,
            1,
            (DXGK_ENUM_PIVOT *)&v63);
    LODWORD(v16) = v46;
    if ( v46 < 0 )
    {
      WdLogSingleEntry4(2LL, v7, v5, Container & -(__int64)(Container != -88), v46);
      return (unsigned int)v16;
    }
  }
  if ( v60 )
  {
    v47 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v63 = (__int64)v47;
    v16 = (__int64)v47;
    if ( !v47 )
      goto LABEL_69;
    v48 = (char *)v47 + 48;
    v49 = 0LL;
    v50 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v47 + 6);
    if ( v50 != (struct DMMVIDPNTARGETMODESET *)((char *)v47 + 48) )
      v49 = (__int64)v50 - 8;
    if ( !v49 )
      goto LABEL_69;
    do
    {
      if ( v68.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v49 + 72) != 2 )
        v68.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v49)->Stride;
      if ( DMMVIDPNSOURCEMODE::operator==(v49, (__int64)&v68) )
        break;
      v51 = *(char **)(v49 + 8);
      v49 = (__int64)(v51 - 8);
      if ( v51 == v48 )
        v49 = 0LL;
    }
    while ( v49 );
    if ( !v49 )
    {
LABEL_69:
      WdLogSingleEntry0(2LL);
      LODWORD(v16) = -1071774958;
      goto LABEL_70;
    }
    v52 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v16, *(_DWORD *)(v49 + 24), 1);
    LODWORD(v16) = v52;
    if ( v52 < 0 )
    {
      WdLogSingleEntry1(2LL, v52);
LABEL_70:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v63, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v63, 0LL);
  }
  if ( v61 )
  {
    v53 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v63 = (__int64)v53;
    v16 = (__int64)v53;
    if ( !v53 || (v54 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v53 + 24, (__int64)v69)) == 0 )
    {
      WdLogSingleEntry0(2LL);
      LODWORD(v16) = -1071774958;
      goto LABEL_78;
    }
    v55 = VIDPN_MGR::PinVidPnTargetMode(this, (struct DMMVIDPNTARGETMODESET *const)v16, *(_DWORD *)(v54 + 24), 1);
    LODWORD(v16) = v55;
    if ( v55 < 0 )
    {
      WdLogSingleEntry1(2LL, v55);
LABEL_78:
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
  }
  if ( (v64 == D3DKMDT_VPPS_UNPINNED || (v56 = VIDPN_MGR::PinPathContentScaling(this, Path, v64), v16 = v56, v56 >= 0))
    && (v62 == D3DKMDT_VPPR_UNPINNED || (v57 = VIDPN_MGR::PinPathContentRotation(this, Path, v62), v16 = v57, v57 >= 0)) )
  {
    LODWORD(v16) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v16);
  }
  return (unsigned int)v16;
}
