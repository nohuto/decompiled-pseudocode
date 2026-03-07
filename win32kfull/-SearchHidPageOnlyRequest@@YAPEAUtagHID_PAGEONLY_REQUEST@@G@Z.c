struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidPageOnlyRequest(__int64 a1)
{
  __int16 v1; // di
  __int64 v2; // rcx
  __int64 *i; // rbx

  v1 = a1;
  for ( i = *(__int64 **)(SGDGetUserSessionState(a1) + 392); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(SGDGetUserSessionState(v2) + 392) )
      return 0LL;
    if ( *((_WORD *)i + 8) == v1 )
      break;
  }
  return (struct tagHID_PAGEONLY_REQUEST *)i;
}
