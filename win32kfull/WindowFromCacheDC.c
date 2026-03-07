__int64 __fastcall WindowFromCacheDC(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 **i; // rdx

  v2 = 0LL;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 ***)(gpDispInfo + 24LL); i; i = (__int64 **)*i )
  {
    if ( i[1] == a1 )
    {
      if ( ((_DWORD)i[8] & 0x400000) == 0 )
        v2 = (__int64)i[2];
      break;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v2;
}
