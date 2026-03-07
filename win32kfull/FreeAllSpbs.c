__int64 FreeAllSpbs()
{
  __int64 result; // rax

  while ( 1 )
  {
    result = gpDispInfo;
    if ( !*(_QWORD *)(gpDispInfo + 32LL) )
      break;
    FreeSpb(*(char **)(gpDispInfo + 32LL));
  }
  *(_QWORD *)(gpDispInfo + 32LL) = 0LL;
  return result;
}
