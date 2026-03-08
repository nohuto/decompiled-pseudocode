/*
 * XREFs of ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02FFA84
 * Callers:
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02E1A30 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C0221E86 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FE7F0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C02FF9E8 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C0302A5C (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0302ABC (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

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
