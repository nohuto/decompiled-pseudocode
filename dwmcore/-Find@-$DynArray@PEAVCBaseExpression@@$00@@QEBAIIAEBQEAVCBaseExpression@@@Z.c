__int64 __fastcall DynArray<CBaseExpression *,1>::Find(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // edx
  __int64 result; // rax
  __int64 v5; // r8

  v3 = *(_DWORD *)(a1 + 24);
  result = 0LL;
  if ( v3 )
  {
    v5 = *a3;
    do
    {
      if ( v5 == *(_QWORD *)(*(_QWORD *)a1 + 8 * result) )
        break;
      result = (unsigned int)(result + 1);
    }
    while ( (unsigned int)result < v3 );
  }
  return result;
}
