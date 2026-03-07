__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax

  v4 = *((_QWORD *)this + 13);
  v5 = -1073741823;
  if ( v4 )
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  if ( !*((_QWORD *)this + 13) || v5 == -1073741637 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
    {
      v5 = -1073741823;
      if ( *((_BYTE *)ActiveBuffer + 42) )
      {
        v5 = 0;
        *(_OWORD *)a2 = *((_OWORD *)ActiveBuffer + 12);
        *((_OWORD *)a2 + 1) = *((_OWORD *)ActiveBuffer + 13);
        *((_OWORD *)a2 + 2) = *((_OWORD *)ActiveBuffer + 14);
        *((_OWORD *)a2 + 3) = *((_OWORD *)ActiveBuffer + 15);
      }
    }
  }
  if ( v5 < 0 )
    memset(a2, 0, 0x40uLL);
  return (unsigned int)v5;
}
