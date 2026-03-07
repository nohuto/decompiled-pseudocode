void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this, unsigned int a2)
{
  bool v2; // zf
  struct _ERESOURCE *v4; // rcx
  void *v5; // rdx

  v2 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v2 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5), a2);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    v5 = (void *)*((_QWORD *)this + 4);
    if ( v5 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
}
