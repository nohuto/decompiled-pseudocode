char __fastcall CFlipExBuffer::UpdateIndependentFlipState(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  int v2; // eax
  char v3; // bl
  int v6; // ebp

  v2 = *((_DWORD *)this + 96);
  v3 = 0;
  if ( v2 == -1 )
    return 1;
  if ( v2 == 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 176LL))(a2) )
    {
      *((_DWORD *)this + 96) = -1;
    }
    else
    {
      if ( !*((_BYTE *)a2 + 561) || *((_QWORD *)a2 + 72) != *((_QWORD *)this + 67) )
        return v3;
      *((_DWORD *)this + 96) = 2;
    }
    return 1;
  }
  v6 = 4;
  if ( v2 == 3 || v2 == 4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) )
    {
      v3 = *((_BYTE *)this + 625);
    }
    else
    {
      v3 = 1;
      v6 = -1;
    }
    *((_DWORD *)this + 96) = v6;
  }
  return v3;
}
