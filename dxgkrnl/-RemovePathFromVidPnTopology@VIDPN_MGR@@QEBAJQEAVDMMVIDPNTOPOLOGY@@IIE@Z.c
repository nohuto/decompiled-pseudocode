/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03A7EE8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C03B1AF0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000471C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000806C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C001FDC8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C002353C (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0023B50 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C0066FBC (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0067758 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00687AC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0068EB0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0068F94 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C016D024 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0176878 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A1F18 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A23D0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C03AAD8C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C03AAEA8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 Container; // rdi
  __int64 v22; // r9
  __int64 v23; // rdx
  int NumPathsFromSource; // eax
  int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct DMMVIDPNTARGETMODESET *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // ecx
  __int128 v41; // xmm0
  struct DMMVIDPNTARGETMODESET *v42; // rax
  DMMVIDPNSOURCEMODESET *v43; // rbx
  DMMVIDPNSOURCEMODE *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  UINT cx; // ecx
  int v49; // eax
  struct DMMVIDPNTARGETMODESET *v50; // rax
  char *v51; // r14
  __int64 v52; // rdi
  struct DMMVIDPNTARGETMODESET *v53; // rcx
  char *v54; // rax
  int v55; // eax
  struct DMMVIDPNTARGETMODESET *v56; // rax
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  __int64 v62; // [rsp+20h] [rbp-E0h]
  char v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+41h] [rbp-BFh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v65; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v67; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v69; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v70[24]; // [rsp+68h] [rbp-98h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v71; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v72[72]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v73; // [rsp+F8h] [rbp-8h]
  __int128 v74; // [rsp+108h] [rbp+8h]
  __int128 v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  int v77; // [rsp+130h] [rbp+30h]
  char v78; // [rsp+13Ch] [rbp+3Ch]
  __int64 v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  int v81; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v7 = a3;
  v63 = 0;
  v64 = 0;
  Path = 0LL;
  memset(&v71, 0, sizeof(v71));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v72, 0);
  v65 = D3DKMDT_VPPR_UNPINNED;
  v67 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == -1 )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v70,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v10,
    v62,
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
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v70,
      v18,
      v19,
      v20);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70, v12, v14, v15);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v23 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 2920LL) + 289LL) )
  {
    if ( !v23 )
      WdLogSingleEntry0(1LL);
    v23 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 16) + 2920LL) + 290LL) )
      goto LABEL_20;
  }
  if ( !v23 )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL) + 64LL) + 40LL)
                 + 28LL) >= 0x4003u )
  {
LABEL_20:
    v68 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v68);
    v16 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      v68 = 0LL;
      goto LABEL_45;
    }
    if ( NumPathsFromSource < 0 )
      goto LABEL_33;
    if ( v68 != 1 )
      goto LABEL_45;
    v65 = D3DKMDT_VPPR_UNINITIALIZED;
    v25 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, (char *)(unsigned int)v7, 0LL, (unsigned int *)&v65);
    v16 = v25;
    if ( v25 < 0 )
    {
LABEL_33:
      WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), v16);
      return (unsigned int)v16;
    }
    if ( v65 == -1 )
      WdLogSingleEntry0(1LL);
    Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v65);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v26 = *((_DWORD *)Path + 29);
    v22 = 254LL;
    if ( v26 == 254 || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v26) - 2) & 0xFFFFFFFD) != 0 )
    {
      v65 = (int)v22;
      goto LABEL_45;
    }
    if ( !a5 )
    {
      v16 = -1071774970LL;
      goto LABEL_33;
    }
    v65 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v27);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v28, v29, v30);
    v67 = *((_DWORD *)Path + 28);
    if ( v67 != D3DKMDT_VPPS_UNPINNED )
      DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v31, v32, v33);
    v34 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v69 = v34;
    if ( v34 )
    {
      v37 = *((_QWORD *)v34 + 18);
      if ( v37 )
      {
        v38 = *(_OWORD *)(v37 + 72);
        v77 = *(_DWORD *)(v37 + 128);
        v39 = *(_OWORD *)(v37 + 88);
        v78 = *(_BYTE *)(v37 + 140);
        v79 = *(_QWORD *)(v37 + 144);
        v80 = *(_QWORD *)(v37 + 152);
        v40 = *(_DWORD *)(v37 + 160);
        v73 = v38;
        v81 = v40;
        v41 = *(_OWORD *)(v37 + 104);
        v64 = 1;
        v74 = v39;
        *(_QWORD *)&v39 = *(_QWORD *)(v37 + 120);
        v75 = v41;
        v76 = v39;
        DMMVIDPNTARGETMODESET::UnpinMode(v34, v37, v35, v36);
      }
    }
    v42 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v66 = (__int64)v42;
    v43 = v42;
    if ( v42 )
    {
      v44 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v42 + 18);
      if ( v44 )
      {
        v63 = 1;
        DMMVIDPNSOURCEMODE::Serialize(v44, &v71);
        DMMVIDPNSOURCEMODESET::UnpinMode(v43, v45, v46, v47);
        if ( v71.Type != D3DKMDT_RMT_TEXT )
        {
          v71.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                 v71.Format.Graphics.PrimSurfSize.cx,
                                                                 v71.Format.Graphics.PrimSurfSize.cy);
          cx = v71.Format.Graphics.VisibleRegionSize.cx;
          v71.Format.Graphics.VisibleRegionSize.cx = v71.Format.Graphics.VisibleRegionSize.cy;
          *(_QWORD *)(&v71.Format.Text + 3) = cx;
        }
      }
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v66, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v69, 0LL);
  }
