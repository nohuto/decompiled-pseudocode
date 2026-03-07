CCpuClip *__fastcall CCpuClip::CCpuClip(CCpuClip *this)
{
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  CCpuClip::Initialize(this, 0LL, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
  return this;
}
