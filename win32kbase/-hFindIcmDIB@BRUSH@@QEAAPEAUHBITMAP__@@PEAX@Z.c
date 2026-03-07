HBITMAP __fastcall BRUSH::hFindIcmDIB(BRUSH *this, void *a2)
{
  __int64 v5; // rdi
  __int64 i; // rbx

  if ( !a2 )
    return (HBITMAP)*((_QWORD *)this + 3);
  v5 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 144));
  for ( i = *((_QWORD *)this + 11); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
    {
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 144));
      return 0LL;
    }
    if ( *(void **)i == a2 )
      break;
  }
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 144));
  return *(HBITMAP *)(i + 8);
}
