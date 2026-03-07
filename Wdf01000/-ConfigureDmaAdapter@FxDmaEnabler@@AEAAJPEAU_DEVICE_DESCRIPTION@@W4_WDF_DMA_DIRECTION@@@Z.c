int __fastcall FxDmaEnabler::ConfigureDmaAdapter(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_DIRECTION ConfigDirection)
{
  $2CC3FC5F0458F7DBA3F7D6DD9579F542 *DmaDescription; // rax
  _OWORD *v4; // r9
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  FxDmaEnabler *v8; // rcx

  DmaDescription = FxDmaEnabler::GetDmaDescription(this, ConfigDirection);
  v5 = v4[1];
  *(_OWORD *)&DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version = *v4;
  v6 = v4[2];
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.DmaChannel = v5;
  v7 = v4[3];
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.MaximumLength = v6;
  *(_OWORD *)&DmaDescription->m_DuplexAdapterInfo[0].DeviceDescription.DmaRequestLine = v7;
  return FxDmaEnabler::InitializeResources(v8, &DmaDescription->m_SimplexAdapterInfo);
}
