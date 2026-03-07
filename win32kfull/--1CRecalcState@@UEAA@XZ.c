void __fastcall CRecalcState::~CRecalcState(CRecalcState *this)
{
  void *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CRecalcState::`vftable';
  v2 = (void *)*((_QWORD *)this + 2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    Win32FreePool(v2);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 1);
  if ( v3 )
    (**v3)(v3, 1LL);
}
