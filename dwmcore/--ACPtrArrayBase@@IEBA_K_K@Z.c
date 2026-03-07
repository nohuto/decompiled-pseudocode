unsigned __int64 *__fastcall CPtrArrayBase::operator[](__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 *result; // rax

  v2 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    result = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v3 = *result;
  }
  else
  {
    v3 = *a1 & 1;
    result = (unsigned __int64 *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( a2 >= v3 )
    return 0LL;
  if ( v3 != 1 )
    return (unsigned __int64 *)result[a2 + 2];
  return result;
}
