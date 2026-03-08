/*
 * XREFs of ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BA068
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C030302C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0003558 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01DD468 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(PERESOURCE **this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r14
  char v6; // di
  PERESOURCE *v7; // rcx
  __int64 v8; // rax

  v4 = a3;
  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3242LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3242LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3243LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3243LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[2] != *((PERESOURCE **)a2 + 235) )
  {
    WdLogSingleEntry1(1LL, 3244LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      3244LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, v4)
    && !ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)this, a2, v4) )
  {
    WdLogSingleEntry1(1LL, 3245LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsVidPnSourceOwner(pDevice, VidPnSourceId) || IsEmulatedVidPnSourceOwner(pDevice, VidPnSourceId)",
      3245LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry2(4LL, a2, v4);
  v7 = this[16];
  v8 = 500 * v4;
  if ( a2 == (struct DXGDEVICE *)v7[500 * v4 + 93] )
  {
    v7[v8 + 93] = 0LL;
LABEL_17:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v4);
    return v6;
  }
  if ( a2 == (struct DXGDEVICE *)v7[v8 + 91] )
  {
    if ( *((_QWORD *)a2 + 235) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
    {
      if ( DXGDEVICE::IsVidPnSourcePrimaryValid(a2, v4) )
      {
        v6 = 1;
        ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)this, a2, v4, 0);
      }
    }
    ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, v4);
    goto LABEL_17;
  }
  return 0;
}
