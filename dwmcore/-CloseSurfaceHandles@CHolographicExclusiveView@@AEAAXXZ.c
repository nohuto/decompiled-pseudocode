void __fastcall CHolographicExclusiveView::CloseSurfaceHandles(HANDLE *this)
{
  __int64 i; // rsi

  if ( *((_BYTE *)this + 81) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      CloseHandle(this[i + 20]);
      this[i + 20] = 0LL;
    }
    *((_DWORD *)this + 38) = 0;
    *((_BYTE *)this + 81) = 0;
  }
}
