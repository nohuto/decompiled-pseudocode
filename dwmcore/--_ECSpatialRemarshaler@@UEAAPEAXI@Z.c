CSpatialRemarshaler *__fastcall CSpatialRemarshaler::`vector deleting destructor'(CSpatialRemarshaler *this, char a2)
{
  *((_QWORD *)this + 9) = &CSpatialRemarshaler::`vftable'{for `ISceneNotificationListener'};
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
