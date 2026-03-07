Microsoft::BamoImpl::BufferingMessageCallHost *__fastcall Microsoft::BamoImpl::BufferingMessageCallHost::`scalar deleting destructor'(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        char a2)
{
  Microsoft::BamoImpl::BufferingMessageCallHost::~BufferingMessageCallHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
