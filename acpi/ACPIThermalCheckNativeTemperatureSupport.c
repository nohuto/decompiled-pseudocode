/*
 * XREFs of ACPIThermalCheckNativeTemperatureSupport @ 0x1C00957B8
 * Callers:
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIThermalCheckNativeTemperatureSupport(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 200);
  IoReuseIrp(*(PIRP *)(v1 + 208), -1073741637);
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 208) + 184LL);
  *(_BYTE *)(v2 - 72) = 14;
  *(_DWORD *)(v2 - 48) = 2703504;
  *(_DWORD *)(v2 - 56) = 12;
  *(_DWORD *)(v2 - 64) = 4;
  *(_QWORD *)(*(_QWORD *)(v1 + 208) + 24LL) = v1 + 224;
  *(_QWORD *)(v1 + 224) = 0LL;
  *(_DWORD *)(v1 + 232) = 0;
  return IoSynchronousCallDriver(*(_QWORD *)(v1 + 216), *(_QWORD *)(v1 + 208));
}
