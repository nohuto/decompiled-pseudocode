__int64 *__fastcall SearchHidTLCInfo(__int64 a1, __int16 a2)
{
  __int16 v3; // si
  __int64 v4; // rcx
  __int64 *i; // rbx

  v3 = a1;
  for ( i = *(__int64 **)(SGDGetUserSessionState(a1) + 376); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(SGDGetUserSessionState(v4) + 376) )
      return 0LL;
    if ( *((_WORD *)i + 8) == v3 && *((_WORD *)i + 9) == a2 )
      break;
  }
  return i;
}
