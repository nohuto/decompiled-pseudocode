void __fastcall IopCopyOverNewPath(char *a1, const void *a2, unsigned __int16 a3, __int64 a4, unsigned __int16 a5)
{
  unsigned int v5; // r12d
  char *v8; // rbx
  __int16 v9; // si
  _WORD *v10; // rdx
  __int16 v11; // si
  char *v12; // rcx

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
    v10 = (_WORD *)(*(_QWORD *)(a4 + 96) + *(unsigned __int16 *)(a4 + 88) - (unsigned __int64)a5);
    if ( v8 > a1 && *((_WORD *)v8 - 1) == 92 && *v10 == 92 )
    {
      v8 -= 2;
      v9 = 0;
    }
    memmove(v8, v10, a5);
    v8 += 2 * ((unsigned __int64)a5 >> 1);
  }
  v11 = a5 + v5 + v9;
  *(_WORD *)(a4 + 90) = v11;
  *(_WORD *)(a4 + 88) = v11 - 2;
  *(_WORD *)v8 = 0;
  v12 = *(char **)(a4 + 96);
  if ( a1 != v12 )
  {
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a4 + 96) = a1;
  }
}
