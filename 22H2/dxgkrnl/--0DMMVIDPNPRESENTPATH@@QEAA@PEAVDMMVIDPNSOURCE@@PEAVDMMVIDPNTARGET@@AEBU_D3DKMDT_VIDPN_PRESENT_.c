/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000DE88
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01519B8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00029D4 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00069A4 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0006C14 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00073E0 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000B498 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B8A4 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C000E060 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000E08C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E0C0 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C011B0B8 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 Scaling; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  DXGK_GAMMA_RAMP *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  DXGK_GAMMA_RAMP *v34; // rsi
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 Content; // rcx

  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a3 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v28);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v29 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
    v34 = v29;
    if ( v29 )
    {
      *((_WORD *)v29 + 20) = 0;
      *((_QWORD *)v29 + 3) = 0LL;
      *((_QWORD *)v29 + 4) = 0LL;
      *(_QWORD *)v29 = &ReferenceCounted::`vftable';
      *(_QWORD *)v29 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v29 + 2) = 1;
      *((_DWORD *)v29 + 4) = 1;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !v34 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
      v35[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v35[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v35[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v35);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v36 = DXGK_GAMMA_RAMP::Initialize(v34, &a4->GammaRamp);
    v38 = v36;
    if ( v36 < 0 )
    {
      ReferenceCounted::Release(v34, v37);
      v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39);
      v41[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v41[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v41[5] = v38;
      *((_DWORD *)this + 16) = v38;
      return this;
    }
    *((_QWORD *)this + 23) = v34;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v8 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v11 = v8;
  if ( v8 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v42[3] = a4->CopyProtection.CopyProtectionType;
    v42[4] = this;
    v42[5] = v11;
    WdLogEvent5_WdError(v42);
LABEL_27:
    *((_DWORD *)this + 16) = v11;
    return this;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
    &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v12 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v11 = v12;
  if ( v12 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
    Content = a4->Content;
LABEL_26:
    v43[3] = Content;
    v43[4] = *((unsigned int *)a2 + 6);
    v43[5] = *((unsigned int *)a3 + 6);
    v43[6] = v11;
    goto LABEL_27;
  }
  Scaling = (unsigned int)a4->ContentTransformation.Scaling;
  if ( (_DWORD)Scaling != 254 )
  {
    v16 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling);
    v11 = v16;
    if ( v16 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_26;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v20 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v11 = v20;
    if ( v20 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21);
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_26;
    }
  }
  v23 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
  v11 = v23;
  if ( v23 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
    Content = a4->ImportanceOrdinal;
    goto LABEL_26;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
