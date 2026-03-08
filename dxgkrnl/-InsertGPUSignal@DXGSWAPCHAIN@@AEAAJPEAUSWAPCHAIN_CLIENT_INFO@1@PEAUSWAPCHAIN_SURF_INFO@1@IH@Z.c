/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@IH@Z @ 0x1C0353D8C
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x1C0354C44 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C02E64A8 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v5; // r14
  DXGDEVICE *v9; // rcx
  struct DXGPROCESS *v10; // rsi
  bool v11; // dl
  unsigned int v13[4]; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v14[64]; // [rsp+60h] [rbp-148h] BYREF

  v5 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry1(1LL, 3378LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pClientInfo->pTempDevice", 3378LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v10 = (struct DXGPROCESS *)*((_QWORD *)v9 + 5);
  if ( v10 )
  {
    v13[0] = 0;
    DXGDEVICE::GetContexts(v9, v13, v14);
    if ( v13[0] )
    {
      return SignalSynchronizationObjectInternal(
               1u,
               (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
               0,
               v13[0],
               v14,
               0LL,
               v5,
               0LL,
               v10,
               a5 != 0 ? 10 : 2);
    }
    else
    {
      WdLogSingleEntry2(2LL, this, *((_QWORD *)a2 + 1));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Swapchain 0x%I64x Failed to get context count for device 0x%I64x",
        (__int64)this,
        *((_QWORD *)a2 + 1),
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3384LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3384LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v11);
    return 3221225485LL;
  }
}
