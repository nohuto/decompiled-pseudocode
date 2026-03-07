void __fastcall CD3DDevice::Trim(CD3DDevice *this)
{
  char *v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = (char *)this + 464;
  v2 = 0LL;
  if ( *((_DWORD *)this + 122) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)v1 + 8 * v2);
      *(_BYTE *)(v6 + 176) = 0;
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)v1 + 6) );
  }
  *((_DWORD *)v1 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v1, 8LL);
  CD2DContext::ReleaseCachedD2DTarget((CD3DDevice *)((char *)this + 16));
  CD3DResourceManager::DestroyReleasedResources((CD3DDevice *)((char *)this + 1104));
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 880LL))(v4);
  v5 = *((_QWORD *)this + 67);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 136LL))(v5);
  *((_BYTE *)this + 1508) = 0;
}
