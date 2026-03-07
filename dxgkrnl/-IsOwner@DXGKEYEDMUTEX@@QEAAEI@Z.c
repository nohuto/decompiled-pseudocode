bool __fastcall DXGKEYEDMUTEX::IsOwner(DXGKEYEDMUTEX *this, int a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)this + 14) && a2 && *((_DWORD *)this + 15) == a2 )
    return *((_QWORD *)this + 8) == (_QWORD)DXGPROCESS::GetCurrent();
  return v2;
}
