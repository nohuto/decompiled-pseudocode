/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008364
 * Callers:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C003F6C8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211D70 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B8D38 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C02B9010 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02B9C5C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C0988 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02E2430 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( !*((_BYTE *)this + 1) )
  {
    WdLogSingleEntry1(1LL, 707LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v3, v2, v4, 0, 2, -1, (__int64)L"m_Entered", 707LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
