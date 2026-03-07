void __fastcall Io::DeviceObjectPointer::~DeviceObjectPointer(Io::DeviceObjectPointer *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    ZwClose(*(HANDLE *)this);
}
