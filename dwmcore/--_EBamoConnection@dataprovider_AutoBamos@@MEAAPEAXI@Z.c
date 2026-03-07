dataprovider_AutoBamos::BamoConnection *__fastcall dataprovider_AutoBamos::BamoConnection::`vector deleting destructor'(
        dataprovider_AutoBamos::BamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((dataprovider_AutoBamos::BamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
