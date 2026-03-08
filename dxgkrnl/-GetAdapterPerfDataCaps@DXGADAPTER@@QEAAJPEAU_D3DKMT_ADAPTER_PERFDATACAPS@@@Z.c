/*
 * XREFs of ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C02B2BB8
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018DC00 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfDataCaps(DXGADAPTER *this, struct _D3DKMT_ADAPTER_PERFDATACAPS *a2)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v3; // r8

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 72)) )
  {
    v3 = *((_QWORD *)this + 351) + 344 * PhysicalAdapterIndex;
    a2->MaxMemoryBandwidth = *(_QWORD *)(v3 + 184);
    a2->MaxPCIEBandwidth = *(_QWORD *)(v3 + 192);
    a2->MaxFanRPM = *(_DWORD *)(v3 + 200);
    a2->TemperatureMax = *(_DWORD *)(v3 + 204);
    a2->TemperatureWarning = *(_DWORD *)(v3 + 208);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    return 3221225485LL;
  }
}
