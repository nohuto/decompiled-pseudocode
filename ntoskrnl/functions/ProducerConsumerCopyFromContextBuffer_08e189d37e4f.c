void *__fastcall ProducerConsumerCopyFromContextBuffer(char *a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v4; // r11
  unsigned int v5; // r10d
  unsigned int v6; // ebx
  __int64 v9; // rdi
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v5 = (_DWORD)a4 - *(_DWORD *)a3;
  v6 = 0;
  if ( v5 >= (unsigned int)v4 )
  {
    v5 -= v4;
    a4 -= v4;
  }
  if ( v5 + a2 > (unsigned int)v4 )
  {
    v6 = a2 + v5 - v4;
    a2 = v4 - v5;
  }
  v9 = a2;
  result = memmove(a1, a4, a2);
  if ( v6 )
    return memmove(&a1[v9], *(const void **)a3, v6);
  return result;
}
