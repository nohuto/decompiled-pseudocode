/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C
 * Callers:
 *     ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D48F0 (-GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074718 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02B6370 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        DXGADAPTER **this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  DXGADAPTER *v7; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  DXGADAPTER *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  struct DXGK_GAMMA_ADJUSTMENT *v13; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v18; // rcx
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 7748LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7748LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 7749LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != ppDxgiGammaRamp", 7749LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  v6 = 0LL;
  v7 = this[2];
  if ( *((_DWORD *)v7 + 566) )
  {
    v19 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v7, v4, &v19);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry2(2LL, v4, this[2]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!",
        v4,
        (__int64)this[2],
        0LL,
        0LL,
        0LL);
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
    }
    if ( v19 == -1 )
    {
      WdLogSingleEntry1(1LL, 7771LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
        7771LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = this[16];
    v10 = 4000LL * v19;
    if ( *(_DWORD *)((char *)v9 + v10 + 736) == 1 && (v11 = *(_QWORD *)((char *)v9 + v10 + 744)) != 0 )
    {
      v12 = *(_QWORD *)((char *)v9 + v10 + 744);
    }
    else
    {
      v11 = *(_QWORD *)((char *)v9 + v10 + 728);
      v12 = v11;
      if ( !v11 )
      {
LABEL_15:
        *a3 = (const struct DXGK_GAMMA_RAMP *)v6;
        return (unsigned int)SourceConnectedToTargetInClientVidPn;
      }
    }
    v13 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v11 + 8LL * v19 + 1688);
    v6 = *(_QWORD *)(v12 + 8LL * v19 + 1560);
    if ( !v13 )
    {
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      goto LABEL_15;
    }
    v15 = *(_QWORD *)(v12 + 8LL * v19 + 1560);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1 )
      v15 = 0LL;
    v16 = operator new[](0x30uLL, 0x4B677844u, 256LL);
    v6 = v16;
    if ( !v16 )
    {
      WdLogSingleEntry1(6LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741801;
    }
    *(_WORD *)(v16 + 40) = 0;
    *(_QWORD *)v16 = &ReferenceCounted::`vftable';
    *(_QWORD *)v16 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v16 + 8) = 1;
    *(_DWORD *)(v16 + 16) = 1;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    if ( v15 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v16,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v15 + 16),
                 *(const void **)(v15 + 32));
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize(
                                               (DXGK_GAMMA_RAMP *)v16,
                                               D3DDDI_GAMMARAMP_RGB256x3x16,
                                               0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_32;
      inited = ColorSpaceTransformInitIdentityTransform((v6 + 16) & -(__int64)(v6 != 0));
    }
    SourceConnectedToTargetInClientVidPn = inited;
    if ( inited >= 0 )
    {
      SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                               v18,
                                               (const struct DXGK_GAMMA_RAMP *)v15,
                                               (struct DXGK_GAMMA_RAMP *)v6,
                                               v13);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_15;
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)v6);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
