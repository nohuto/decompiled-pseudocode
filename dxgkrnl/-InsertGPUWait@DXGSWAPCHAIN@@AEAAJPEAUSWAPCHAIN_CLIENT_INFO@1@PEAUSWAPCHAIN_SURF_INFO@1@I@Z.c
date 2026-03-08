/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0224A6A
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C0188F60 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C02E64A8 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0353F54 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r14
  DXGDEVICE *v8; // rcx
  struct DXGPROCESS *v9; // rbp
  bool v10; // dl
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14[4]; // [rsp+60h] [rbp-158h] BYREF
  unsigned int v15[64]; // [rsp+70h] [rbp-148h] BYREF

  v4 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry1(1LL, 3434LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pClientInfo->pTempDevice", 3434LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v9 = (struct DXGPROCESS *)*((_QWORD *)v8 + 5);
  if ( v9 )
  {
    v14[0] = 0;
    DXGDEVICE::GetContexts(v8, v14, v15);
    v12 = v14[0];
    if ( v14[0] )
    {
      v13 = 0;
      do
      {
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
                   0LL,
                   v4,
                   v15[v13],
                   v9,
                   0,
                   1,
                   0,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        ++v13;
      }
      while ( v13 < v12 );
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
    WdLogSingleEntry1(2LL, 3440LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 3440LL, 0LL, 0LL, 0LL, 0LL);
    DXGSWAPCHAIN::MarkAbandoned(this, v10);
    return 3221225485LL;
  }
  return result;
}
