void __fastcall DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS(DXGPROCESSSHAREDACCESS *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 4);
  if ( v1 )
    ObfDereferenceObject(v1);
}
