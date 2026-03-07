char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char v1; // dl

  v1 = 1;
  if ( *((int *)this + 96) >= 3 && !*((_BYTE *)this + 625) )
    return *((_BYTE *)this + 626) != 0;
  return v1;
}
