DataProviderRegistrarConnection *__fastcall DataProviderRegistrarConnection::`vector deleting destructor'(
        DataProviderRegistrarConnection *this,
        char a2)
{
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)this = &DataProviderRegistrarConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DataProviderRegistrarConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
