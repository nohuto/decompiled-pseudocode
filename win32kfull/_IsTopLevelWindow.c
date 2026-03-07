_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  result = 0;
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( v1 == *(_QWORD *)(v3 + 24) )
          return 1;
      }
    }
  }
  return result;
}
