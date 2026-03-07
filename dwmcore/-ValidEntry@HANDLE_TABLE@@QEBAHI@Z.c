bool __fastcall HANDLE_TABLE::ValidEntry(HANDLE_TABLE *this, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
  {
    if ( a2 < *((_DWORD *)this + 3) )
      return *(_DWORD *)(*((_DWORD *)this + 2) * a2 + *((_QWORD *)this + 3)) != 0;
  }
  return result;
}
