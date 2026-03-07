BamoImpl::BamoDataProviderRegistrarStubImpl *__fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
