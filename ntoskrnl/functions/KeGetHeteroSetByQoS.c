__int64 __fastcall KeGetHeteroSetByQoS(__int64 a1, unsigned int a2, int a3, void *a4, void *a5, void *a6)
{
  size_t v8; // rbx
  __int64 result; // rax
  int i; // r10d
  int j; // r9d
  unsigned int k; // r11d
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx

  v8 = (unsigned int)(8 * a3);
  memset(a4, 0, v8);
  memset(a5, 0, (unsigned int)v8);
  memset(a6, 0, (unsigned int)v8);
  result = *(unsigned __int8 *)(a1 + 185);
  if ( a2 >= (unsigned int)result )
    a2 = *(unsigned __int8 *)(a1 + 185);
  for ( i = 0; i < 7; ++i )
  {
    for ( j = 0; j < 2; ++j )
    {
      for ( k = 0; k < a2; *((_QWORD *)a6 + v17) = result )
      {
        v14 = *(_QWORD *)(a1 + 192);
        v15 = 3LL * (k + (j + 2 * i) * *(unsigned __int8 *)(a1 + 185));
        v16 = 7 * k++;
        v17 = (unsigned int)(j + 2 * (i + v16));
        *((_QWORD *)a4 + v17) = *(_QWORD *)(v14 + 8 * v15 + 16);
        *((_QWORD *)a5 + v17) = *(_QWORD *)(v14 + 8 * v15);
        result = *(_QWORD *)(v14 + 8 * v15 + 8);
      }
    }
  }
  return result;
}
