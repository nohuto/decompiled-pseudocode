__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax

  if ( a1 )
  {
    while ( 1 )
    {
      v1 = *(_QWORD *)(a1 + 104);
      if ( !v1 )
        break;
      v2 = *(_QWORD *)(a1 + 24);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 8);
        if ( v3 )
        {
          if ( v1 == *(_QWORD *)(v3 + 24) )
            return a1;
        }
      }
      a1 = *(_QWORD *)(a1 + 104);
    }
    return 0LL;
  }
  return a1;
}
