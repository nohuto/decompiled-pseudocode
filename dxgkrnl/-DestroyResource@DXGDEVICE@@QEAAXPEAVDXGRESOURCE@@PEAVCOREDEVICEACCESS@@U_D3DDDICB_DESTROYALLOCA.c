void __fastcall DXGDEVICE::DestroyResource(
        DXGDEVICE *this,
        struct DXGALLOCATION **a2,
        struct COREDEVICEACCESS *a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4)
{
  ADAPTER_RENDER *v8; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1782LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      1782LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ADAPTER_RENDER::FreeResourceHandleAndWaitForZeroReferences(v8, (struct DXGRESOURCE *)a2, a3);
  DXGDEVICE::DestroyAllocations(this, (struct DXGRESOURCE *)a2, 1, a2[3], a3, a4);
  DXGRESOURCE::~DXGRESOURCE((DXGRESOURCE *)a2);
  ExFreePoolWithTag(a2, 0);
}
