void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CCpuClippingData::CpuClipRealization *this)
{
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 15);
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 96));
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 72));
}
