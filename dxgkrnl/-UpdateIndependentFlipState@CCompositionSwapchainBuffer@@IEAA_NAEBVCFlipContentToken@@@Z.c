char __fastcall CCompositionSwapchainBuffer::UpdateIndependentFlipState(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  char v3; // bl

  v2 = *((_DWORD *)this + 96);
  v3 = 0;
  if ( v2 == -1 )
    return 1;
  if ( v2 == 1 )
  {
    if ( *((_BYTE *)a2 + 290) )
    {
      *((_DWORD *)this + 96) = -1;
    }
    else
    {
      if ( !*((_BYTE *)a2 + 289) || *((_QWORD *)a2 + 39) != *((_QWORD *)this + 67) )
        return v3;
      *((_DWORD *)this + 96) = 2;
    }
    return 1;
  }
  if ( v2 != 3 && v2 != 4 )
    return v3;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) )
  {
    *((_DWORD *)this + 96) = -1;
    return 1;
  }
  *((_DWORD *)this + 96) = 4;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2)
    || *((_BYTE *)a2 + 291)
    || (*(unsigned __int8 (__fastcall **)(CCompositionSwapchainBuffer *))(*(_QWORD *)this + 200LL))(this) )
  {
    return 1;
  }
  return v3;
}
