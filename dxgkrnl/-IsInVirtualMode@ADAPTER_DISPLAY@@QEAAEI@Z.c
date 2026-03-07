unsigned __int8 __fastcall ADAPTER_DISPLAY::IsInVirtualMode(ADAPTER_DISPLAY *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax

  v4 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  while ( 1 )
  {
    if ( ((a2 + 3) & 0xFFFFFFFD) == 0 || v4 == a2 )
    {
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(this, v4, a3, a4);
      if ( SessionViewOwner )
      {
        if ( *((_DWORD *)SessionViewOwner + 10) > 1u || !ADAPTER_DISPLAY::IsIdenticalMode(this, v4) )
          break;
      }
    }
    if ( ++v4 >= *((_DWORD *)this + 24) )
      return 0;
  }
  return 1;
}
