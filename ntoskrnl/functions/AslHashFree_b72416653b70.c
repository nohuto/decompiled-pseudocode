void __fastcall AslHashFree(int *P)
{
  char *v2; // rcx
  int v3; // ebp
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  if ( P )
  {
    v2 = (char *)*((_QWORD *)P + 1);
    if ( v2 )
    {
      v3 = 0;
      if ( *P <= 0 )
        goto LABEL_10;
      v4 = 0LL;
      do
      {
        v5 = *(_QWORD **)&v2[v4];
        if ( v5 )
        {
          do
          {
            v6 = (_QWORD *)v5[2];
            ExFreePoolWithTag(v5, 0x74705041u);
            v5 = v6;
          }
          while ( v6 );
          v2 = (char *)*((_QWORD *)P + 1);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *P );
      if ( v2 )
LABEL_10:
        ExFreePoolWithTag(v2, 0x74705041u);
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
