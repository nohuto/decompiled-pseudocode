/*
 * XREFs of VidSchGetDevicePageFaultInformation @ 0x1C00B4BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetDevicePageFaultInformation(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 208);
  a2[1] = *(_OWORD *)(a1 + 224);
}
