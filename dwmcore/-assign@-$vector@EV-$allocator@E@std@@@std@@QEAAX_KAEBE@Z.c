char *__fastcall std::vector<unsigned char>::assign(void **a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  char *v3; // rbx
  size_t v5; // rdi
  size_t v6; // rbp
  int v8; // edx
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  v6 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( a2 <= v6 )
  {
    v8 = *a3;
  }
  else
  {
    if ( a2 <= (_BYTE *)a1[2] - v3 )
    {
      memset_0(*a1, *a3, v6);
    }
    else
    {
      std::vector<unsigned char>::_Clear_and_reserve_geometric((__int64 *)a1, a2);
      v6 = 0LL;
    }
    v3 = (char *)a1[1];
    v5 -= v6;
    v8 = *a3;
  }
  memset_0(v3, v8, v5);
  result = &v3[v5];
  a1[1] = &v3[v5];
  return result;
}
