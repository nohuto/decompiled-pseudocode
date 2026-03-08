/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A0140
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0007ED8 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000806C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00152EC (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C01A05AC (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A07DC (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A0840 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A08A4 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r12
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // r15
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v16; // rbp
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  struct DMMVIDPNTARGETMODESET *v24; // rax
  DMMVIDPNTARGET *v25; // rcx
  struct DMMVIDPNTARGETMODESET *v26; // rbx
  struct DMMVIDPNTARGETMODESET *v27; // rax
  unsigned int v28; // ecx
  struct DMMVIDPNTARGETMODESET *v29; // rdi
  __int64 v30; // r13
  unsigned __int64 v31; // r8
  int v32; // r9d
  unsigned __int64 v33; // r12
  int v34; // eax
  int v35; // edx
  unsigned __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // r8
  void (__fastcall ***v40)(_QWORD, __int64, __int64); // rcx
  int v41; // eax
  int v42; // edi
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v43; // rax
  __int64 v44; // rbx
  struct DMMVIDPNTARGETMODESET *v45; // [rsp+50h] [rbp-78h] BYREF
  struct DMMVIDPNTARGETMODESET *v46; // [rsp+58h] [rbp-70h] BYREF
  __int64 v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  int v49; // [rsp+78h] [rbp-50h] BYREF
  __int64 v50; // [rsp+80h] [rbp-48h]
  char v51; // [rsp+88h] [rbp-40h]
  __int64 v52; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v53; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v54; // [rsp+E8h] [rbp+20h]

  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v51 = 1;
    v49 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 7038);
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, this);
    v37 = -1073741811;
    goto LABEL_44;
  }
  v9 = *(_DWORD *)a2;
  v10 = *((unsigned int *)a2 + 1);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v48 = v9;
  v12 = (unsigned int)v9;
  v47 = v10;
  v13 = (unsigned int)v10;
  v11[3] = v9;
  v11[4] = v10;
  v11[5] = this;
  v11[6] = a2;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v37 = -1071774976;
    goto LABEL_44;
  }
  v14 = *((_DWORD *)a2 + 83);
  if ( (v14 & 1) == 0 )
    *((_DWORD *)a2 + 83) = v14 | 1;
  v15 = a2 + 4;
  if ( *((_BYTE *)this + 76) <= 3u )
  {
    WdLogSingleEntry0(1LL);
    v12 = v9;
    v13 = v10;
  }
  if ( (*((_BYTE *)this + 78) & 8) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v37 = -1073741790;
    goto LABEL_89;
  }
  v16 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
  if ( v16 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
    goto LABEL_73;
  v17 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v16 - 8);
  while ( v17 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v17 + 11) + 24LL) == (_DWORD)v9
      && *(_DWORD *)(*((_QWORD *)v17 + 12) + 24LL) == (_DWORD)v10 )
    {
      break;
    }
    v43 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v17 + 1);
    v17 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)((char *)v43 - 8);
    if ( v43 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      v17 = 0LL;
  }
  if ( !v17 )
  {
LABEL_73:
    WdLogSingleEntry3(2LL, v12, v13, this);
    v37 = -1071774937;
LABEL_89:
    WdLogSingleEntry2(2LL, a2, this);
    goto LABEL_44;
  }
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
  v53 = v20;
  v22 = *(_QWORD *)(v21 + 104);
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
    v22 = *(_QWORD *)(v21 + 104);
  }
  v23 = *(_QWORD *)(v20 + 144) == 0LL;
  v52 = v22;
  if ( v23 || !*(_QWORD *)(v22 + 144) )
  {
    if ( v22 )
    {
      v40 = (void (__fastcall ***)(_QWORD, __int64, __int64))(v22 + 88);
      v41 = _InterlockedDecrement((volatile signed __int32 *)(v22 + 96));
      if ( v41 )
      {
        if ( v41 < 0 )
        {
          v44 = v41;
          WdLogSingleEntry1(2LL, v41);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v44,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v40 )
      {
        (**v40)(v40, 1LL, v13);
      }
    }
    v42 = _InterlockedDecrement((volatile signed __int32 *)(v20 + 96));
    if ( v42 )
    {
      if ( v42 < 0 )
      {
        WdLogSingleEntry1(2LL, v42);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
          v42,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( v20 != -88 )
    {
      (**(void (__fastcall ***)(__int64, __int64, __int64))(v20 + 88))(v20 + 88, 1LL, v13);
    }
    DMMVIDPNPRESENTPATH::SetScalingSupport(
      (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v17,
      (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4);
    goto LABEL_33;
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v52, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v53, 0LL);
  v24 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v17 + 11));
  v25 = (DMMVIDPNTARGET *)*((_QWORD *)v17 + 12);
  v26 = v24;
  v46 = v24;
  v27 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v25);
  v28 = *((_DWORD *)v17 + 29);
  v29 = v27;
  v45 = v27;
  v30 = *((_QWORD *)v27 + 18);
  v54 = *(_QWORD *)(*((_QWORD *)v26 + 18) + 76LL);
  v53 = v54;
  v32 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v28);
  if ( ((v32 - 2) & 0xFFFFFFFD) == 0 )
  {
    v34 = v31;
LABEL_27:
    v35 = HIDWORD(v53);
    goto LABEL_28;
  }
  v33 = HIDWORD(v31);
  v34 = HIDWORD(v31);
  if ( v32 == 254 )
  {
    if ( DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation((DMMVIDPNPRESENTPATH *)v17) )
    {
      if ( (_DWORD)v54 == *(_DWORD *)(v30 + 84) && (_DWORD)v33 == *(_DWORD *)(v30 + 88) )
      {
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45, 0LL);
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v46, 0LL);
        goto LABEL_58;
      }
      v34 = v53;
      goto LABEL_27;
    }
    v34 = v33;
  }
  v35 = v53;
