BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *__fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::`scalar deleting destructor'(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
