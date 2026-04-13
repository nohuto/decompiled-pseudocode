/*
 * XREFs of ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002D2F8
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x18002CDA8 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18002D3F0 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x18003D0E4 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  bool v1; // zf
  const WCHAR *v3; // rdx
  HKEY v4; // rcx
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 254) == 0;
  v6 = L"HealthEvaluation";
  if ( !v1 && *((_BYTE *)this + 253) )
  {
    hKey = 0LL;
    v3 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v3 = *(const WCHAR **)v3;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v3, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, L"HealthEvaluation", 0, 3u, (const BYTE *)this + 144, 0x24u) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>(&v6);
    }
    v4 = hKey;
    *((_BYTE *)this + 253) = 0;
    if ( v4 )
      RegCloseKey(v4);
  }
}
