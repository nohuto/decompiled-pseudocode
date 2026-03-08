/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02B9D34
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02BD3BC (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0003504 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006714 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01DD468 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2)
{
  char v4; // r14
  unsigned int v5; // esi
  PERESOURCE *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbp
  PERESOURCE *v9; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3166LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3166LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3167LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3167LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((ADAPTER_DISPLAY *)this, a2) )
  {
    WdLogSingleEntry1(1LL, 3168LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsVidPnSourceOwner(pDevice) || IsEmulatedVidPnSourceOwner(pDevice)",
      3168LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry1(4LL, a2);
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v6 = (PERESOURCE *)*((_QWORD *)a2 + 235);
      if ( v6 == *(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL) && a2 == (struct DXGDEVICE *)this[16][500 * v5 + 91] )
      {
        if ( this[2] != v6 )
        {
          WdLogSingleEntry1(1LL, 3186LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
            3186LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v5) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 24) )
        goto LABEL_17;
    }
    v4 = 1;
    ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, 0xFFFFFFFD, 0);
  }
LABEL_17:
  v7 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v8 = 500LL * v7;
      v9 = this[16];
      if ( a2 == (struct DXGDEVICE *)v9[v8 + 93] )
        break;
      if ( a2 == (struct DXGDEVICE *)v9[v8 + 91] )
      {
        if ( this[2] != *((PERESOURCE **)a2 + 235) )
        {
          WdLogSingleEntry1(1LL, 3219LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
            3219LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v7);
        goto LABEL_26;
      }
LABEL_27:
      if ( ++v7 >= *((_DWORD *)this + 24) )
        return v4;
    }
    if ( this[2] != *((PERESOURCE **)a2 + 235) )
    {
      WdLogSingleEntry1(1LL, 3212LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
        3212LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    this[16][v8 + 93] = 0LL;
LABEL_26:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v7);
    goto LABEL_27;
  }
  return v4;
}
