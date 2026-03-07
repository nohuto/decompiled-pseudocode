__int64 __fastcall CDDisplaySwapChain::ComputeCachedHdrMetadata(
        CDDisplaySwapChain *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _OWORD *a3)
{
  unsigned int v3; // ebp
  enum DXGI_HDR_METADATA_TYPE v5; // edi
  char *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  CDDisplayManager *v14; // rcx
  int HdrMetadata; // eax
  __int64 v16; // rcx

  v3 = 0;
  v5 = a2;
  if ( a2 == *((_DWORD *)this + 124) )
  {
    if ( !a3 )
      return v3;
    if ( a2 != DXGI_HDR_METADATA_TYPE_HDR10 )
      return v3;
    v7 = (char *)this + 504;
    if ( !memcmp_0(*((const void **)this + 63), a3, 0x1CuLL) )
      return v3;
    goto LABEL_10;
  }
  v7 = (char *)this + 504;
  if ( a2 == DXGI_HDR_METADATA_TYPE_NONE )
  {
    *((_QWORD *)this + 64) = *((_QWORD *)this + 63);
    goto LABEL_18;
  }
  if ( a2 == DXGI_HDR_METADATA_TYPE_HDR10 )
  {
    if ( !a3 )
    {
      v5 = DXGI_HDR_METADATA_TYPE_NONE;
      goto LABEL_18;
    }
LABEL_10:
    v8 = *((_QWORD *)v7 + 1);
    v9 = *(_QWORD *)v7;
    v10 = v8 - *(_QWORD *)v7;
    if ( v10 > 0x1C )
    {
      v11 = v9 + 28;
LABEL_16:
      *((_QWORD *)v7 + 1) = v11;
      goto LABEL_17;
    }
    if ( v10 < 0x1C )
    {
      if ( (unsigned __int64)(*((_QWORD *)v7 + 2) - v9) >= 0x1C )
      {
        v12 = 28 - v10;
        memset_0(*((void **)v7 + 1), 0, 28 - v10);
        v11 = v12 + v8;
        goto LABEL_16;
      }
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v7, 0x1CuLL);
    }
LABEL_17:
    v13 = *(_QWORD *)v7;
    *(_OWORD *)v13 = *a3;
    *(_QWORD *)(v13 + 16) = *((_QWORD *)a3 + 2);
    *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 6);
  }
LABEL_18:
  *((_DWORD *)this + 124) = v5;
  v14 = (CDDisplayManager *)*((_QWORD *)this + 66);
  *((_QWORD *)this + 66) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(CDDisplayManager *))(*(_QWORD *)v14 + 16LL))(v14);
  HdrMetadata = CDDisplayManager::CreateHdrMetadata(
                  v14,
                  v5,
                  a3,
                  (struct Windows::Devices::Display::Core::IDisplayHdrMetadata **)this + 66);
  v3 = HdrMetadata;
  if ( HdrMetadata < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, HdrMetadata, 0xB8u, 0LL);
  return v3;
}
