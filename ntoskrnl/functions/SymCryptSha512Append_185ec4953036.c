__int64 __fastcall SymCryptSha512Append(unsigned int *a1, char *a2, size_t a3)
{
  size_t v3; // rdi
  char *v4; // rbp
  __int64 v6; // rsi
  size_t v7; // r14
  __int64 result; // rax
  size_t v9; // rax
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = a3;
  *((_QWORD *)a1 + 2) += a3;
  v4 = a2;
  if ( *((_QWORD *)a1 + 2) < a3 )
    ++*((_QWORD *)a1 + 3);
  v6 = *a1;
  if ( (_DWORD)v6 )
  {
    v7 = (unsigned int)(128 - v6);
    if ( a3 >= v7 )
    {
      memmove((char *)a1 + v6 + 32, a2, (unsigned int)v7);
      v4 += v7;
      v3 -= v7;
      result = SymCryptSha512AppendBlocks_ull(a1 + 40, a1 + 8, 128LL, &v10);
      LODWORD(v6) = 0;
    }
  }
  if ( v3 >= 0x80 )
  {
    SymCryptSha512AppendBlocks_ull(a1 + 40, v4, v3, &v10);
    v9 = v3;
    v3 = v10;
    result = v9 - v10;
    v4 += result;
  }
  if ( v3 )
  {
    result = (__int64)memmove((char *)a1 + (unsigned int)v6 + 32, v4, v3);
    LODWORD(v6) = v3 + v6;
  }
  *a1 = v6;
  return result;
}
