void __fastcall DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(ReferenceCounted **this)
{
  bool v2; // zf
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (struct DXGFASTMUTEX *const)(this + 2378), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(this + 2385, 0LL);
  ++*((_DWORD *)this + 4768);
  v2 = v3[8] == 0;
  *((_DWORD *)this + 4769) = *((_DWORD *)this + 4768);
  if ( !v2 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
