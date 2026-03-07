int __fastcall CFlipExBuffer::SetIndependentFlip(
        CFlipExBuffer *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        int *a7)
{
  int result; // eax
  int v10; // ecx
  char v11; // si

  result = 0;
  *a7 = 0;
  v10 = *((_DWORD *)this + 96);
  if ( !a2 )
  {
    if ( v10 )
      return CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, a7);
    return result;
  }
  v11 = *((_BYTE *)this + 625);
  if ( !v10 )
  {
    if ( *((_BYTE *)this + 40) )
      result = CFlipExBuffer::EnableDxgkrnlIndependentFlipMode(this, a4, a5, a6, a7);
    else
      result = -1073741823;
    *((_BYTE *)this + 625) = a3;
LABEL_15:
    if ( !a3 )
      *((_BYTE *)this + 626) = 1;
    return result;
  }
  if ( *((_DWORD *)this + 155) != a4 )
  {
    if ( v10 >= 1 && *((_BYTE *)this + 40) )
      result = CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(this, a4, a5, a6, a7);
    else
      result = -1073741823;
  }
  *((_BYTE *)this + 625) = a3;
  if ( v11 )
    goto LABEL_15;
  return result;
}
