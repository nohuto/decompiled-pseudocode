void __fastcall CSynchronousSuperWetInk::OnDeactivated(CSynchronousSuperWetInk *this)
{
  __int64 v1; // rcx

  if ( *((_DWORD *)this + 43) != 2 )
  {
    v1 = *((_QWORD *)this + 23);
    if ( v1 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 104) + 384LL))(*(_QWORD *)(v1 + 104), 0LL);
  }
}
