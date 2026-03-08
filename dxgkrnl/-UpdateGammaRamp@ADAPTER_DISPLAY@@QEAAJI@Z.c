/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90
 * Callers:
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0177E48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C78EC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02B9B2C (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BA068 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074718 (ColorSpaceTransformInitIdentityTransform.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0179CDC (MonitorNotifyDXGIGammaRampChange.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0179FB8 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C017FE5C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C017FED0 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01AFF6C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02B6370 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  DXGADAPTER *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct DXGK_GAMMA_ADJUSTMENT *v8; // r15
  __int64 v9; // rsi
  unsigned int v10; // r14d
  unsigned __int64 v11; // r8
  int v12; // eax
  __int64 v14; // r14
  __int64 v15; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v17; // rcx
  PERESOURCE *v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 7413LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7413LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this[2] + 566) )
  {
    v4 = this[16];
    v5 = 4000 * v3;
    if ( *((_DWORD *)v4 + 1000 * v3 + 184) != 1 || (v6 = *(_QWORD *)((char *)v4 + v5 + 744)) == 0 )
    {
      v6 = *(_QWORD *)((char *)v4 + v5 + 728);
      v7 = 0LL;
      if ( !v6 )
        goto LABEL_10;
    }
    v8 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v6 + 8 * v3 + 1688);
    v7 = *(_QWORD *)(v6 + 8 * v3 + 1560);
    if ( !v8 )
    {
      if ( v7 )
        _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
LABEL_10:
      if ( !*((_BYTE *)this + 291) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_11;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v18) )
      {
        WdLogSingleEntry1(1LL, 7526LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          7526LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v9) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 366), 0, 0);
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to suspend scheduler for setting gammaramp in adapter 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
LABEL_11:
        LODWORD(v9) = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v7);
        v20 = 0;
        v10 = 0;
        while ( 1 )
        {
          v11 = v10++;
          if ( (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], v3, v11, &v20) < 0 || v20 == -1 )
            break;
          v12 = MonitorNotifyDXGIGammaRampChange(this[2]);
          v9 = v12;
          if ( v12 < 0 )
          {
            WdLogSingleEntry1(2LL, v12);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
              v9,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        if ( *((_BYTE *)this + 291) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v19 + 2928), 0, 0);
      }
      if ( !v7 )
        return (unsigned int)v9;
      goto LABEL_39;
    }
    v14 = *(_QWORD *)(v6 + 8 * v3 + 1560);
    if ( v7 && *(_DWORD *)(v7 + 16) == 1 )
      v14 = 0LL;
    v15 = operator new[](0x30uLL, 0x4B677844u, 256LL);
    v7 = v15;
    if ( !v15 )
    {
      WdLogSingleEntry1(6LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v9) = -1073741801;
      return (unsigned int)v9;
    }
    *(_WORD *)(v15 + 40) = 0;
    *(_QWORD *)v15 = &ReferenceCounted::`vftable';
    *(_QWORD *)v15 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v15 + 8) = 1;
    *(_DWORD *)(v15 + 16) = 1;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    if ( v14 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v15,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v14 + 16),
                 *(const void **)(v14 + 32));
    }
    else
    {
      LODWORD(v9) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v15, D3DDDI_GAMMARAMP_RGB256x3x16, 0LL);
      if ( (int)v9 < 0 )
        goto LABEL_39;
      inited = ColorSpaceTransformInitIdentityTransform((v7 + 16) & -(__int64)(v7 != 0));
    }
    LODWORD(v9) = inited;
    if ( inited >= 0 )
    {
      LODWORD(v9) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v17,
                      (const struct DXGK_GAMMA_RAMP *)v14,
                      (struct DXGK_GAMMA_RAMP *)v7,
                      v8);
      if ( (int)v9 >= 0 )
        goto LABEL_10;
    }
LABEL_39:
    ReferenceCounted::Release((ReferenceCounted *)v7);
    return (unsigned int)v9;
  }
  return 0LL;
}
