void __fastcall HalpNumaSortProcessors(unsigned int a1, __int64 a2, int *a3)
{
  unsigned int v3; // r9d
  char v6; // di
  __int64 v7; // rsi
  int *v8; // r8
  __int64 v9; // r10
  int *v10; // rdx
  int *v11; // r11
  int v12; // ecx
  int v13; // ecx

  if ( a1 >= 2 )
  {
    v3 = a1 - 1;
    while ( 1 )
    {
      v6 = 0;
      v7 = v3;
      v8 = a3 + 1;
      v9 = a2 - (_QWORD)a3;
      v10 = a3;
      do
      {
        if ( *v10 > (unsigned int)*v8 )
        {
          v11 = (int *)((char *)v10 + v9);
LABEL_9:
          v12 = *v11;
          v6 = 1;
          *v11 = *(int *)((char *)v8 + v9);
          *(int *)((char *)v8 + v9) = v12;
          v13 = *v10;
          *v10 = *v8;
          *v8 = v13;
          goto LABEL_10;
        }
        if ( *v10 == *v8 )
        {
          v11 = (int *)((char *)v10 + v9);
          if ( *(int *)((char *)v10 + v9) > *(unsigned int *)((char *)v8 + v9) )
            goto LABEL_9;
        }
LABEL_10:
        ++v8;
        ++v10;
        --v7;
      }
      while ( v7 );
      if ( v6 )
      {
        if ( --v3 )
          continue;
      }
      return;
    }
  }
}
