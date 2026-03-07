void __fastcall ADAPTER_DISPLAY::GetPairedRenderAdapter(ADAPTER_DISPLAY *this, DXGADAPTER **a2, struct _GUID *a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  DXGADAPTER_REFERENCE::Assign(a2, *((struct DXGADAPTER **)this + 31));
  if ( a3 )
    *a3 = *(struct _GUID *)((char *)this + 264);
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
