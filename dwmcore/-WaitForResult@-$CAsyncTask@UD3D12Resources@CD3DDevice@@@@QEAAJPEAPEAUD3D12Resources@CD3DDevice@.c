/*
 * XREFs of ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18028B650
 * Callers:
 *     ?GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028A530 (-GetD3D12DeviceNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18028A718 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18028A798 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18028B0C8 (-TryGetD3D12Device@CD3DDevice@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(__int64 a1, _QWORD *a2)
{
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)a1, 0);
  *a2 = a1 + 72;
  return *(unsigned int *)(a1 + 96);
}
