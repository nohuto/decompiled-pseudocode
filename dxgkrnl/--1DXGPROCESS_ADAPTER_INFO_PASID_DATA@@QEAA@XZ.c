void __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::~DXGPROCESS_ADAPTER_INFO_PASID_DATA(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this)
{
  DXGPROCESS_ADAPTER_INFO_PASID_DATA *v2; // rcx

  v2 = (DXGPROCESS_ADAPTER_INFO_PASID_DATA *)*((_QWORD *)this + 3);
  if ( v2 != this )
  {
    operator delete(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
