/*
 * XREFs of ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0009C00
 * Callers:
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C000A168 (-IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall DXGADAPTER::IsGpuVirtualAddressingSupported(DXGADAPTER *this)
{
  char v1; // cl
  unsigned __int8 IsGpuVaIoMmuSupported; // al

  if ( (*((_DWORD *)this + 571) & 0x40) != 0 )
    return 1;
  IsGpuVaIoMmuSupported = DXGADAPTER::IsGpuVaIoMmuSupported(this);
  v1 = 0;
  if ( IsGpuVaIoMmuSupported )
    return 1;
  return v1;
}
