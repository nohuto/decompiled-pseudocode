__int64 *__fastcall vXSortAETEdges(__int64 ***a1)
{
  __int64 **v1; // rdx
  int v2; // r9d
  __int64 ***v3; // r10
  __int64 **v4; // r8
  __int64 *result; // rax

  do
  {
    v1 = *a1;
    v2 = 0;
    v3 = a1;
    v4 = (__int64 **)**a1;
    do
    {
      result = (__int64 *)*((unsigned int *)v1 + 3);
      if ( *((_DWORD *)v4 + 3) < (int)result )
      {
        *v3 = v4;
        v2 = 1;
        result = *v4;
        *v1 = *v4;
        *v4 = (__int64 *)v1;
        v1 = v4;
      }
      v3 = (__int64 ***)v1;
      v1 = (__int64 **)*v1;
      v4 = (__int64 **)*v1;
    }
    while ( *v1 != (__int64 *)a1 );
  }
  while ( v2 );
  return result;
}
