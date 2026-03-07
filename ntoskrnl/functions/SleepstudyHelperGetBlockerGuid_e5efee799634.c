__int64 __fastcall SleepstudyHelperGetBlockerGuid(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 3221225485LL;
  if ( a1 )
  {
    if ( a2 )
    {
      result = 0LL;
      *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 296) + 64LL);
    }
  }
  return result;
}
