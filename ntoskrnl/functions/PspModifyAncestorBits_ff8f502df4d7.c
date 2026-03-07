__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1288); i; i = *(_QWORD *)(i + 1288) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1536), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1536), result);
    }
  }
  return result;
}
