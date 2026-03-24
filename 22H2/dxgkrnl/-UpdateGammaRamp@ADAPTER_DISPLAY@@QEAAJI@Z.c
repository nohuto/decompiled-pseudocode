/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0
 * Callers:
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E0464 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E0770 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00E52AC (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00E73E0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0173A30 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0214734 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02148A4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00028F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C00623F0 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00EAF88 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00EB030 (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C00EB174 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00EB37C (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C02111D8 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  DXGADAPTER *v7; // rax
  __int64 v8; // rsi
  struct DXGK_GAMMA_ADJUSTMENT *v9; // r15
  __int64 v10; // rbp
  volatile signed __int32 *v11; // rbx
  PERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // rax
  volatile signed __int32 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE v37[56]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v25 + 24) = 7117LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_DWORD *)this[2] + 510) )
    return 0LL;
  v6 = 3968 * v3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (DXGADAPTER *)((char *)this[14] + 3968 * v3 + 864), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  v7 = this[14];
  if ( *((_DWORD *)v7 + 992 * v3 + 174) != 1 || (v8 = *(_QWORD *)((char *)v7 + v6 + 704)) == 0 )
  {
    v8 = *(_QWORD *)((char *)v7 + v6 + 688);
    if ( !v8 )
      goto LABEL_9;
  }
  v9 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v8 + 8 * v3 + 1656);
  v10 = *(_QWORD *)(v8 + 8 * v3 + 1528);
  if ( !v9 )
  {
    v11 = *(volatile signed __int32 **)(v8 + 8 * v3 + 1528);
    if ( !v10 )
      goto LABEL_9;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
LABEL_46:
    if ( v11 )
    {
LABEL_11:
      if ( !*((_BYTE *)this + 251) || !DXGADAPTER::IsFullWDDMAdapter(this[2]) )
        goto LABEL_16;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(v12) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v34 + 24) = 7249LL;
        WdLogEvent5_WdAssertion(v34);
      }
      LODWORD(v8) = ADAPTER_RENDER::SuspendScheduler(*((ADAPTER_RENDER **)this[2] + 338), 0, 0);
      if ( (int)v8 < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v35 + 24) = this;
        WdLogEvent5_WdError(v35);
      }
      else
      {
LABEL_16:
        LODWORD(v8) = DmmUpdateGammaRampOnVidPnSource(this[2], v3, (const struct DXGK_GAMMA_RAMP *)v11);
        v38 = 0;
        v17 = 0;
        while ( 1 )
        {
          v18 = DmmEnumClientVidPnPathTargetsFromSource(this[2], v3, v17++, &v38);
          if ( v18 < 0 )
            break;
          v19 = v38;
          if ( v38 == -1 )
            break;
          v20 = MonitorNotifyDXGIGammaRampChange(this[2]);
          v8 = v20;
          if ( v20 < 0 )
          {
            v36 = WdLogNewEntry5_WdError(v22, v21);
            *(_QWORD *)(v36 + 24) = v8;
            WdLogEvent5_WdError(v36);
          }
        }
        if ( *((_BYTE *)this + 251) && DXGADAPTER::IsFullWDDMAdapter(this[2]) )
          ADAPTER_RENDER::ResumeScheduler(*(ADAPTER_RENDER **)(v23 + 2704), 0, 0);
      }
      goto LABEL_24;
    }
LABEL_9:
    v11 = *(volatile signed __int32 **)((char *)this[14] + v6 + 904);
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    goto LABEL_11;
  }
  if ( v10 && *(_DWORD *)(v10 + 16) == 1 )
    v10 = 0LL;
  v26 = (volatile signed __int32 *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v11 = v26;
  if ( v26 )
  {
    *((_WORD *)v26 + 20) = 0;
    *(_QWORD *)v26 = &ReferenceCounted::`vftable';
    v28 = 1LL;
    *((_DWORD *)v26 + 2) = 1;
    *(_QWORD *)v26 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v26 + 4) = 1;
    *((_QWORD *)v26 + 3) = 0LL;
    *((_QWORD *)v26 + 4) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    if ( v10 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize((size_t *)v11, *(unsigned int *)(v10 + 16), *(const void **)(v10 + 32));
    }
    else
    {
      LODWORD(v8) = DXGK_GAMMA_RAMP::Initialize((size_t *)v11, 2LL, 0LL);
      if ( (int)v8 < 0 )
        goto LABEL_24;
      inited = ColorSpaceTransformInitIdentityTransform((__int64)(v11 + 4));
    }
    LODWORD(v8) = inited;
    if ( inited >= 0 )
    {
      LODWORD(v8) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                      v33,
                      (const struct DXGK_GAMMA_RAMP *)v10,
                      (struct DXGK_GAMMA_RAMP *)v11,
                      v9);
      if ( (int)v8 >= 0 )
        goto LABEL_46;
    }
LABEL_24:
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)v11, v19);
    goto LABEL_26;
  }
  v31 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
  *(_QWORD *)(v31 + 24) = v8;
  WdLogEvent5_WdLowResource(v31);
  LODWORD(v8) = -1073741801;
LABEL_26:
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37, v19);
  return (unsigned int)v8;
}
