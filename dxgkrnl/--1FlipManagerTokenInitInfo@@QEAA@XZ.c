void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v4, a2);
}
