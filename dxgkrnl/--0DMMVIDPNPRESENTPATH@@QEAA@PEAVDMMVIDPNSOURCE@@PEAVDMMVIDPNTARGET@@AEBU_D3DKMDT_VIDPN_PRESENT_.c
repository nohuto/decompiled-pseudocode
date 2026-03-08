/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0069938
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03B1DB8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C00023E4 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0004974 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0007ED8 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000890C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00152EC (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0023CA8 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0068F2C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0069D88 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C0183050 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  __int64 v8; // rax
  ReferenceCounted *v9; // rsi
  int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 Content; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE ImportanceOrdinal; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax

  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_DWORD *)this + 41) = 255;
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v8 = operator new[](0x30uLL, 0x4B677844u, 256LL);
    v9 = (ReferenceCounted *)v8;
    if ( !v8 )
    {
      WdLogSingleEntry3(
        6LL,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL),
        -1073741801LL);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    *(_WORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)v8 = &ReferenceCounted::`vftable';
    *(_QWORD *)v8 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 16) = 1;
    v10 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v8, &a4->GammaRamp);
    v11 = v10;
    if ( v10 < 0 )
    {
      ReferenceCounted::Release(v9);
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v16[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v16[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v16[5] = v11;
      *((_DWORD *)this + 16) = v11;
      return this;
    }
    *((_QWORD *)this + 23) = v9;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v17 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  LODWORD(v18) = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(2LL, a4->CopyProtection.CopyProtectionType, this, v17);
LABEL_13:
    *((_DWORD *)this + 16) = v18;
    return this;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
    &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v19 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v18 = v19;
  if ( v19 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    Content = a4->Content;
LABEL_17:
    v24[3] = Content;
    v24[4] = *((unsigned int *)a2 + 6);
    v24[5] = *((unsigned int *)a3 + 6);
    v24[6] = v18;
    goto LABEL_13;
  }
  Scaling = a4->ContentTransformation.Scaling;
  if ( Scaling != D3DKMDT_VPPS_UNPINNED )
  {
    v27 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling);
    v18 = v27;
    if ( v27 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_17;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v33 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v18 = v33;
    if ( v33 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_17;
    }
  }
  ImportanceOrdinal = a4->ImportanceOrdinal;
  if ( ImportanceOrdinal && (ImportanceOrdinal <= 32 || ImportanceOrdinal == 255) )
  {
    *((_DWORD *)this + 26) = ImportanceOrdinal;
    DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
    *((_DWORD *)this + 20) = 2;
  }
  else
  {
    WdLogSingleEntry1(2LL, a4->ImportanceOrdinal);
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    v43[3] = a4->ImportanceOrdinal;
    v43[4] = *((unsigned int *)a2 + 6);
    v43[5] = *((unsigned int *)a3 + 6);
    v43[6] = -1071774908LL;
    *((_DWORD *)this + 16) = -1071774908;
  }
  return this;
}
