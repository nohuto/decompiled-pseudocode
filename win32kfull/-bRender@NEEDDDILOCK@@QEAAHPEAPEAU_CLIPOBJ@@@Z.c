BOOL __fastcall NEEDDDILOCK::bRender(NEEDDDILOCK *this, struct _CLIPOBJ **a2)
{
  __int64 v2; // rcx
  BOOL result; // eax

  v2 = *(_QWORD *)this;
  result = 1;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 100) == 1 )
      return EngUpdateDeviceSurface((SURFOBJ *)(v2 + 24), a2);
  }
  return result;
}
