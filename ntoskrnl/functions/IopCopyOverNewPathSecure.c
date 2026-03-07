__int64 __fastcall IopCopyOverNewPathSecure(
        char *a1,
        const void *a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  unsigned int v5; // r12d
  char *v8; // rbx
  __int16 v9; // bp
  __int64 v10; // rax
  _WORD *v12; // rdx
  __int16 v13; // bp
  char *v14; // rcx

  v5 = a3;
  v8 = a1;
  v9 = 2;
  if ( a3 )
  {
    memmove(a1, a2, a3);
    v8 = &a1[2 * ((unsigned __int64)v5 >> 1)];
  }
  if ( a5 )
  {
    v10 = *(unsigned __int16 *)(a4 + 88);
    if ( a5 > (unsigned __int16)v10 )
      return 3221226112LL;
    v12 = (_WORD *)(*(_QWORD *)(a4 + 96) + v10 - a5);
    if ( v8 > a1 && *((_WORD *)v8 - 1) == 92 && *v12 == 92 )
    {
      v8 -= 2;
      v9 = 0;
    }
    memmove(v8, v12, a5);
    v8 += 2 * ((unsigned __int64)a5 >> 1);
  }
  v13 = a5 + v5 + v9;
  *(_WORD *)(a4 + 90) = v13;
  *(_WORD *)(a4 + 88) = v13 - 2;
  *(_WORD *)v8 = 0;
  v14 = *(char **)(a4 + 96);
  if ( a1 != v14 )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a4 + 96) = a1;
  }
  return 0LL;
}
