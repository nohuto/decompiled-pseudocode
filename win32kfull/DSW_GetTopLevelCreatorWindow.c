__int64 __fastcall DSW_GetTopLevelCreatorWindow(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 120); i; i = *(_QWORD *)(i + 120) )
      a1 = i;
  }
  return a1;
}
