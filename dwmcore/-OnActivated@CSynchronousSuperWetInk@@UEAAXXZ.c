void __fastcall CSynchronousSuperWetInk::OnActivated(CSynchronousSuperWetInk *this, __int64 a2)
{
  if ( *((_DWORD *)this + 43) != 2 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 23) + 104LL) + 384LL))(
      *(_QWORD *)(*((_QWORD *)this + 23) + 104LL),
      a2);
  }
  *((_BYTE *)this + 96) = 0;
}
