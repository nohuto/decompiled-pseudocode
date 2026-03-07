void __fastcall InteractiveControlInput::~InteractiveControlInput(InteractiveControlInput *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
}
