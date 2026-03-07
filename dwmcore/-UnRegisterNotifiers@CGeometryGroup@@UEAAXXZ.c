void __fastcall CGeometryGroup::UnRegisterNotifiers(CGeometryGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 22);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 42));
    operator delete(*((void **)this + 22));
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
}
