bool __fastcall CWindowBackgroundTreatment::HasValidSource(CWindowBackgroundTreatment *this)
{
  return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 56LL))(
           *((_QWORD *)this + 9),
           22LL)
      || *((_QWORD *)this + 10) != 0LL;
}
