__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, ULONG a3, __int64 a4, __int64 a5)
{
  ULONG v6; // r10d
  const WCHAR *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG pulResult; // [rsp+70h] [rbp+18h] BYREF

  pulResult = a3;
  v6 = a3;
  v7 = a2;
  DestinationString = 0LL;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return (*(__int64 (__fastcall **)(_QWORD, UNICODE_STRING *, __int64, _QWORD))(a5 + 8))(
               *(_QWORD *)a5,
               &DestinationString,
               a4,
               *(_QWORD *)(a5 + 16));
    }
    else if ( *a2 )
    {
      v9 = a5;
      while ( 1 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v7[v10] );
        v11 = v10 + 1;
        if ( RtlULongSub(v6, 2 * v11, &pulResult) < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v7);
        result = (*(__int64 (__fastcall **)(_QWORD, UNICODE_STRING *, __int64, _QWORD))(v9 + 8))(
                   *(_QWORD *)v9,
                   &DestinationString,
                   a4,
                   *(_QWORD *)(v9 + 16));
        if ( (int)result >= 0 )
        {
          v6 = pulResult;
          if ( pulResult >= 2 )
          {
            v7 += v11;
            if ( *v7 )
              continue;
          }
        }
        return result;
      }
      return 0LL;
    }
  }
  return result;
}
