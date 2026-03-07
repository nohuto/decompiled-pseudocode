void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::~DXG_HOST_REMOTEOBJECTCHANNEL(DXG_HOST_REMOTEOBJECTCHANNEL *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
}
