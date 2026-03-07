VIDMM_DEVICE *__fastcall VidMmCreateDevice(struct VIDMM_GLOBAL *a1, struct DXGDEVICE *a2)
{
  VIDMM_DEVICE *v4; // rcx
  VIDMM_DEVICE *result; // rax

  v4 = (VIDMM_DEVICE *)operator new(320LL, 0x38306956u, 64LL);
  result = 0LL;
  if ( v4 )
    return VIDMM_DEVICE::VIDMM_DEVICE(v4, a1, a2);
  return result;
}
