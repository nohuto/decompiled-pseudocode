void __fastcall ADAPTER_RENDER::DisableOverlays(ADAPTER_RENDER *this)
{
  __int64 i; // rbx
  DXGOVERLAY *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (ADAPTER_RENDER *)((char *)this + 856), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 2) + 2260LL); i = (unsigned int)(i + 1) )
  {
    v3 = (DXGOVERLAY *)*((_QWORD *)this + i + 103);
    if ( v3 )
      DXGOVERLAY::Destroy(v3);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
