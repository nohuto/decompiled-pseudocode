_QWORD *__fastcall SmKmKeyGenKeyFind(__int64 a1, unsigned __int16 *a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax
  unsigned __int16 *v5; // rcx
  int v6; // r10d
  int v7; // edx

  v2 = (_QWORD *)(a1 + 8);
  for ( result = *(_QWORD **)(a1 + 8); result != v2; result = (_QWORD *)*result )
  {
    v5 = a2;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v5 + result[2] - (_QWORD)a2);
      v7 = *v5 - v6;
      if ( v7 )
        break;
      ++v5;
    }
    while ( v6 );
    if ( !v7 )
      return result;
  }
  return 0LL;
}
