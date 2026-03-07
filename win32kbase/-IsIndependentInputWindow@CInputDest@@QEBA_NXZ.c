char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  __int64 v3; // rcx
  int v4; // ecx
  bool v5; // al

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    if ( *((_DWORD *)this + 23) == 2 && (v3 = *((_QWORD *)this + 10)) != 0 )
    {
      if ( qword_1C02D7650 )
        v4 = qword_1C02D7650(v3);
      else
        v4 = 0;
      v5 = v4 != 0;
    }
    else
    {
      v5 = 0;
    }
    if ( v5 )
      return 1;
  }
  return v2;
}
