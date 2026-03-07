void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  struct DXGGLOBAL *Global; // rax

  if ( *((_BYTE *)this + 200) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else if ( *(_QWORD *)this )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Global + 38069) + 16LL))(*(_QWORD *)this);
  }
}
