/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C011BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00069A4 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006AE8 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00073E0 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C011C218 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011C33C (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011C398 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rsi
  int v14; // eax
  char *v15; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v16; // rbx
  char *v17; // rbx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // r8
  void (__fastcall ***v42)(_QWORD, __int64); // rcx
  int v43; // edi
  void (__fastcall ***v44)(_QWORD, __int64); // rcx
  int v45; // edi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  int v62; // [rsp+20h] [rbp-20h] BYREF
  __int64 v63; // [rsp+28h] [rbp-18h]
  char v64; // [rsp+30h] [rbp-10h]
  __int64 v65; // [rsp+88h] [rbp+48h] BYREF
  __int64 v66; // [rsp+90h] [rbp+50h] BYREF

  v62 = -1;
  v63 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v64 = 1;
    v62 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 7038LL);
  if ( !a2 )
  {
    v46 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v46 + 24) = this;
    WdLogEvent5_WdError(v46);
    v38 = -1073741811;
    goto LABEL_40;
  }
  v7 = *(_DWORD *)a2;
  v8 = *((unsigned int *)a2 + 1);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
  v11 = 0LL;
  v12 = (unsigned int)v8;
  v9[3] = v7;
  v9[4] = v8;
  v9[5] = this;
  v9[6] = a2;
  if ( !this || (v13 = this, *((_DWORD *)this + 46) != 1833173002) )
    v13 = 0LL;
  if ( !v13 )
  {
    v47 = WdLogNewEntry5_WdError(v10, 0LL);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdError(v47);
    v38 = -1071774976;
    goto LABEL_40;
  }
  v14 = *((_DWORD *)a2 + 83);
  if ( (v14 & 1) == 0 )
    *((_DWORD *)a2 + 83) = v14 | 1;
  if ( *((_BYTE *)v13 + 76) <= 3u )
  {
    v48 = WdLogNewEntry5_WdAssertion(v10, 0LL);
    WdLogEvent5_WdAssertion(v48);
    v11 = 0LL;
  }
  if ( (*((_BYTE *)v13 + 78) & 8) == 0 )
  {
    v49 = WdLogNewEntry5_WdError(v10, 0LL);
    *(_QWORD *)(v49 + 24) = v13;
    WdLogEvent5_WdError(v49);
    v38 = -1073741790;
LABEL_73:
    v61 = WdLogNewEntry5_WdError(v51, v50);
    *(_QWORD *)(v61 + 24) = a2;
    *(_QWORD *)(v61 + 32) = v13;
    WdLogEvent5_WdError(v61);
    goto LABEL_40;
  }
  v15 = (char *)v13 + 24;
  v16 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v13 + 3);
  if ( v16 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v13 + 24) )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = (char *)v16 - 8;
    if ( !v17 )
    {
LABEL_72:
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v15, 0LL);
      v60[3] = (unsigned int)v7;
      v60[4] = (unsigned int)v8;
      v60[5] = v13;
      WdLogEvent5_WdError(v60);
      v38 = -1071774937;
      goto LABEL_73;
    }
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v17 + 11) + 24LL) == (_DWORD)v7
        && *(_DWORD *)(*((_QWORD *)v17 + 12) + 24LL) == (_DWORD)v8 )
      {
        break;
      }
      v52 = (char *)*((_QWORD *)v17 + 1);
      v17 = v52 - 8;
      if ( v52 == v15 )
        v17 = 0LL;
    }
    while ( v17 );
  }
  if ( !v17 )
    goto LABEL_72;
  v18 = *((_QWORD *)v17 + 11);
  v19 = *(_QWORD *)(v18 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v18 + 104);
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((_QWORD *)v17 + 12);
  v66 = v20;
  v22 = *(_QWORD *)(v21 + 104);
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
    v23 = *(_QWORD *)(v21 + 104);
  }
  else
  {
    v23 = 0LL;
  }
  v65 = v23;
  if ( *(_QWORD *)(v20 + 144) && *(_QWORD *)(v23 + 144) )
  {
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v65, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v66, 0LL);
    if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v17, v24) )
    {
      if ( VIDPN_MGR::_bShouldLogOn1277688 && ((_DWORD)a2[4] & 6) != 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v28 + 24) = (unsigned int)v7;
        *(_QWORD *)(v28 + 32) = v12;
        WdLogEvent5_WdWarning(v28);
        VIDPN_MGR::_bShouldLogOn1277688 = 0;
      }
      *((_DWORD *)v17 + 30) = 1;
      if ( !DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported((DMMVIDPNPRESENTPATH *)v17)
        && (*((_DWORD *)v17 + 30) & 0x10) != 0 )
      {
        v53 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        WdLogEvent5_WdWarning(v53);
        *((_DWORD *)v17 + 30) &= ~0x10u;
      }
      if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v17)
        && (*((_DWORD *)v17 + 30) & 8) != 0 )
      {
        v54 = WdLogNewEntry5_WdWarning(v33, v32, v34);
        WdLogEvent5_WdWarning(v54);
        *((_DWORD *)v17 + 30) &= ~8u;
      }
      goto LABEL_29;
    }
  }
  else
  {
    if ( v23 )
    {
      v42 = (void (__fastcall ***)(_QWORD, __int64))(v23 + 88);
      v43 = _InterlockedDecrement((volatile signed __int32 *)(v23 + 96));
      if ( v43 )
      {
        if ( v43 < 0 )
        {
          v55 = WdLogNewEntry5_WdError(v42, 0LL);
          *(_QWORD *)(v55 + 24) = v43;
          WdLogEvent5_WdError(v55);
        }
      }
      else if ( v23 != -88 )
      {
        (**v42)(v42, 1LL);
      }
    }
    v44 = (void (__fastcall ***)(_QWORD, __int64))(v20 + 88);
    v45 = _InterlockedDecrement((volatile signed __int32 *)(v20 + 96));
    if ( v45 )
    {
      if ( v45 < 0 )
      {
        v56 = WdLogNewEntry5_WdError(v44, v11);
        *(_QWORD *)(v56 + 24) = v45;
        WdLogEvent5_WdError(v56);
      }
    }
    else if ( v20 != -88 )
    {
      (**v44)(v44, 1LL);
    }
  }
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v17,
    (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4);
LABEL_29:
  DMMVIDPNPRESENTPATH::SetRotationSupport(
    (DMMVIDPNPRESENTPATH *)v17,
    (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6);
  *(_DWORD *)((struct D3DKMDT_HVIDPNTOPOLOGY__ *)v17 + 42) = a2[83];
  v36 = *((_QWORD *)v13 + 17);
  if ( v36 <= 3 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v36, v35);
    WdLogEvent5_WdAssertion(v57);
    v36 = *((_QWORD *)v13 + 17);
  }
  v37 = *((_QWORD *)v13 + 18);
  if ( *(_QWORD *)(v37 + 24) != 255LL )
  {
    if ( v36 <= 3 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v36, v35);
      WdLogEvent5_WdAssertion(v58);
      v37 = *((_QWORD *)v13 + 18);
    }
    --*(_QWORD *)(v37 + 24);
  }
  if ( *((_QWORD *)v13 + 17) <= 3uLL )
  {
    v59 = WdLogNewEntry5_WdAssertion(v36, v35);
    WdLogEvent5_WdAssertion(v59);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v13 + 18) + 24LL) )
    ProtectableFromChange::DisallowModifyingAction((DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v13 + 56), 3u);
  v38 = 0;
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v35);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v62);
  return v38;
}
