__int64 __fastcall CCaptureRenderTarget::ProcessSetAdapterLUID(
        CD3DDevice **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID *a3)
{
  CD3DDevice *v5; // rcx

  if ( *((_DWORD *)this + 470) != *((_DWORD *)a3 + 2) || *((_DWORD *)this + 471) != *((_DWORD *)a3 + 3) )
  {
    CCaptureRenderTarget::ReleaseRenderingResources((CCaptureRenderTarget *)this);
    this[235] = (CD3DDevice *)*((_QWORD *)a3 + 1);
    v5 = this[234];
    this[234] = 0LL;
    if ( v5 )
      CD3DDevice::Release(v5);
  }
  return 0LL;
}
