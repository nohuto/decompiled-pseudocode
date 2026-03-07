BamoImpl::BamoDataProviderProxyImpl *__fastcall BamoImpl::BamoDataProviderProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderProxyImpl *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
