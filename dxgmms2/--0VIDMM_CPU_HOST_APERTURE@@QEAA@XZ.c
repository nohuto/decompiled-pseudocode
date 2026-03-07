VIDMM_CPU_HOST_APERTURE *__fastcall VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(VIDMM_CPU_HOST_APERTURE *this)
{
  VIDMM_CPU_HOST_APERTURE *result; // rax

  *((_QWORD *)this + 1) = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  result = this;
  *(_QWORD *)this = this;
  return result;
}
