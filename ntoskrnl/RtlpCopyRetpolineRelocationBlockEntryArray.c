_DWORD *__fastcall RtlpCopyRetpolineRelocationBlockEntryArray(
        char *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  int v8; // r15d
  _WORD *v9; // rbx
  char *v10; // rdi
  size_t v11; // rsi
  _DWORD *result; // rax

  v6 = (unsigned __int64)a3 + a4;
  v7 = a2;
  v8 = (int)a1;
  v9 = a3;
  v10 = a1;
  if ( (unsigned __int64)a3 < v6 )
  {
    v11 = (unsigned int)RtlSizeOfRetpolineRelocationEntry(a2);
    do
    {
      if ( v7 != 3 && v7 != 4 && v7 != 5 || (*v9 & 0xFFF) != 0 || v9 == a3 )
      {
        memmove(v10, v9, v11);
        v10 += v11;
      }
      v9 = (_WORD *)((char *)v9 + v11);
    }
    while ( (unsigned __int64)v9 < v6 );
  }
  result = a5;
  *a5 = (_DWORD)v10 - v8;
  return result;
}
