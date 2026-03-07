Rim::RimBackedDeviceBase *__fastcall Rim::RimBackedDeviceBase::`vector deleting destructor'(
        Rim::RimBackedDeviceBase *this,
        char a2)
{
  *(_QWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  Rim::RimBackedDeviceBase::UnInitialize(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
