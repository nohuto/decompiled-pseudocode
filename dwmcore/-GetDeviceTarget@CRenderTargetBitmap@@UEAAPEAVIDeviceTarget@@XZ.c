struct IDeviceTarget *__fastcall CRenderTargetBitmap::GetDeviceTarget(CRenderTargetBitmap *this)
{
  return (struct IDeviceTarget *)*((_QWORD *)this + 2);
}
