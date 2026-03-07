CCpuClippingData::CpuClipRealization **__fastcall std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator=<std::default_delete<CCpuClippingData::CpuClipRealization>,0>(
        CCpuClippingData::CpuClipRealization **a1,
        CCpuClippingData::CpuClipRealization **a2)
{
  CCpuClippingData::CpuClipRealization *v3; // rax
  CCpuClippingData::CpuClipRealization *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CCpuClippingData::CpuClipRealization::~CpuClipRealization(v4);
      operator delete(v4, 0x88uLL);
    }
  }
  return a1;
}
