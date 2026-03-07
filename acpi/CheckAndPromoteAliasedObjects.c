char __fastcall CheckAndPromoteAliasedObjects(__int16 *a1, __int64 a2, __int64 a3)
{
  char result; // al
  volatile signed __int32 *v4; // r9
  __int64 v5; // r10
  __int16 v6; // dx

  result = 0;
  v4 = 0LL;
  v5 = 2LL;
  do
  {
    v6 = *a1;
    if ( (*a1 & 1) != 0 && *((_QWORD *)a1 + 1) == a3 )
    {
      if ( result )
      {
        *((_QWORD *)a1 + 1) = v4;
        _InterlockedIncrement(v4 + 2);
      }
      else
      {
        result = 1;
        v4 = (volatile signed __int32 *)a1;
        *((_QWORD *)a1 + 1) = 0LL;
        *a1 = v6 & 0xFFFE;
      }
    }
    a1 += 20;
    --v5;
  }
  while ( v5 );
  return result;
}
