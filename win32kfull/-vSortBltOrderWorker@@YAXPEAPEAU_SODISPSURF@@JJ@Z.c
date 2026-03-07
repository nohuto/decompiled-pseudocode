void __fastcall vSortBltOrderWorker(struct _SODISPSURF **a1, int a2, int a3)
{
  struct _SODISPSURF *v3; // rbx
  int v4; // r9d
  int v5; // r8d
  struct _SODISPSURF **i; // r14
  struct _SODISPSURF *v8; // r15
  int v9; // esi
  struct _SODISPSURF *v10; // rbp
  struct _SODISPSURF *v11; // rdi
  struct _SODISPSURF *v12; // rax

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  for ( i = 0LL; ; i = (struct _SODISPSURF **)v12 )
  {
    v11 = *(struct _SODISPSURF **)v3;
    if ( !*(_QWORD *)v3 )
      break;
    v8 = v3;
    v9 = 0;
    do
    {
      if ( v9 )
        break;
      v10 = *(struct _SODISPSURF **)v11;
      if ( isSorted(v3, v11, v5, v4) )
      {
        v8 = v11;
        v11 = v10;
      }
      else
      {
        if ( v3 == v8 )
        {
          *(_QWORD *)v11 = v3;
        }
        else
        {
          *(_QWORD *)v11 = *(_QWORD *)v3;
          *(_QWORD *)v8 = v3;
        }
        *(_QWORD *)v3 = v10;
        if ( i )
          *i = v11;
        else
          *a1 = v11;
        v3 = v11;
        v9 = 1;
      }
    }
    while ( v11 );
    v12 = v3;
    if ( v9 )
      v12 = (struct _SODISPSURF *)i;
    else
      v3 = *(struct _SODISPSURF **)v3;
  }
}
