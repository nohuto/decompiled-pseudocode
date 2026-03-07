unsigned __int8 __fastcall DXGDEVICE::UmdManagesResidency(DXGDEVICE *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 1903)
    || *((_DWORD *)this + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2820LL) >= 2000 )
  {
    return 1;
  }
  return v1;
}
