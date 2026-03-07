HWND __fastcall CInputDest::GetWindowHandle(CInputDest *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = 0LL;
  if ( (*(_DWORD *)this & 4) != 0 )
  {
    if ( *((_DWORD *)this + 23) == 1 || *((_DWORD *)this + 23) == 2 )
    {
      v2 = *((_QWORD *)this + 10);
      if ( v2 )
        return *(HWND *)v2;
    }
  }
  else if ( (*(_DWORD *)this & 2) != 0 )
  {
    return (HWND)*((_QWORD *)this + 3);
  }
  return (HWND)v1;
}
