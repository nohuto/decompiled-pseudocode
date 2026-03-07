void *__fastcall ViInitializePadding(void *a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v9; // r8

  HIBYTE(v4) = 0;
  v5 = a2;
  v6 = a4;
  if ( !a4 )
    return memset(a1, 15, a2);
  memset(a1, 15, a3 - (_QWORD)a1);
  memset((void *)(a3 + v6), 15, (size_t)a1 + (unsigned int)v5 - (a3 + v6));
  LOBYTE(v4) = (unsigned __int64)a1 + 8 <= a3;
  v9 = v4;
  LOWORD(v9) = v4 | 2;
  if ( a3 + v6 - (unsigned __int64)a1 + 8 > v5 )
    LOWORD(v9) = v4;
  return (void *)ViTagBuffer(a3, (unsigned int)v6, v9);
}
