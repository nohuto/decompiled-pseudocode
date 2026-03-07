VIDMM_PHYSICAL_ADAPTER *__fastcall VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER(VIDMM_PHYSICAL_ADAPTER *this)
{
  *((_QWORD *)this + 60) = (char *)this + 472;
  *((_QWORD *)this + 59) = (char *)this + 472;
  *((_QWORD *)this + 62) = (char *)this + 488;
  *((_QWORD *)this + 61) = (char *)this + 488;
  return this;
}
