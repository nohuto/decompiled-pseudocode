void __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::~DXG_HOST_COMPOSITIONOBJECTCHANNEL(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
