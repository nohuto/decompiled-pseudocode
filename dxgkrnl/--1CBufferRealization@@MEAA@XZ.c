void __fastcall CBufferRealization::~CBufferRealization(CBufferRealization *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CBufferRealization::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
  if ( v2 )
    (**v2)(v2);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
}
