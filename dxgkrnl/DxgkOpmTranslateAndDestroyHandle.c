/*
 * XREFs of DxgkOpmTranslateAndDestroyHandle @ 0x1C02BDF38
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0063168 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02B94C0 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpmTranslateAndDestroyHandle(DXGADAPTER ***this, _QWORD *a2, void **a3)
{
  DXGADAPTER **v6; // rdx

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 1044LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDxgAdapter != NULL", 1044LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 1045LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phOpmMiniportHandle != NULL", 1045LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this) )
  {
    WdLogSingleEntry1(1LL, 1046LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1046LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = this[365];
  if ( v6 )
  {
    if ( v6[49] != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 1050LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgAdapter->GetDisplayCore()->IsOpmI2CMutexOwner()",
        1050LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(this[365], a2, a3);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Try to call DxgkOpmTranslateAndDestroyHandle on a render only adapter 0x%I64x (Status = 0x%I64x)!",
      (__int64)this,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
