void __fastcall MULTISORTBLTORDER::~MULTISORTBLTORDER(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    Win32FreePool(v1);
}
