/*
 * XREFs of DxgkMiracastQueryMiracastSupportNoLock @ 0x1C001FE2C
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportNoLock(__int64 a1)
{
  __m128i v1; // xmm0
  int v2; // edx

  v1 = (__m128i)xmmword_1C013B968;
  v2 = dword_1C013B978;
  *(_OWORD *)a1 = xmmword_1C013B968;
  *(_DWORD *)(a1 + 16) = v2;
  return (_mm_cvtsi128_si32(_mm_srli_si128(v1, 12)) | v2) == 0 ? 0xC00000BB : 0;
}
