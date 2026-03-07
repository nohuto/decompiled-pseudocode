__int64 __fastcall DirectComposition::CConnection::ReclaimSessionGlobalConnection(
        struct DirectComposition::CConnection **a1)
{
  struct _ERESOURCE *v1; // rsi
  unsigned int v2; // ebx

  v1 = DirectComposition::CConnection::s_pSessionConnectionLock;
  v2 = 0;
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v1, 1u);
    if ( DirectComposition::CConnection::s_pSessionConnection )
    {
      if ( *((_DWORD *)DirectComposition::CConnection::s_pSessionConnection + 37) )
      {
        v2 = -1073741790;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        *a1 = DirectComposition::CConnection::s_pSessionConnection;
      }
    }
    else
    {
      *a1 = 0LL;
    }
    ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
