struct tagDIBDATA *__fastcall CImageSample::GetDIBData(CImageSample *this)
{
  return (CImageSample *)((char *)this + 96);
}
