__int64 InvalidateWEFCOMPOSITEDDCEs()
{
  __int64 *i; // rbx

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    if ( (i[8] & 0x4400800) == 0
      && i[2]
      && !(unsigned int)GreIsRendering(i[1])
      && (i[8] & 0x5000) == 0x5000
      && (*(_BYTE *)(*(_QWORD *)(i[4] + 40) + 27LL) & 2) != 0 )
    {
      FlushWEFCOMPOSITEDDCEBounds(i);
    }
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