LABEL_45:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
  {
    v66 = -1LL;
    LOBYTE(v22) = 1;
    v49 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            2,
            v22,
            (DXGK_ENUM_PIVOT *)&v66);
    LODWORD(v16) = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry4(2LL, v7, v5, Container & -(__int64)(Container != -88), v49);
      return (unsigned int)v16;
    }
  }
  if ( v63 )
  {
    v50 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 11));
    v66 = (__int64)v50;
    v16 = (__int64)v50;
    if ( !v50 )
      goto LABEL_69;
    v51 = (char *)v50 + 48;
    v52 = 0LL;
    v53 = (struct DMMVIDPNTARGETMODESET *)*((_QWORD *)v50 + 6);
    if ( v53 != (struct DMMVIDPNTARGETMODESET *)((char *)v50 + 48) )
      v52 = (__int64)v53 - 8;
    if ( !v52 )
      goto LABEL_69;
    do
    {
      if ( v71.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v52 + 72) != 2 )
        v71.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v52)->Stride;
      if ( DMMVIDPNSOURCEMODE::operator==(v52, (__int64)&v71) )
        break;
      v54 = *(char **)(v52 + 8);
      v52 = (__int64)(v54 - 8);
      if ( v54 == v51 )
        v52 = 0LL;
    }
    while ( v52 );
    if ( !v52 )
    {
LABEL_69:
      WdLogSingleEntry0(2LL);
      LODWORD(v16) = -1071774958;
      goto LABEL_70;
    }
    v55 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v16, *(_DWORD *)(v52 + 24), 1);
    LODWORD(v16) = v55;
    if ( v55 < 0 )
    {
      WdLogSingleEntry1(2LL, v55);
LABEL_70:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v66, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v66, 0LL);
  }
  if ( v64 )
  {
    v56 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
    v66 = (__int64)v56;
    v16 = (__int64)v56;
    if ( !v56 || (v57 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v56 + 24, (__int64)v72)) == 0 )
    {
      WdLogSingleEntry0(2LL);
      LODWORD(v16) = -1071774958;
      goto LABEL_78;
    }
    v58 = VIDPN_MGR::PinVidPnTargetMode(this, (struct DMMVIDPNTARGETMODESET *const)v16, *(_DWORD *)(v57 + 24), 1);
    LODWORD(v16) = v58;
    if ( v58 < 0 )
    {
      WdLogSingleEntry1(2LL, v58);
LABEL_78:
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v66, 0LL);
      return (unsigned int)v16;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v66, 0LL);
  }
  if ( (v67 == D3DKMDT_VPPS_UNPINNED || (v59 = VIDPN_MGR::PinPathContentScaling(this, Path, v67), v16 = v59, v59 >= 0))
    && (v65 == D3DKMDT_VPPR_UNPINNED || (v60 = VIDPN_MGR::PinPathContentRotation(this, Path, v65), v16 = v60, v60 >= 0)) )
  {
    LODWORD(v16) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v16);
  }
  return (unsigned int)v16;
}
