__int64 __fastcall FxDmaEnabler::ConfigureBusMasterAdapters(
        FxDmaEnabler *this,
        _DEVICE_DESCRIPTION *DeviceDescription,
        _WDF_DMA_ENABLER_CONFIG *Config)
{
  bool v3; // zf
  int v7; // esi
  _WDF_DMA_DIRECTION v8; // r8d
  char v9; // al
  __int64 (*GetDmaAlignment)(void); // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r10
  unsigned int v14; // ecx
  unsigned __int64 Size; // rdx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int AlignmentRequirement; // ecx
  _POOL_TYPE v19; // r9d

  v3 = (*((_BYTE *)this + 380) & 0x10) == 0;
  DeviceDescription->MaximumLength = this->m_MaximumLength;
  if ( v3 )
  {
    v8 = WdfDmaDirectionReadFromDevice;
  }
  else
  {
    v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, WdfDmaDirectionReadFromDevice);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v8 = WdfDmaDirectionWriteToDevice;
  }
  v7 = FxDmaEnabler::ConfigureDmaAdapter(this, DeviceDescription, v8);
  if ( v7 >= 0 )
  {
    v9 = *((_BYTE *)this + 380);
    if ( (v9 & 8) != 0 )
    {
      v3 = (v9 & 0x10) == 0;
      GetDmaAlignment = (__int64 (*)(void))this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->GetDmaAlignment;
      if ( v3 )
      {
        v16 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v16, 0xBu) && v17 )
          --v17;
        AlignmentRequirement = this->m_FDO->AlignmentRequirement;
        if ( AlignmentRequirement <= v17 )
          AlignmentRequirement = v17;
        this->m_CommonBufferAlignment = AlignmentRequirement;
        Size = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
      }
      else
      {
        v11 = GetDmaAlignment();
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v11, 0xBu) && v12 )
          --v12;
        v14 = this->m_FDO->AlignmentRequirement;
        if ( v14 <= v12 )
          v14 = v12;
        this->m_CommonBufferAlignment = v14;
        Size = this->m_SimplexAdapterInfo.PreallocatedSGListSize;
        if ( Size <= this->m_DuplexAdapterInfo[1].PreallocatedSGListSize )
          Size = this->m_DuplexAdapterInfo[1].PreallocatedSGListSize;
      }
      if ( (Config->Flags & 1) == 0 )
      {
        v19 = ExDefaultNonPagedPoolType;
        this->m_SGListSize = Size;
        ExInitializeNPagedLookasideList(
          &this->m_SGList.ScatterGatherProfile.Lookaside,
          0LL,
          0LL,
          v19 | 0x200,
          Size,
          *(_DWORD *)(v13 + 68),
          0);
        *((_BYTE *)this + 380) |= 0x20u;
      }
    }
    *((_BYTE *)this + 380) |= 2u;
  }
  return (unsigned int)v7;
}
