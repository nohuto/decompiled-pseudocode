void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *ObjectA; // rdi
  PERESOURCE *v6; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (AUTOEXPANDALLOCATION *)*((_QWORD *)a2 + 2);
  if ( v2 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v2);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  if ( *((_DWORD *)a2 + 7) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, *((_DWORD *)a2 + 7), 8);
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    if ( ObjectA )
    {
      v6 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(v6, ObjectA, 0);
    }
    *((_DWORD *)a2 + 7) = 0;
  }
}
