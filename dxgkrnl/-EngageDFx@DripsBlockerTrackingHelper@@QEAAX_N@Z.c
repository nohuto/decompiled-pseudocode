void __fastcall DripsBlockerTrackingHelper::EngageDFx(LARGE_INTEGER *this, char a2)
{
  unsigned int v3; // ebp
  char *v4; // rdi
  __int64 i; // rsi

  if ( !LOBYTE(this[37766].LowPart) )
  {
    if ( a2 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DripsBlockerTrackingHelper *)this);
      v3 = 0;
      v4 = (char *)&this[5].QuadPart + 4;
      do
      {
        if ( v4[60] )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)v4; i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)&v4[72 * i + 100] )
            {
              DripsBlockerTrackingHelper::EnableEntryAccounting((DripsBlockerTrackingHelper *)this, v3, i, 0);
              *(_DWORD *)&v4[72 * i + 100] = 0;
            }
          }
        }
        ++v3;
        v4 += 4720;
      }
      while ( v3 < 0x40 );
      DripsBlockerTrackingHelper::TimeInterval::Start(this + 37763);
    }
    else
    {
      DripsBlockerTrackingHelper::TimeInterval::Stop((DripsBlockerTrackingHelper::TimeInterval *)&this[37763]);
    }
  }
  DripsBlockerTrackingHelper::ResetDAM((DripsBlockerTrackingHelper *)this);
}
