size_t __fastcall SymCryptHashAppendInternal(__int64 a1, unsigned int *a2, char *a3, size_t a4)
{
  size_t v4; // rdi
  char *v5; // r14
  __int64 v8; // rsi
  size_t v9; // r15
  size_t result; // rax
  size_t v11; // rax
  size_t v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = a4;
  *((_QWORD *)a2 + 2) += a4;
  v5 = a3;
  if ( *((_QWORD *)a2 + 2) < a4 )
    ++*((_QWORD *)a2 + 3);
  v8 = *a2;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(*(_DWORD *)(a1 + 40) - v8);
    if ( a4 >= v9 )
    {
      memmove((char *)a2 + v8 + 32, a3, (unsigned int)v9);
      v5 += v9;
      v4 -= v9;
      (*(void (__fastcall **)(char *, unsigned int *, _QWORD, size_t *))(a1 + 24))(
        (char *)a2 + *(unsigned int *)(a1 + 44),
        a2 + 8,
        *(unsigned int *)(a1 + 40),
        &v12);
      LODWORD(v8) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 40);
  if ( v4 >= result )
  {
    (*(void (__fastcall **)(char *, char *, size_t, size_t *))(a1 + 24))(
      (char *)a2 + *(unsigned int *)(a1 + 44),
      v5,
      v4,
      &v12);
    v11 = v4;
    v4 = v12;
    result = v11 - v12;
    v5 += result;
  }
  if ( v4 )
  {
    result = (size_t)memmove((char *)a2 + (unsigned int)v8 + 32, v5, v4);
    LODWORD(v8) = v4 + v8;
  }
  *a2 = v8;
  return result;
}
