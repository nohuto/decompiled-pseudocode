__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 *i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  return result;
}
