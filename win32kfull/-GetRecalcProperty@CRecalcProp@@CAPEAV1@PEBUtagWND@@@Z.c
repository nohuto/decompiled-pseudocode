struct CRecalcProp *__fastcall CRecalcProp::GetRecalcProperty(const struct tagWND *a1)
{
  if ( (*((_DWORD *)a1 + 80) & 0x80u) != 0 )
    return (struct CRecalcProp *)GetProp((__int64)a1, CRecalcProp::s_atom, 1u);
  else
    return 0LL;
}
