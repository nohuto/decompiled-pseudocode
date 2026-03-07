char __fastcall DXGPROCESS::IsHighPriorityProcess(DXGPROCESS *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_DWORD *)this + 106) & 4) == 0 )
    return (*((_DWORD *)this + 108) & 1) != 0;
  return v1;
}
