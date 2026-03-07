__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56, v3);
    a1[1] = 0LL;
  }
  return result;
}
