void __fastcall DXGPROCESS::SetWin32kInterface(DXGPROCESS *this, unsigned int (**a2)(void))
{
  if ( a2 )
    *((_DWORD *)this + 106) = (a2[27]() != 0 ? 4 : 0) | *((_DWORD *)this + 106) & 0xFFFFFFFB;
  *((_QWORD *)this + 11) = a2;
}
