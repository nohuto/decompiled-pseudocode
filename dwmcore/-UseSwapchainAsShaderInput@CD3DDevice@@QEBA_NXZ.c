char __fastcall CD3DDevice::UseSwapchainAsShaderInput(CD3DDevice *this)
{
  char v1; // dl
  int v3; // eax

  v1 = 0;
  if ( *((int *)this + 146) >= 40960 )
    return 1;
  v3 = *((_DWORD *)this + 214);
  if ( v3 == 1297040209 )
  {
    if ( *((int *)this + 147) < 1200 )
      return v1;
    return 1;
  }
  if ( v3 == 1230128470 )
    return *((_DWORD *)this + 215) == 808464439;
  return v1;
}
