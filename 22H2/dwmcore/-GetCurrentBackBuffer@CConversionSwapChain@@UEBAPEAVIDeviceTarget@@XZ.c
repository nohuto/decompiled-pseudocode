/*
 * XREFs of ?GetCurrentBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1802A2360
 * Callers:
 *     ?GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAPEAVIDeviceTarget@@XZ @ 0x180120F60 (-GetCurrentBackBuffer@CConversionSwapChain@@$4PPPPPPPM@DFI@EBAPEAVIDeviceTarget@@XZ.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CConversionSwapChain::GetCurrentBackBuffer(CConversionSwapChain *this)
{
  return (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 64LL))(*((_QWORD *)this + 47));
}
