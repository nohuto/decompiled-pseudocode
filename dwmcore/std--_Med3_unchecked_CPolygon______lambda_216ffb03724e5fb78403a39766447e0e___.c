__int64 __fastcall std::_Med3_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 result; // rax

  v4 = *a2;
  if ( *(_DWORD *)(*a2 + 264) < *(_DWORD *)(*a1 + 264) )
  {
    *a2 = *a1;
    *a1 = v4;
  }
  v5 = *a3;
  result = *(unsigned int *)(*a2 + 264);
  if ( *(_DWORD *)(v5 + 264) < (unsigned int)result )
  {
    *a3 = *a2;
    *a2 = v5;
    result = *(unsigned int *)(*a1 + 264);
    if ( *(_DWORD *)(v5 + 264) < (unsigned int)result )
    {
      *a2 = *a1;
      *a1 = v5;
    }
  }
  return result;
}
