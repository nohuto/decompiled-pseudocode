struct D2D_SIZE_U __fastcall CVirtualMonitorCaptureRenderTarget::GetSize(
        CVirtualMonitorCaptureRenderTarget *this,
        _DWORD *a2)
{
  *a2 = *((_DWORD *)this - 21);
  a2[1] = *((_DWORD *)this - 20);
  return (struct D2D_SIZE_U)a2;
}