LABEL_28:
  if ( v35 != *(_DWORD *)(v30 + 84) || v34 != *(_DWORD *)(v30 + 88) )
  {
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v29 + 88));
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v26 + 88));
    if ( a2 == (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)-16LL )
      WdLogSingleEntry0(1LL);
    v17[30] = *(_DWORD *)v15;
    if ( !DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported((DMMVIDPNPRESENTPATH *)v17)
      && ((_DWORD)v17[30] & 0x10) != 0 )
    {
      WdLogSingleEntry0(3LL);
      *((_DWORD *)v17 + 30) &= ~0x10u;
    }
    if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v17)
      && ((_DWORD)v17[30] & 8) != 0 )
    {
      WdLogSingleEntry0(3LL);
      *((_DWORD *)v17 + 30) &= ~8u;
    }
    goto LABEL_33;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v29 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v26 + 88));
LABEL_58:
  if ( VIDPN_MGR::_bShouldLogOn1277688 && (*(_DWORD *)v15 & 6) != 0 )
  {
    WdLogSingleEntry2(3LL, v48, v47);
    VIDPN_MGR::_bShouldLogOn1277688 = 0;
  }
  *((_DWORD *)v17 + 30) = 1;
  if ( !DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported((DMMVIDPNPRESENTPATH *)v17) && ((_DWORD)v17[30] & 0x10) != 0 )
  {
    WdLogSingleEntry0(3LL);
    *((_DWORD *)v17 + 30) &= ~0x10u;
  }
  if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v17)
    && ((_DWORD)v17[30] & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    *((_DWORD *)v17 + 30) &= ~8u;
  }
LABEL_33:
  DMMVIDPNPRESENTPATH::SetRotationSupport(
    (DMMVIDPNPRESENTPATH *)v17,
    (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6);
  v17[42] = a2[83];
  v36 = *((_QWORD *)this + 17);
  if ( v36 <= 3 )
  {
    WdLogSingleEntry0(1LL);
    v36 = *((_QWORD *)this + 17);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 18) + 24LL) != 255LL )
  {
    if ( v36 <= 3 )
      WdLogSingleEntry0(1LL);
    --*(_QWORD *)(*((_QWORD *)this + 18) + 24LL);
  }
  if ( *((_QWORD *)this + 17) <= 3uLL )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) )
    ProtectableFromChange::DisallowModifyingAction((DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 56), 3u);
  v37 = 0;
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v38, v49);
  return v37;
}
