void *__fastcall CHolographicClient::GetExclusiveSurfaceUpdateEvent(CHolographicClient *this)
{
  if ( *((_QWORD *)this + 23) )
    return (void *)*((_QWORD *)this + 30);
  else
    return 0LL;
}
